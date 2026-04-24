#include "EspNowSender.h"
#include <WiFi.h>
#include "esp_wifi.h"

EspNowSender::EspNowSender(const uint8_t *addr) {
  memcpy(address, addr, 6);
}

void EspNowSender::begin(int channel) {
  WiFi.mode(WIFI_STA);

  esp_wifi_set_channel(channel, WIFI_SECOND_CHAN_NONE);

  Serial.print("Canal: ");
  Serial.println(WiFi.channel());

  if (esp_now_init() != ESP_OK) {
    Serial.println("Error ESP-NOW");
    return;
  }

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, address, 6);
  peerInfo.channel = channel;
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Error agregando peer");
  }

  Serial.println("ESP-NOW listo");
}

bool EspNowSender::send(int value) {
  SensorData data;
  data.gasValue = value;

  esp_err_t result = esp_now_send(address, (uint8_t *)&data, sizeof(data));

  if (result == ESP_OK) {
    Serial.print("Enviado: ");
    Serial.println(value);
    return true;
  } else {
    Serial.print("Error envio: ");
    Serial.println(result);
    return false;
  }
}