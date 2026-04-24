#include "SystemController.h"
#include <Arduino.h>

// ----------------------
// CONSTRUCTOR
// ----------------------
SystemController::SystemController(int valveRelay, int button, int extractorRelay) {
  valveRelayPin = valveRelay;
  buttonPin = button;
  extractorRelayPin = extractorRelay;

  valveClosed = false;
  gasWasDanger = false;
}

// ----------------------
// INIT
// ----------------------
void SystemController::begin() {
  pinMode(valveRelayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(extractorRelayPin, OUTPUT);

  digitalWrite(valveRelayPin, HIGH);      // 🔴 válvula CERRADA
  digitalWrite(extractorRelayPin, LOW);   // extractor apagado
}

// ----------------------
// UPDATE
// ----------------------
void SystemController::update(GasManager &gas, int threshold) {

  bool gasDanger = gas.isDanger(threshold);
  int buttonState = digitalRead(buttonPin);

  // ----------------------
  // 🌀 EXTRACTOR (automático)
  // ----------------------
  digitalWrite(extractorRelayPin, gasDanger ? LOW : HIGH);

  // ----------------------
  // 🔴 GAS (evento: solo cuando entra en peligro)
  // ----------------------
  if (gasDanger && !gasWasDanger) {
    digitalWrite(valveRelayPin, HIGH);
    valveClosed = true;

    Serial.print("[AUTO] Gas peligroso → Válvula CERRADA: ");
    Serial.println(gas.getValue());
  }

  gasWasDanger = gasDanger;

  // ----------------------
  // 🔘 BOTÓN (solo cerrar)
  // ----------------------
  if (buttonState == LOW) {
    digitalWrite(valveRelayPin, HIGH);
    valveClosed = true;

    Serial.println("[BOTÓN] Válvula CERRADA");

    delay(300); // anti rebote simple
  }
}

// ----------------------
// ESTADO
// ----------------------
bool SystemController::isValveClosed() {
  return valveClosed;
}

// ----------------------
// APP
// ----------------------
void SystemController::setValve(bool closed) {

  valveClosed = closed;

  digitalWrite(valveRelayPin, closed ? HIGH : LOW);

  Serial.println(closed ? "[APP] Válvula CERRADA" : "[APP] Válvula ABIERTA");
}