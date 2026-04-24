#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

#include "GasManager.h"

class SystemController {
  private:
    int relayPin;
    int buttonPin;

    bool valveClosed;

    // 🔥 para detectar cambio de estado del gas
    bool gasWasDanger;

  public:
    SystemController(int relay, int button);

    void begin();
    void update(GasManager &gas, int threshold);

    bool isValveClosed();
    void setValve(bool closed);
};

#endif