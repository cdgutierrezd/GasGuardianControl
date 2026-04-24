SET(SOURCES ui_Screen1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_base_png.c
    ui_img_base2_png.c
    ui_img_1429767708.c
    ui_img_admirador_png.c
    fonts/ui_font_light10.c
    fonts/ui_font_normal.c
    fonts/ui_font_normal10.c
    fonts/ui_font_normal12.c
    fonts/ui_font_normal26.c)

add_library(ui ${SOURCES})
