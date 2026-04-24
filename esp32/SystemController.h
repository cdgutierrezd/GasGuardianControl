#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

#include "GasManager.h"

class SystemController {
  private:
    int valveRelayPin;      // 🔥 válvula
    int extractorRelayPin;  // 🔥 extractor
    int buttonPin;          // 🔘 botón

    bool valveClosed;

    // 🔥 detectar cambio de estado del gas
    bool gasWasDanger;

  public:
    // 🔥 ahora recibe los 3 pines
    SystemController(int valveRelay, int button, int extractorRelay);

    void begin();
    void update(GasManager &gas, int threshold);

    bool isValveClosed();
    void setValve(bool closed);
};

#endif