/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/LENOVO/Downloads/ui_gas/assets/Poppins-Medium.ttf -o C:/Users/LENOVO/Downloads/ui_gas/assets\ui_font_normal.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_NORMAL
#define UI_FONT_NORMAL 1
#endif

#if UI_FONT_NORMAL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0xc, 0x60, 0x63, 0x3, 0x18, 0xff, 0xf1, 0x84,
    0xc, 0x60, 0x63, 0x3, 0x18, 0xff, 0xf1, 0x84,
    0xc, 0x60, 0x63, 0x0,

    /* U+0024 "$" */
    0x10, 0x38, 0x7e, 0xd7, 0xd0, 0xd0, 0x78, 0x3e,
    0x17, 0x13, 0xd3, 0x7e, 0x38, 0x10,

    /* U+0025 "%" */
    0x70, 0xcd, 0x98, 0xd9, 0xd, 0xb0, 0x72, 0x0,
    0x40, 0xd, 0xe0, 0xb3, 0x1b, 0x31, 0x33, 0x21,
    0xe0,

    /* U+0026 "&" */
    0x1e, 0x3, 0x30, 0x30, 0x3, 0x80, 0x3c, 0x7,
    0xe6, 0xc6, 0xcc, 0x3c, 0xc1, 0x86, 0x3c, 0x3e,
    0x70,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x18, 0xc3, 0x18, 0x63, 0xc, 0x30, 0xc3, 0xc,
    0x30, 0xc1, 0x86, 0x18, 0x30, 0x60,

    /* U+0029 ")" */
    0x60, 0xc3, 0x6, 0x18, 0x70, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x61, 0x8c, 0x31, 0x80,

    /* U+002A "*" */
    0x33, 0xf7, 0x9e, 0xfc, 0xc0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6b, 0x60,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x30, 0xc6, 0x18, 0x61, 0x8c, 0x30, 0xc3,
    0x8, 0x61, 0x86, 0x10, 0xc3, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0031 "1" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0x3c, 0x66, 0xc3, 0xc3, 0x3, 0x7, 0x6, 0xe,
    0x1c, 0x38, 0x70, 0xff,

    /* U+0033 "3" */
    0x3c, 0xe7, 0xc3, 0x3, 0x6, 0x1c, 0x6, 0x3,
    0x3, 0xc3, 0x66, 0x3c,

    /* U+0034 "4" */
    0x7, 0x3, 0x83, 0xc3, 0x63, 0x31, 0x99, 0x8d,
    0xc6, 0xff, 0x81, 0x80, 0xc0, 0x60,

    /* U+0035 "5" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xfc, 0xe6, 0xc3, 0x3,
    0x3, 0xc3, 0xe6, 0x3c,

    /* U+0036 "6" */
    0x3c, 0x66, 0xc2, 0xc0, 0xc0, 0xde, 0xe7, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0x6, 0xc, 0xc, 0x18,
    0x18, 0x10, 0x30, 0x30,

    /* U+0038 "8" */
    0x3c, 0xe7, 0xc3, 0xc3, 0x66, 0x3c, 0x66, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0x67, 0x3f, 0x3,
    0x3, 0xc3, 0x66, 0x3c,

    /* U+003A ":" */
    0xc0, 0x0, 0xc0,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0x48,

    /* U+003C "<" */
    0x18, 0xc6, 0x30, 0x60, 0xc1, 0x80,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003E ">" */
    0xe1, 0xc3, 0x87, 0x39, 0xce, 0x0,

    /* U+003F "?" */
    0x7d, 0x8f, 0x18, 0x30, 0xe7, 0x8c, 0x18, 0x0,
    0x0, 0xc0,

    /* U+0040 "@" */
    0x7, 0xe0, 0x70, 0xe3, 0x1, 0x99, 0xf3, 0x6c,
    0xcf, 0x63, 0x3d, 0x8c, 0xf6, 0x33, 0xd9, 0xdb,
    0x39, 0xc6, 0x0, 0x1c, 0x20, 0x1f, 0x80,

    /* U+0041 "A" */
    0x1c, 0x7, 0x1, 0x60, 0xd8, 0x36, 0x8, 0xc6,
    0x31, 0xfc, 0xc1, 0xb0, 0x6c, 0x8,

    /* U+0042 "B" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc6, 0xfc, 0xc6, 0xc3,
    0xc3, 0xc3, 0xfe,

    /* U+0043 "C" */
    0x1f, 0x6, 0x19, 0x81, 0xe0, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0x60, 0x66, 0x18, 0x7c, 0x0,

    /* U+0044 "D" */
    0xfe, 0x30, 0xcc, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc1, 0xb0, 0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0xc, 0x30, 0xc3, 0xfc, 0x30, 0xc3, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x1f, 0x6, 0x39, 0x83, 0x60, 0xc, 0x1, 0x8f,
    0xf0, 0x1e, 0x3, 0x60, 0xc6, 0x30, 0x7c, 0x0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0xc7,
    0x8d, 0xf0,

    /* U+004B "K" */
    0xc3, 0x63, 0x33, 0x1b, 0x8f, 0x87, 0x83, 0xe1,
    0xb8, 0xcc, 0x63, 0x30, 0xc0,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf,
    0xc0,

    /* U+004D "M" */
    0xc0, 0x3e, 0x7, 0xe0, 0x7f, 0xf, 0xf0, 0xfd,
    0x9b, 0xd9, 0xbc, 0xd3, 0xcf, 0x3c, 0x63, 0xc6,
    0x30,

    /* U+004E "N" */
    0xc1, 0xf0, 0xfc, 0x7e, 0x3d, 0x9e, 0x4f, 0x37,
    0x8f, 0xc7, 0xe1, 0xf0, 0x60,

    /* U+004F "O" */
    0x1f, 0x6, 0x31, 0x83, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0x60, 0xc6, 0x30, 0x7c, 0x0,

    /* U+0050 "P" */
    0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1f, 0x6, 0x31, 0x83, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0x60, 0xc6, 0x38, 0x7e, 0x0,
    0xe0, 0xe,

    /* U+0052 "R" */
    0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfc, 0xcc, 0xcc,
    0xc6, 0xc6, 0xc3,

    /* U+0053 "S" */
    0x3c, 0x46, 0xc3, 0xc0, 0xf8, 0x7e, 0xf, 0x3,
    0xc3, 0xe2, 0x3c,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x8f, 0x80,

    /* U+0056 "V" */
    0xc0, 0x6c, 0x19, 0x83, 0x18, 0x43, 0x18, 0x63,
    0x6, 0xc0, 0xd8, 0xb, 0x1, 0xc0, 0x38, 0x0,

    /* U+0057 "W" */
    0xc1, 0x83, 0x61, 0x86, 0x63, 0xc6, 0x63, 0xc6,
    0x22, 0xc4, 0x36, 0x6c, 0x36, 0x6c, 0x36, 0x68,
    0x14, 0x28, 0x1c, 0x38, 0x1c, 0x38,

    /* U+0058 "X" */
    0xc3, 0x31, 0x99, 0x86, 0xc1, 0xc0, 0xc0, 0x70,
    0x7c, 0x66, 0x31, 0xb0, 0xc0,

    /* U+0059 "Y" */
    0x61, 0x98, 0x63, 0x30, 0xcc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0x61, 0x87, 0xc, 0x30, 0x61,
    0x83, 0xf8,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcf,

    /* U+005C "\\" */
    0xc3, 0xc, 0x10, 0x61, 0x86, 0x8, 0x30, 0xc3,
    0x4, 0x18, 0x61, 0x83, 0xc, 0x30,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3f,

    /* U+005E "^" */
    0x18, 0xe, 0xf, 0x6, 0x82, 0x63, 0x31, 0x8d,
    0x86, 0xc1, 0x80,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x8c, 0x71,

    /* U+0061 "a" */
    0x3d, 0xb1, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc7, 0x3d, 0x80,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x1b, 0xce, 0x36, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf8, 0xdb, 0xc0,

    /* U+0063 "c" */
    0x3e, 0x31, 0xb0, 0xd8, 0xc, 0x6, 0x3, 0xc,
    0xc6, 0x3e, 0x0,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x67, 0xb6, 0x3e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xe7, 0xb0,

    /* U+0065 "e" */
    0x3e, 0x31, 0xb0, 0x78, 0x3f, 0xfe, 0x3, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0066 "f" */
    0x36, 0x6f, 0x66, 0x66, 0x66, 0x66,

    /* U+0067 "g" */
    0x3d, 0xb1, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc7, 0x3d, 0x80, 0xd0, 0x6c, 0x63, 0xe0,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xfc, 0xe6, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0xc3, 0xff, 0xff,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf8, 0xf0,
    0xf8, 0xd8, 0xcc, 0xc6,

    /* U+006C "l" */
    0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xfe, 0xf3, 0x9e, 0x6c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xc,

    /* U+006E "n" */
    0xfc, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+006F "o" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0070 "p" */
    0xde, 0x71, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0xc6, 0xde, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0071 "q" */
    0x3d, 0xb1, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc7, 0x3d, 0x80, 0xc0, 0x60, 0x30, 0x18,

    /* U+0072 "r" */
    0xff, 0x31, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x7d, 0x9f, 0x1f, 0x87, 0xc3, 0xf1, 0xe3, 0x7c,

    /* U+0074 "t" */
    0x63, 0x3e, 0xc6, 0x31, 0x8c, 0x63, 0xe,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x67,
    0x3f,

    /* U+0076 "v" */
    0xc1, 0xb0, 0xd8, 0xcc, 0x63, 0x21, 0xb0, 0x58,
    0x38, 0x1c, 0x0,

    /* U+0077 "w" */
    0xc3, 0x1a, 0x38, 0xd9, 0xc4, 0xcb, 0x62, 0x5b,
    0x16, 0xd0, 0xf2, 0x87, 0x1c, 0x18, 0xc0,

    /* U+0078 "x" */
    0xe3, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66,
    0xc7,

    /* U+0079 "y" */
    0xc1, 0xb0, 0xd8, 0xc4, 0x63, 0x21, 0xb0, 0x70,
    0x38, 0xc, 0xc, 0x6, 0x6, 0x3, 0x0,

    /* U+007A "z" */
    0xfc, 0x31, 0x86, 0x31, 0x86, 0x30, 0xfc,

    /* U+007B "{" */
    0x1c, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xe3, 0x83,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe1, 0x83, 0xc, 0x30, 0xc3, 0xc, 0x1c, 0x73,
    0xc, 0x30, 0xc3, 0xc, 0x63, 0x80,

    /* U+007E "~" */
    0xf3, 0x38
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 82, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 83, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6, .adv_w = 223, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 166, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 203, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 44, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 75, .adv_w = 126, .box_w = 6, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 89, .adv_w = 126, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 103, .adv_w = 129, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 108, .adv_w = 183, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 116, .adv_w = 58, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 118, .adv_w = 150, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 119, .adv_w = 62, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 132, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 134, .adv_w = 164, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 90, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 164, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 164, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 63, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 78, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 257, .adv_w = 157, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 263, .adv_w = 198, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 269, .adv_w = 151, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 275, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 262, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 308, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 161, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 182, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 134, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 180, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 162, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 226, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 185, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 201, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 201, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 521, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 177, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 178, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 256, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 169, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 155, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 124, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 651, .adv_w = 184, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 665, .adv_w = 124, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 674, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 685, .adv_w = 204, .box_w = 9, .box_h = 1, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 687, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 689, .adv_w = 174, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 85, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 771, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 68, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 68, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 794, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 68, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 266, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 860, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 875, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 95, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 211, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 149, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 955, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 132, .box_w = 6, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 976, .adv_w = 83, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 980, .adv_w = 132, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 994, .adv_w = 142, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_normal = {
#else
lv_font_t ui_font_normal = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_NORMAL*/

