#include <WiFi.h>
#include "GasManager.h"
#include "EspNowReceiver.h"
#include "SystemController.h"
#include "ApiServer.h"
#include "DisplayManager.h"
#include "DisplayDriver.h"   // 🔥 IMPORTANTE

const char* ssid = "DANIEL G";
const char* password = "zxc17030";

GasManager gas;
SystemController controller(5, 4, 2);
ApiServer api;
DisplayDriver driver;   // 🔥 NUEVO
DisplayManager display;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("\n\n=== SISTEMA INICIANDO ===");

  // ----------------------
  // WIFI (SIN BLOQUEO)
  // ----------------------
  Serial.print("[WiFi] Conectando");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  unsigned long startAttempt = millis();

  while (WiFi.status() != WL_CONNECTED && millis() - startAttempt < 10000) {
    Serial.print(".");
    delay(500);
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\n[WiFi] OK");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\n[WiFi] ERROR - continuando sin WiFi");
  }

  // ----------------------
  // SISTEMA
  // ----------------------
  Serial.println("[Sistema] Inicializando controlador...");
  controller.begin();

  Serial.println("[ESP-NOW] Inicializando receptor...");
  EspNowReceiver::begin(&gas);

  Serial.println("[API] Iniciando servidor...");
  api.begin(&gas, &controller, 600);

  // ----------------------
  // DISPLAY (🔥 SIEMPRE SE EJECUTA)
  // ----------------------
  Serial.println("[Display] Inicializando...");

  driver.begin();    // LVGL + TFT
  display.begin();   // UI

  Serial.println("=== SISTEMA LISTO ===\n");
}

void loop() {

  // 🔥 1. SIEMPRE primero LVGL
  driver.loop();

  // 🔥 2. lógica sistema
  controller.update(gas, 600);

  // 🔥 3. datos desacoplados
  int gasValue = gas.getValue();
  bool valveClosed = controller.isValveClosed();

  // 🔥 4. UI
  display.update(gasValue, valveClosed);

  // 🔥 5. API
  api.handle();
}