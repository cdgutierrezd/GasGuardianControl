#ifndef DISPLAY_MANAGER_H
#define DISPLAY_MANAGER_H

#include <lvgl.h>
#include "ui.h"
#include "ui_Screen1.h"

class GasManager;
class SystemController;

class DisplayManager {
  public:
    void begin();
    void update(int gasValue, bool valveClosed);

    // ----------------------
    // CONTROL DE PANTALLAS
    // ----------------------
    void showLoadingScreen();
    void showMainScreen();
    void setScreen(int screen);

  private:
    int screenState = 0;
};

#endif