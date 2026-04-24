#include <Arduino.h>
#include "DisplayDriver.h"

// ----------------------
// BUFFER (STATIC)
// ----------------------
lv_disp_draw_buf_t DisplayDriver::draw_buf;
lv_color_t DisplayDriver::buf[240 * 10];

// ----------------------
// FLUSH
// ----------------------
void DisplayDriver::my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {

  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  // ⚠️ ESTA ES LA CLAVE: usar UNA sola instancia
  static TFT_eSPI tft = TFT_eSPI();

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

// ----------------------
// INIT
// ----------------------
void DisplayDriver::begin() {

  lv_init();

  tft.begin();
  tft.setRotation(0);

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, 240 * 10);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);

  disp_drv.hor_res = 240;
  disp_drv.ver_res = 320;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;

  lv_disp_drv_register(&disp_drv);
}

// ----------------------
// LOOP LVGL
// ----------------------
void DisplayDriver::loop() {
  lv_timer_handler();
  lv_tick_inc(5);
  delay(5);
}