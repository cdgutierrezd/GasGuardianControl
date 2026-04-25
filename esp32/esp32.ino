#include <WiFi.h>
#include "GasManager.h"
#include "EspNowReceiver.h"
#include "SystemController.h"
#include "ApiServer.h"
#include "DisplayManager.h"
#include "DisplayDriver.h"

// ----------------------
// WIFI CONFIG
// ----------------------
const char* ssid = "X6 DANIEL";
const char* password = "xdxdxdxd";

// ----------------------
// OBJETOS
// ----------------------
GasManager gas;
SystemController controller(5, 4, 2, 13);
ApiServer api;
DisplayDriver driver;
DisplayManager display;

// ----------------------
// ESTADOS
// ----------------------
enum SystemState {
  WIFI_CONNECTING,
  WIFI_CONNECTED_HOLD,
  RUNNING
};

SystemState state = WIFI_CONNECTING;

// ----------------------
// TIMERS
// ----------------------
unsigned long wifiTimer = 0;
unsigned long wifiConnectedTime = 0;

const unsigned long wifiRetryTime = 5000;
const unsigned long loadingHoldTime = 4000;

// ----------------------
// SETUP
// ----------------------
void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("\n\n=== SISTEMA INICIANDO ===");

  // ----------------------
  // DISPLAY
  // ----------------------
  driver.begin();
  display.begin();

  display.setScreen(1); // 🔥 SCREEN2 (LOADING)

  // ----------------------
  // WIFI INIT
  // ----------------------
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  wifiTimer = millis();

  Serial.println("[WiFi] Iniciando conexión...");

  // ----------------------
  // SISTEMA BASE
  // ----------------------
  controller.begin();

  Serial.println("[ESP-NOW] Inicializando receptor...");
  EspNowReceiver::begin(&gas);

  Serial.println("[API] Iniciando servidor...");
  api.begin(&gas, &controller, 600);

  Serial.println("=== SISTEMA LISTO ===\n");
}

// ----------------------
// LOOP (PSEUDO PARALELISMO)
// ----------------------
void loop() {

  // 🔥 1. UI SIEMPRE ACTIVA
  driver.loop();

  // ----------------------
  // WIFI CONNECTING
  // ----------------------
  if (state == WIFI_CONNECTING) {

    display.setScreen(1); // loading

    if (WiFi.status() == WL_CONNECTED) {

      Serial.println("[WiFi] CONECTADO");
      Serial.print("IP: ");
      Serial.println(WiFi.localIP());

      wifiConnectedTime = millis();
      state = WIFI_CONNECTED_HOLD;
    }

    if (millis() - wifiTimer > wifiRetryTime) {

      Serial.println("[WiFi] Reintentando...");

      WiFi.disconnect();
      WiFi.begin(ssid, password);

      wifiTimer = millis();
    }

    return;
  }

  // ----------------------
  // HOLD EN LOADING (SUAVIZADO)
  // ----------------------
  if (state == WIFI_CONNECTED_HOLD) {

    display.setScreen(1); // seguir en loading

    if (millis() - wifiConnectedTime >= loadingHoldTime) {

      Serial.println("[Sistema] entrando a modo normal");

      display.setScreen(0); // MAIN SCREEN
      state = RUNNING;
    }

    return;
  }

  // ----------------------
  // SISTEMA NORMAL
  // ----------------------
  if (state == RUNNING) {

    controller.update(gas, 600);

    int gasValue = gas.getValue();
    bool valveClosed = controller.isValveClosed();

    display.update(gasValue, valveClosed);

    api.handle();
  }
}