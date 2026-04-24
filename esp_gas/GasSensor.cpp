#include "GasSensor.h"
#include <Arduino.h>

GasSensor::GasSensor(int p, int s) {
  pin = p;
  samples = s;
}

int GasSensor::read() {
  long sum = 0;

  for (int i = 0; i < samples; i++) {
    sum += analogRead(pin);
    delayMicroseconds(200); // 🔥 mejor que delay(2)
  }

  return sum / samples;
}