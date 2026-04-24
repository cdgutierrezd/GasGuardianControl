#include "EspNowReceiver.h"
#include <WiFi.h>

GasManager* EspNowReceiver::gasManager = nullptr;

void EspNowReceiver::begin(GasManager* manager) {
  gasManager = manager;

  if (esp_now_init() != ESP_OK) {
    Serial.println("[ERROR] Fallo al inicializar ESP-NOW");
    return;
  }

  esp_now_register_recv_cb(onReceive);
  Serial.println("[ESP-NOW] Receptor activado y listo para recibir datos");
}

void EspNowReceiver::onReceive(const esp_now_recv_info *info, const uint8_t *data, int len) {
  SensorData incoming;
  memcpy(&incoming, data, sizeof(incoming));

  // Mostrar información del ESP que envía
  char macStr[18];
  snprintf(macStr, sizeof(macStr), "%02X:%02X:%02X:%02X:%02X:%02X",
           info->src_addr[0], info->src_addr[1], info->src_addr[2],
           info->src_addr[3], info->src_addr[4], info->src_addr[5]);
  
  Serial.print("[ESP-NOW RECIBIDO] MAC: ");
  Serial.print(macStr);
  Serial.print(" | Gas: ");
  Serial.println(incoming.gasValue);

  if (gasManager != nullptr) {
    gasManager->update(incoming.gasValue);
  }
}