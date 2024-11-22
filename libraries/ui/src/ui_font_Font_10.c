/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:/Users/761681/SquareLine/assets/Open 24 Display St.ttf -o C:/Users/761681/SquareLine/assets\ui_font_Font_10.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_10
#define UI_FONT_FONT_10 1
#endif

#if UI_FONT_FONT_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfb,

    /* U+0022 "\"" */
    0xc0,

    /* U+0023 "#" */
    0x9, 0x4, 0x47, 0xc8, 0x48, 0xfd, 0x9, 0x4,
    0x80,

    /* U+0024 "$" */
    0x4, 0x6c, 0xce, 0x55, 0x74,

    /* U+0025 "%" */
    0x9a, 0x22, 0x49, 0x90,

    /* U+0026 "&" */
    0x42, 0x86, 0x38, 0x9e, 0x7e, 0x0,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x6a, 0xa4,

    /* U+0029 ")" */
    0x95, 0x58,

    /* U+002A "*" */
    0xff, 0x80,

    /* U+002B "+" */
    0x4b, 0xa4,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x12, 0x2, 0x44, 0x80,

    /* U+0030 "0" */
    0x69, 0xb4, 0xd9, 0x70,

    /* U+0031 "1" */
    0x74, 0x82, 0x48,

    /* U+0032 "2" */
    0x61, 0x1e, 0x88, 0x60,

    /* U+0033 "3" */
    0xe1, 0x1f, 0x11, 0xf0,

    /* U+0034 "4" */
    0x99, 0x97, 0x11, 0x10,

    /* U+0035 "5" */
    0x68, 0x8e, 0x11, 0x70,

    /* U+0036 "6" */
    0x68, 0x8e, 0x99, 0x70,

    /* U+0037 "7" */
    0xe1, 0x10, 0x11, 0x10,

    /* U+0038 "8" */
    0x69, 0x9e, 0x99, 0x70,

    /* U+0039 "9" */
    0x69, 0x97, 0x11, 0x70,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x86,

    /* U+003C "<" */
    0x3a, 0x30,

    /* U+003D "=" */
    0xe3, 0x80,

    /* U+003E ">" */
    0x8d, 0xc0,

    /* U+003F "?" */
    0xe1, 0x1f, 0x88, 0x80,

    /* U+0040 "@" */
    0x69, 0xb4, 0xd9, 0x70,

    /* U+0041 "A" */
    0x69, 0x9e, 0x99, 0x90,

    /* U+0042 "B" */
    0xe9, 0x9e, 0x99, 0xf0,

    /* U+0043 "C" */
    0x78, 0x80, 0x88, 0x70,

    /* U+0044 "D" */
    0xe9, 0x90, 0x99, 0xf0,

    /* U+0045 "E" */
    0x78, 0x8f, 0x88, 0x70,

    /* U+0046 "F" */
    0x78, 0x8f, 0x88, 0x80,

    /* U+0047 "G" */
    0x68, 0x82, 0x99, 0x70,

    /* U+0048 "H" */
    0x99, 0x9e, 0x99, 0x90,

    /* U+0049 "I" */
    0xee,

    /* U+004A "J" */
    0x11, 0x10, 0x99, 0x70,

    /* U+004B "K" */
    0x89, 0xae, 0x99, 0x90,

    /* U+004C "L" */
    0x88, 0x80, 0x88, 0x70,

    /* U+004D "M" */
    0x6f, 0x91, 0x91, 0x0, 0x91, 0x91, 0x91,

    /* U+004E "N" */
    0x9d, 0xb0, 0x99, 0x90,

    /* U+004F "O" */
    0x69, 0x90, 0x99, 0x70,

    /* U+0050 "P" */
    0x69, 0x9e, 0x88, 0x80,

    /* U+0051 "Q" */
    0x69, 0x90, 0x99, 0x70,

    /* U+0052 "R" */
    0x69, 0x9e, 0xaa, 0x90,

    /* U+0053 "S" */
    0x68, 0x8e, 0x11, 0x70,

    /* U+0054 "T" */
    0xf0, 0x22, 0x2, 0x20,

    /* U+0055 "U" */
    0x99, 0x90, 0x99, 0x70,

    /* U+0056 "V" */
    0x99, 0x99, 0x89, 0x60,

    /* U+0057 "W" */
    0x93, 0x26, 0x4c, 0x98, 0x15, 0x5b, 0x0,

    /* U+0058 "X" */
    0x96, 0x26, 0x66, 0x90,

    /* U+0059 "Y" */
    0x99, 0x89, 0x64, 0x40,

    /* U+005A "Z" */
    0xe1, 0x20, 0x48, 0x70,

    /* U+005B "[" */
    0x6a, 0xa4,

    /* U+005C "\\" */
    0x84, 0x4, 0x22, 0x10,

    /* U+005D "]" */
    0x95, 0x58,

    /* U+005E "^" */
    0x26, 0x90,

    /* U+005F "_" */
    0xe0,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x69, 0x9e, 0x99, 0x90,

    /* U+0062 "b" */
    0xe9, 0x9e, 0x99, 0xf0,

    /* U+0063 "c" */
    0x78, 0x80, 0x88, 0x70,

    /* U+0064 "d" */
    0xe9, 0x90, 0x99, 0xf0,

    /* U+0065 "e" */
    0x78, 0x8f, 0x88, 0x70,

    /* U+0066 "f" */
    0x78, 0x8f, 0x88, 0x80,

    /* U+0067 "g" */
    0x68, 0x82, 0x99, 0x70,

    /* U+0068 "h" */
    0x99, 0x9e, 0x99, 0x90,

    /* U+0069 "i" */
    0xee,

    /* U+006A "j" */
    0x11, 0x10, 0x99, 0x70,

    /* U+006B "k" */
    0x89, 0xae, 0x99, 0x90,

    /* U+006C "l" */
    0x88, 0x80, 0x88, 0x70,

    /* U+006D "m" */
    0x6f, 0x91, 0x91, 0x0, 0x91, 0x91, 0x91,

    /* U+006E "n" */
    0x9d, 0xb0, 0x99, 0x90,

    /* U+006F "o" */
    0x69, 0x90, 0x99, 0x70,

    /* U+0070 "p" */
    0x69, 0x9e, 0x88, 0x80,

    /* U+0071 "q" */
    0x69, 0x90, 0x99, 0x70,

    /* U+0072 "r" */
    0x69, 0x9e, 0xaa, 0x90,

    /* U+0073 "s" */
    0x68, 0x8e, 0x11, 0x70,

    /* U+0074 "t" */
    0xf0, 0x22, 0x2, 0x20,

    /* U+0075 "u" */
    0x99, 0x90, 0x99, 0x70,

    /* U+0076 "v" */
    0x99, 0x99, 0x89, 0x60,

    /* U+0077 "w" */
    0x93, 0x26, 0x4c, 0x98, 0x15, 0x5b, 0x0,

    /* U+0078 "x" */
    0x96, 0x26, 0x66, 0x90,

    /* U+0079 "y" */
    0x99, 0x89, 0x64, 0x40,

    /* U+007A "z" */
    0xe1, 0x20, 0x48, 0x70,

    /* U+007B "{" */
    0x24, 0xa2, 0x48,

    /* U+007C "|" */
    0xef, 0xc0,

    /* U+007D "}" */
    0x92, 0x29, 0x20,

    /* U+007E "~" */
    0x4b
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 71, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 24, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 32, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 3, .adv_w = 164, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 71, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 17, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 28, .adv_w = 47, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 47, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 58, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 34, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 36, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 37, .adv_w = 52, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 38, .adv_w = 23, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 23, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 84, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 86, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 88, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 90, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 22, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 71, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 166, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 47, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 47, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 82, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 215, .adv_w = 50, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 80, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 217, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 22, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 71, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 47, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 23, .box_w = 1, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 329, .adv_w = 47, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 78, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5}
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
const lv_font_t ui_font_Font_10 = {
#else
lv_font_t ui_font_Font_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_FONT_10*/

