/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:/Users/LENOVO/Downloads/ui_gas/assets/Poppins-Light.ttf -o C:/Users/LENOVO/Downloads/ui_gas/assets\ui_font_light10.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_LIGHT10
#define UI_FONT_LIGHT10 1
#endif

#if UI_FONT_LIGHT10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf9,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x12, 0x24, 0x7f, 0x24, 0x24, 0xfe, 0x28, 0x48,

    /* U+0024 "$" */
    0x23, 0xab, 0x46, 0x1c, 0xb5, 0x71, 0x0,

    /* U+0025 "%" */
    0xe9, 0x52, 0xc7, 0x82, 0x7, 0xd4, 0xaf,

    /* U+0026 "&" */
    0x70, 0xa1, 0x1, 0xd, 0x51, 0xa3, 0x3a,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x89, 0x10,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x29, 0x40,

    /* U+002A "*" */
    0x25, 0x70,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x22, 0x22, 0x44, 0x44, 0x48,

    /* U+0030 "0" */
    0x76, 0x63, 0x18, 0xc6, 0x6e,

    /* U+0031 "1" */
    0xd5, 0x55,

    /* U+0032 "2" */
    0x74, 0x62, 0x11, 0x11, 0x1f,

    /* U+0033 "3" */
    0x74, 0x42, 0x61, 0xc6, 0x2e,

    /* U+0034 "4" */
    0x18, 0xa2, 0x92, 0x8b, 0xf0, 0x82,

    /* U+0035 "5" */
    0xf4, 0x21, 0x6c, 0x86, 0x2e,

    /* U+0036 "6" */
    0x76, 0xa1, 0x6c, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xf8, 0x44, 0x21, 0x10, 0x88,

    /* U+0038 "8" */
    0x74, 0x62, 0xe8, 0xc6, 0x2e,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x86, 0x6e,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x40, 0x68,

    /* U+003C "<" */
    0x2a, 0x22,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x88, 0xa8,

    /* U+003F "?" */
    0x69, 0x11, 0x64, 0x4,

    /* U+0040 "@" */
    0x1e, 0x10, 0x97, 0xb6, 0x9a, 0x4d, 0x2e, 0xec,
    0x80, 0x38, 0x0,

    /* U+0041 "A" */
    0x10, 0xc3, 0x12, 0x49, 0xe4, 0x61,

    /* U+0042 "B" */
    0xf4, 0x63, 0x1f, 0x46, 0x3e,

    /* U+0043 "C" */
    0x38, 0x8a, 0xc, 0x8, 0x10, 0x51, 0x1c,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0xbc,

    /* U+0045 "E" */
    0xf8, 0x88, 0xf8, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88,

    /* U+0047 "G" */
    0x38, 0x8a, 0xc, 0x9, 0xf0, 0x51, 0x1c,

    /* U+0048 "H" */
    0x8c, 0x63, 0x1f, 0xc6, 0x31,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x96,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8c, 0x52, 0x51,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0x83, 0x8f, 0x1e, 0x5a, 0xb5, 0x6c, 0xc9,

    /* U+004E "N" */
    0x8e, 0x73, 0x5a, 0xd6, 0x71,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x4,
    0x4,

    /* U+0052 "R" */
    0xf4, 0x63, 0x1f, 0x52, 0x51,

    /* U+0053 "S" */
    0x74, 0x60, 0x83, 0x6, 0x2e,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0x86, 0x14, 0x52, 0x48, 0xa3, 0x4,

    /* U+0057 "W" */
    0x88, 0xc6, 0x55, 0x2a, 0xa5, 0x52, 0x99, 0x8c,
    0x44,

    /* U+0058 "X" */
    0x8a, 0x4c, 0x63, 0x29, 0x31,

    /* U+0059 "Y" */
    0x8c, 0x54, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0x84, 0x44, 0x22, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xab,

    /* U+005C "\\" */
    0x88, 0x84, 0x44, 0x42, 0x22, 0x11,

    /* U+005D "]" */
    0xd5, 0x55, 0x57,

    /* U+005E "^" */
    0x0, 0xc3, 0x12, 0x4a, 0x20,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x77, 0x38, 0x61, 0xcd, 0xd0,

    /* U+0062 "b" */
    0x82, 0xb, 0xb3, 0x86, 0x1c, 0xee,

    /* U+0063 "c" */
    0x76, 0x61, 0xc, 0xb8,

    /* U+0064 "d" */
    0x4, 0x17, 0x73, 0x86, 0x1c, 0xdd,

    /* U+0065 "e" */
    0x74, 0x7f, 0x8, 0xb8,

    /* U+0066 "f" */
    0x6b, 0xa4, 0x92,

    /* U+0067 "g" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0x53, 0x78,

    /* U+0068 "h" */
    0x84, 0x2d, 0x98, 0xc6, 0x31,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x5c,

    /* U+006B "k" */
    0x88, 0x9a, 0xcc, 0xa9,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xb7, 0x64, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc4,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xbb, 0x38, 0x61, 0xce, 0xe8, 0x20, 0x80,

    /* U+0071 "q" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0x41, 0x4,

    /* U+0072 "r" */
    0xba, 0x49, 0x0,

    /* U+0073 "s" */
    0xe9, 0x87, 0x97,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x47,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa5, 0x10,

    /* U+0077 "w" */
    0x89, 0x99, 0x5a, 0x6a, 0x66, 0x24,

    /* U+0078 "x" */
    0x95, 0x22, 0x59,

    /* U+0079 "y" */
    0x8c, 0x54, 0xa3, 0x10, 0x84, 0x40,

    /* U+007A "z" */
    0xf2, 0x44, 0x8f,

    /* U+007B "{" */
    0x69, 0x25, 0xb2, 0x49, 0x30,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xc9, 0x24, 0xda, 0x49, 0x60,

    /* U+007E "~" */
    0x7b
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 44, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 42, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3, .adv_w = 130, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 33, .adv_w = 67, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 38, .adv_w = 67, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 43, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 45, .adv_w = 105, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 49, .adv_w = 28, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 83, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 51, .adv_w = 29, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 71, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 58, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 47, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 30, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 36, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 109, .adv_w = 81, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 111, .adv_w = 108, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 113, .adv_w = 79, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 115, .adv_w = 82, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 130, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 79, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 109, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 37, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 67, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 110, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 221, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 106, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 153, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 59, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 274, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 280, .adv_w = 59, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 288, .adv_w = 108, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 289, .adv_w = 42, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 290, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 100, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 325, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 37, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 37, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 334, .adv_w = 77, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 37, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 164, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 101, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 103, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 362, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 369, .adv_w = 58, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 82, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 57, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 101, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 88, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 130, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 402, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 66, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 410, .adv_w = 42, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 412, .adv_w = 66, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 417, .adv_w = 78, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
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
const lv_font_t ui_font_light10 = {
#else
lv_font_t ui_font_light10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_LIGHT10*/

