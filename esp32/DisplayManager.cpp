#include <Arduino.h>
#include "DisplayManager.h"

#include "GasManager.h"
#include "SystemController.h"

// ----------------------
// INIT UI
// ----------------------
void DisplayManager::begin() {
  ui_init();
  lv_arc_set_range(ui_uiArcGas, 0, 100);
}

// ----------------------
// UPDATE UI (REAL)
// ----------------------
void DisplayManager::update(int gasValue, bool valveClosed) {

  lv_timer_handler();
  lv_tick_inc(5);

  static unsigned long lastUpdate = 0;

  if (millis() - lastUpdate < 500) return;
  lastUpdate = millis();

  // LABEL
  lv_label_set_text_fmt(ui_uiLabelGasValue, "%d", gasValue);

  // ARC
  int porcentaje = (gasValue * 100) / 800;
  if (porcentaje > 100) porcentaje = 100;

  lv_arc_set_value(ui_uiArcGas, porcentaje);

  // ESTADO
  if (gasValue > 600) {
    lv_label_set_text(ui_uiLabelState, "ALERTA");
  } else {
    lv_label_set_text(ui_uiLabelState, "NORMAL");
  }

  // BOTONES
  if (valveClosed) {
    lv_obj_add_state(ui_uiBtnValve, LV_STATE_CHECKED);
  } else {
    lv_obj_clear_state(ui_uiBtnValve, LV_STATE_CHECKED);
  }

  if (gasValue > 600) {
    lv_obj_add_state(ui_uiBtnExtractor, LV_STATE_CHECKED);
  } else {
    lv_obj_clear_state(ui_uiBtnExtractor, LV_STATE_CHECKED);
  }
}