#ifndef DISPLAY_DRIVER_H
#define DISPLAY_DRIVER_H

#include <lvgl.h>
#include <TFT_eSPI.h>

class DisplayDriver {
  private:
    TFT_eSPI tft;

    static lv_disp_draw_buf_t draw_buf;
    static lv_color_t buf[240 * 10];

    static void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);

  public:
    void begin();
    void loop();
};

#endif