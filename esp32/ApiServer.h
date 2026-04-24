#ifndef API_SERVER_H
#define API_SERVER_H

#include <WebServer.h>
#include "GasManager.h"
#include "SystemController.h"

class ApiServer {
  private:
    WebServer server;
    GasManager* gas;
    SystemController* controller;
    int threshold;

  public:
    ApiServer();

    void begin(GasManager* g, SystemController* c, int t);
    void handle();

  private:
    void handleStatus();
    void handleValve();
};

#endif