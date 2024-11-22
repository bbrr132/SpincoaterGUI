/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --font C:/Users/761681/SquareLine/assets/Open 24 Display St.ttf -o C:/Users/761681/SquareLine/assets\ui_font_Font_8.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_8
#define UI_FONT_FONT_8 1
#endif

#if UI_FONT_FONT_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf4,

    /* U+0022 "\"" */
    0x80,

    /* U+0023 "#" */
    0x2, 0x12, 0x7b, 0x24, 0xf2, 0x28, 0x0,

    /* U+0024 "$" */
    0x4b, 0x62, 0xda,

    /* U+0025 "%" */
    0x95, 0x2a, 0x40,

    /* U+0026 "&" */
    0x46, 0x11, 0x6b, 0x60,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x6a, 0x90,

    /* U+0029 ")" */
    0x95, 0x60,

    /* U+002A "*" */
    0x38,

    /* U+002B "+" */
    0x5d, 0x0,

    /* U+002C "," */
    0x80,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x22, 0x4, 0x48,

    /* U+0030 "0" */
    0x57, 0xfa, 0xc0,

    /* U+0031 "1" */
    0x35, 0x50,

    /* U+0032 "2" */
    0x44, 0xe8, 0x80,

    /* U+0033 "3" */
    0xc7, 0x93, 0x80,

    /* U+0034 "4" */
    0xb6, 0xb2, 0x40,

    /* U+0035 "5" */
    0x53, 0x12, 0xc0,

    /* U+0036 "6" */
    0x53, 0x5a, 0xc0,

    /* U+0037 "7" */
    0xc4, 0x82, 0x40,

    /* U+0038 "8" */
    0x57, 0x5a, 0xc0,

    /* U+0039 "9" */
    0x56, 0xb2, 0xc0,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x88,

    /* U+003C "<" */
    0x64,

    /* U+003D "=" */
    0xfc,

    /* U+003E ">" */
    0x98,

    /* U+003F "?" */
    0xc4, 0xf9, 0x20,

    /* U+0040 "@" */
    0x5e, 0xae, 0xc0,

    /* U+0041 "A" */
    0x56, 0xeb, 0x68,

    /* U+0042 "B" */
    0xd7, 0x5a, 0xc0,

    /* U+0043 "C" */
    0x72, 0x48, 0xc0,

    /* U+0044 "D" */
    0xd6, 0xda, 0xc0,

    /* U+0045 "E" */
    0x73, 0xc8, 0xc0,

    /* U+0046 "F" */
    0x72, 0x79, 0x20,

    /* U+0047 "G" */
    0x51, 0x5a, 0xc0,

    /* U+0048 "H" */
    0x16, 0xeb, 0x68,

    /* U+0049 "I" */
    0xfc,

    /* U+004A "J" */
    0x24, 0x5a, 0xc0,

    /* U+004B "K" */
    0xbb, 0x5b, 0x40,

    /* U+004C "L" */
    0x90, 0x48, 0xc0,

    /* U+004D "M" */
    0x5a, 0x9a, 0x40, 0xa6, 0x90,

    /* U+004E "N" */
    0xbe, 0xdb, 0x40,

    /* U+004F "O" */
    0x56, 0xda, 0xc0,

    /* U+0050 "P" */
    0x56, 0xe9, 0x20,

    /* U+0051 "Q" */
    0x56, 0xde, 0xd0,

    /* U+0052 "R" */
    0x56, 0xa9, 0x80,

    /* U+0053 "S" */
    0x53, 0x12, 0xc0,

    /* U+0054 "T" */
    0xe9, 0x24, 0x80,

    /* U+0055 "U" */
    0xb4, 0x5a, 0xc0,

    /* U+0056 "V" */
    0xb6, 0x8a, 0x80,

    /* U+0057 "W" */
    0xad, 0x6a, 0xa, 0xa8,

    /* U+0058 "X" */
    0xb4, 0x79, 0x40,

    /* U+0059 "Y" */
    0x82, 0xa4, 0x80,

    /* U+005A "Z" */
    0xc5, 0x28, 0xc0,

    /* U+005B "[" */
    0x6a, 0x90,

    /* U+005C "\\" */
    0x91, 0x22, 0x40,

    /* U+005D "]" */
    0x95, 0x60,

    /* U+005E "^" */
    0x1a, 0x80,

    /* U+005F "_" */
    0xe0,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x56, 0xeb, 0x68,

    /* U+0062 "b" */
    0xd7, 0x5a, 0xc0,

    /* U+0063 "c" */
    0x72, 0x48, 0xc0,

    /* U+0064 "d" */
    0xd6, 0xda, 0xc0,

    /* U+0065 "e" */
    0x73, 0xc8, 0xc0,

    /* U+0066 "f" */
    0x72, 0x79, 0x20,

    /* U+0067 "g" */
    0x51, 0x5a, 0xc0,

    /* U+0068 "h" */
    0x16, 0xeb, 0x68,

    /* U+0069 "i" */
    0xfc,

    /* U+006A "j" */
    0x24, 0x5a, 0xc0,

    /* U+006B "k" */
    0xbb, 0x5b, 0x40,

    /* U+006C "l" */
    0x90, 0x48, 0xc0,

    /* U+006D "m" */
    0x5a, 0x9a, 0x40, 0xa6, 0x90,

    /* U+006E "n" */
    0xbe, 0xdb, 0x40,

    /* U+006F "o" */
    0x56, 0xda, 0xc0,

    /* U+0070 "p" */
    0x56, 0xe9, 0x20,

    /* U+0071 "q" */
    0x56, 0xde, 0xd0,

    /* U+0072 "r" */
    0x56, 0xa9, 0x80,

    /* U+0073 "s" */
    0x53, 0x12, 0xc0,

    /* U+0074 "t" */
    0xe9, 0x24, 0x80,

    /* U+0075 "u" */
    0xb4, 0x5a, 0xc0,

    /* U+0076 "v" */
    0xb6, 0x8a, 0x80,

    /* U+0077 "w" */
    0xad, 0x6a, 0xa, 0xa8,

    /* U+0078 "x" */
    0xb4, 0x79, 0x40,

    /* U+0079 "y" */
    0x82, 0xa4, 0x80,

    /* U+007A "z" */
    0xc5, 0x28, 0xc0,

    /* U+007B "{" */
    0x56, 0x54,

    /* U+007C "|" */
    0x6f, 0x80,

    /* U+007D "}" */
    0xa9, 0xa8,

    /* U+007E "~" */
    0xa0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 19, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 25, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 57, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 13, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 13, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 21, .adv_w = 37, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 38, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 26, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 19, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 42, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 30, .adv_w = 18, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 56, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 38, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 48, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 18, .box_w = 1, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 35, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 65, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 66, .adv_w = 44, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 67, .adv_w = 44, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 68, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 71, .adv_w = 56, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 77, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 92, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 17, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 102, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 122, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 125, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 128, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 56, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 37, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 56, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 38, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 66, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 162, .adv_w = 40, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 64, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 164, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 167, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 182, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 17, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 102, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 215, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 218, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 57, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 56, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 38, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 245, .adv_w = 18, .box_w = 1, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 247, .adv_w = 38, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 249, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4}
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
const lv_font_t ui_font_Font_8 = {
#else
lv_font_t ui_font_Font_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_FONT_8*/

