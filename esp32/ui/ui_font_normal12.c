/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font C:/Users/LENOVO/Downloads/ui_gas/assets/Poppins-Medium.ttf -o C:/Users/LENOVO/Downloads/ui_gas/assets\ui_font_normal12.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_NORMAL12
#define UI_FONT_NORMAL12 1
#endif

#if UI_FONT_NORMAL12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd, 0x80,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x19, 0x6, 0x47, 0xfc, 0x4c, 0x13, 0xc, 0x8f,
    0xf8, 0x88, 0x26, 0x0,

    /* U+0024 "$" */
    0x21, 0xea, 0xe8, 0xe1, 0xe2, 0xc9, 0xed, 0xe2,
    0x0,

    /* U+0025 "%" */
    0x62, 0x94, 0x94, 0x68, 0x8, 0x17, 0x35, 0x35,
    0x67,

    /* U+0026 "&" */
    0x18, 0x12, 0x8, 0x6, 0x3, 0x87, 0xcb, 0x19,
    0x8c, 0x79, 0x80,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x26, 0x4c, 0x88, 0x88, 0x88, 0xc4, 0x42,

    /* U+0029 ")" */
    0x46, 0x23, 0x11, 0x11, 0x11, 0x32, 0x64,

    /* U+002A "*" */
    0x2f, 0xf4,

    /* U+002B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+002C "," */
    0x78,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x11, 0x33, 0x22, 0x66, 0x44, 0x4c, 0x88,

    /* U+0030 "0" */
    0x7b, 0x28, 0x61, 0x86, 0x18, 0x72, 0x78,

    /* U+0031 "1" */
    0xd5, 0x55, 0x40,

    /* U+0032 "2" */
    0x74, 0x62, 0x11, 0x88, 0x88, 0xf8,

    /* U+0033 "3" */
    0x79, 0x10, 0x41, 0x18, 0x10, 0x51, 0x38,

    /* U+0034 "4" */
    0xc, 0x38, 0x51, 0xa6, 0x58, 0xbf, 0x82, 0x4,

    /* U+0035 "5" */
    0xfe, 0x8, 0x3e, 0xcc, 0x10, 0x63, 0x78,

    /* U+0036 "6" */
    0x79, 0x38, 0x3e, 0xce, 0x18, 0x73, 0x78,

    /* U+0037 "7" */
    0xfc, 0x30, 0x82, 0x10, 0x43, 0x8, 0x60,

    /* U+0038 "8" */
    0x7a, 0x18, 0x63, 0x7a, 0x18, 0x61, 0x78,

    /* U+0039 "9" */
    0x7b, 0x38, 0x61, 0xcd, 0xf0, 0x73, 0x78,

    /* U+003A ":" */
    0xc6,

    /* U+003B ";" */
    0xc3, 0x80,

    /* U+003C "<" */
    0x33, 0x30, 0xc3, 0x0,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x61, 0x86, 0x66, 0x0,

    /* U+003F "?" */
    0x74, 0x42, 0x17, 0x20, 0x8, 0x40,

    /* U+0040 "@" */
    0xf, 0x86, 0x9, 0x3e, 0xa4, 0x99, 0x13, 0x22,
    0x64, 0xd4, 0x6e, 0x40, 0x7, 0xc0,

    /* U+0041 "A" */
    0x18, 0x18, 0x1c, 0x34, 0x24, 0x26, 0x7e, 0x42,
    0x43,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x3c, 0x46, 0x80, 0x80, 0x80, 0x80, 0x83, 0x46,
    0x3c,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0x60, 0xc2, 0xf8,

    /* U+0045 "E" */
    0xf8, 0x88, 0xf8, 0x88, 0xf0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0x42, 0x10, 0x80,

    /* U+0047 "G" */
    0x3e, 0x31, 0xb0, 0x10, 0x8, 0xfc, 0xf, 0x6,
    0x86, 0x3e, 0x0,

    /* U+0048 "H" */
    0x86, 0x18, 0x61, 0xfe, 0x18, 0x61, 0x84,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x29, 0x70,

    /* U+004B "K" */
    0x8e, 0x6b, 0x38, 0xc3, 0x8b, 0x26, 0x8c,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x88, 0xf0,

    /* U+004D "M" */
    0x80, 0xe0, 0xf0, 0x7c, 0x7a, 0x2d, 0xb6, 0x53,
    0x39, 0x88, 0x80,

    /* U+004E "N" */
    0x83, 0x87, 0x8d, 0x99, 0x33, 0x63, 0xc3, 0x82,

    /* U+004F "O" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3e, 0x2, 0x1,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x69, 0xa2, 0x84,

    /* U+0053 "S" */
    0x7a, 0x38, 0x30, 0x78, 0x30, 0x71, 0x78,

    /* U+0054 "T" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8, 0x20,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+0056 "V" */
    0xc3, 0x43, 0x62, 0x66, 0x26, 0x34, 0x3c, 0x18,
    0x18,

    /* U+0057 "W" */
    0xc6, 0x34, 0x62, 0x46, 0x26, 0xf6, 0x69, 0x62,
    0x94, 0x29, 0x43, 0x9c, 0x30, 0x80,

    /* U+0058 "X" */
    0x87, 0x27, 0x8c, 0x30, 0xc7, 0xb2, 0x8c,

    /* U+0059 "Y" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x31, 0x84, 0x30, 0x86, 0x30, 0xfc,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x86, 0x10, 0x84, 0x30, 0x84, 0x21, 0x84, 0x21,
    0x8c,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x70,

    /* U+005E "^" */
    0x18, 0x30, 0xe1, 0x62, 0x4c, 0xd0, 0x80,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x98, 0x80,

    /* U+0061 "a" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x80,

    /* U+0062 "b" */
    0x81, 0x2, 0xe6, 0x28, 0x30, 0x60, 0xe2, 0xb8,

    /* U+0063 "c" */
    0x7b, 0x38, 0x20, 0x83, 0x37, 0x80,

    /* U+0064 "d" */
    0x2, 0x4, 0xea, 0x38, 0x30, 0x60, 0xa3, 0x3a,

    /* U+0065 "e" */
    0x7b, 0x38, 0x7f, 0x83, 0x37, 0x80,

    /* U+0066 "f" */
    0x6b, 0xa4, 0x92, 0x40,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x81, 0xc6,
    0xf8,

    /* U+0068 "h" */
    0x82, 0xf, 0xb3, 0x86, 0x18, 0x61, 0x84,

    /* U+0069 "i" */
    0xff, 0x80,

    /* U+006A "j" */
    0x55, 0x55, 0x57,

    /* U+006B "k" */
    0x84, 0x27, 0x6e, 0x63, 0x96, 0x98,

    /* U+006C "l" */
    0xff, 0x80,

    /* U+006D "m" */
    0xfb, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0x8,

    /* U+006E "n" */
    0xfb, 0x38, 0x61, 0x86, 0x18, 0x40,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x38, 0xae, 0x40, 0x81,
    0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x81, 0x2,
    0x4,

    /* U+0072 "r" */
    0xf2, 0x49, 0x20,

    /* U+0073 "s" */
    0x74, 0x70, 0xe1, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x70,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0xc0,

    /* U+0076 "v" */
    0xc6, 0x89, 0x33, 0x62, 0x87, 0xc, 0x0,

    /* U+0077 "w" */
    0xcc, 0xd3, 0x24, 0xc9, 0x7a, 0x73, 0xc, 0xc3,
    0x30,

    /* U+0078 "x" */
    0xcd, 0xa3, 0xc, 0x31, 0x6c, 0xc0,

    /* U+0079 "y" */
    0xc6, 0x89, 0xb3, 0x42, 0x87, 0x4, 0x18, 0x20,
    0x40,

    /* U+007A "z" */
    0xf8, 0xcc, 0x46, 0x63, 0xe0,

    /* U+007B "{" */
    0x69, 0x24, 0xb6, 0x49, 0x24, 0xc0,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0xc4, 0x44, 0x44, 0x77, 0x44, 0x44, 0x4c,

    /* U+007E "~" */
    0x75, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 50, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 62, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4, .adv_w = 167, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 25, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 33, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 46, .adv_w = 94, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 94, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 60, .adv_w = 97, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 62, .adv_w = 137, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 67, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 68, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 69, .adv_w = 46, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 99, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 77, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 67, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 111, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 47, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 58, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 146, .adv_w = 118, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 150, .adv_w = 149, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 153, .adv_w = 113, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 157, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 197, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 177, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 101, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 148, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 135, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 138, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 151, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 305, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 132, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 133, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 127, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 93, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 382, .adv_w = 138, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 391, .adv_w = 93, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 126, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 402, .adv_w = 153, .box_w = 7, .box_h = 1, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 403, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 405, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 64, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 453, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 51, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 465, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 199, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 505, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 514, .adv_w = 74, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 111, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 158, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 564, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 99, .box_w = 3, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 575, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 577, .adv_w = 99, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 584, .adv_w = 106, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
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
const lv_font_t ui_font_normal12 = {
#else
lv_font_t ui_font_normal12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_NORMAL12*/

