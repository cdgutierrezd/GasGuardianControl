#include "SystemController.h"
#include <Arduino.h>

SystemController::SystemController(int relay, int button) {
  relayPin = relay;
  buttonPin = button;
  valveClosed = false;
}

void SystemController::begin() {
  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(relayPin, HIGH);
}

void SystemController::update(GasManager &gas, int threshold) {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(relayPin, LOW);
    valveClosed = true;
    Serial.println("[BOTÓN MANUAL] Válvula CERRADA por botón físico");
    return;
  }

  if (gas.isDanger(threshold)) {
    digitalWrite(relayPin, LOW);

    if (!valveClosed) {
      valveClosed = true;
      Serial.print("[AUTOMÁTICO] Válvula CERRADA - Gas peligroso detectado: ");
      Serial.println(gas.getValue());
    }

  } else {
    digitalWrite(relayPin, HIGH);
    valveClosed = false;
  }
}

bool SystemController::isValveClosed() {
  return valveClosed;
}

void SystemController::setValve(bool closed) {
  valveClosed = closed;
}