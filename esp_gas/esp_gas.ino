#include "GasSensor.h"
#include "EspNowSender.h"

const int pinMQ6 = 35;

uint8_t receiverAddress[] = {0x30, 0x76, 0xF5, 0xF4, 0x14, 0xD4};

GasSensor sensor(pinMQ6, 50);
EspNowSender sender(receiverAddress);

unsigned long lastSend = 0;
const int interval = 500;

void setup() {
  Serial.begin(115200);

  sender.begin(4); // canal WiFi
}

void loop() {

  // 🔥 control de tiempo SIN delay
  if (millis() - lastSend >= interval) {
    lastSend = millis();

    int gas = sensor.read();

    sender.send(gas);
  }
}