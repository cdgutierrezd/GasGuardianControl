#include "ApiServer.h"

ApiServer::ApiServer() : server(80) {}

void ApiServer::begin(GasManager* g, SystemController* c, int t) {
  gas = g;
  controller = c;
  threshold = t;

  server.on("/status", [this]() { handleStatus(); });
  server.on("/valve", [this]() { handleValve(); });

  server.begin();
}

void ApiServer::handle() {
  server.handleClient();
}

void ApiServer::handleStatus() {
  String state = gas->isDanger(threshold) ? "ALERT" : "NORMAL";

  String json = "{";
  json += "\"gas\":" + String(gas->getValue()) + ",";
  json += "\"state\":\"" + state + "\",";
  json += "\"valve\":\"" + String(controller->isValveClosed() ? "CLOSED" : "OPEN") + "\"";
  json += "}";

  server.send(200, "application/json", json);
}

void ApiServer::handleValve() {
  String action = server.arg("action");

  if (action == "open" && gas->isDanger(threshold)) {
    Serial.println("[APP] Intento de abrir válvula - PELIGRO: Gas detectado");
    server.send(403, "text/plain", "Gas detected");
    return;
  }

  if (action == "close") {
    controller->setValve(true);
    Serial.println("[APP] Válvula CERRADA desde aplicación");
  }
  if (action == "open") {
    controller->setValve(false);
    Serial.println("[APP] Válvula ABIERTA desde aplicación");
  }

  server.send(200, "text/plain", "OK");
}