#include "SystemController.h"
#include <Arduino.h>

SystemController::SystemController(int relay, int button) {
  relayPin = relay;
  buttonPin = button;

  valveClosed = false;
  gasWasDanger = false;
}

void SystemController::begin() {
  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(relayPin, HIGH); // válvula abierta
}

// 🔥 LÓGICA PRINCIPAL
void SystemController::update(GasManager &gas, int threshold) {

  bool gasDanger = gas.isDanger(threshold);
  int buttonState = digitalRead(buttonPin);

  // ----------------------
  // 🔴 GAS (evento: solo cuando cambia)
  // ----------------------
  if (gasDanger && !gasWasDanger) {
    digitalWrite(relayPin, LOW);
    valveClosed = true;

    Serial.print("[AUTO] Gas peligroso → Válvula CERRADA: ");
    Serial.println(gas.getValue());
  }

  gasWasDanger = gasDanger;

  // ----------------------
  // 🔘 BOTÓN (siempre funciona)
  // ----------------------
  if (buttonState == LOW) {
    valveClosed = !valveClosed;  // 🔥 toggle

    digitalWrite(relayPin, valveClosed ? LOW : HIGH);

    Serial.println(valveClosed ? "[BOTÓN] CERRADA" : "[BOTÓN] ABIERTA");

    delay(300); // anti rebote simple
  }

  // ❌ NO más lógica automática
}

// ----------------------
// 📊 ESTADO
// ----------------------
bool SystemController::isValveClosed() {
  return valveClosed;
}

// ----------------------
// 📱 APP
// ----------------------
void SystemController::setValve(bool closed) {

  valveClosed = closed;

  digitalWrite(relayPin, closed ? LOW : HIGH);

  Serial.println(closed ? "[APP] CERRADA" : "[APP] ABIERTA");
}