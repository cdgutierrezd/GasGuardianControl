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
// TIEMPOS (SIN MAGIC NUMBERS)
// ----------------------
const unsigned long SCREEN_LOADING_TIME = 10000;
const unsigned long WIFI_RETRY_TIME = 10000;

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
  STARTING,
  RUNNING
};

SystemState state = STARTING;

// ----------------------
// TIMERS
// ----------------------
unsigned long wifiTimer = 0;
unsigned long screenStartTime = 0;

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
  // WIFI (NO BLOQUEANTE)
  // ----------------------
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  wifiTimer = millis();
  screenStartTime = millis();

  Serial.println("[WiFi] Intentando conexión en background...");

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
  // WIFI BACKGROUND TASK
  // ----------------------
  if (WiFi.status() != WL_CONNECTED) {

    if (millis() - wifiTimer > WIFI_RETRY_TIME) {

      Serial.println("[WiFi] Reintentando...");

      WiFi.disconnect();
      WiFi.begin(ssid, password);

      wifiTimer = millis();
    }
  }

  // ----------------------
  // TRANSICIÓN UI (INDEPENDIENTE DEL WIFI)
  // ----------------------
  if (state == STARTING) {

    display.setScreen(1); // loading

    if (millis() - screenStartTime > SCREEN_LOADING_TIME) {

      Serial.println("[UI] pasando a pantalla principal");

      display.setScreen(0); // main screen
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