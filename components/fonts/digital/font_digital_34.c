/*******************************************************************************
 * Size: 34 px
 * Bpp: 1
 * Opts: --bpp 1 --size 34 --no-compress --font digital-7.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 /-:.\ --format lvgl -o font_digital_34.c
 ******************************************************************************/

#include <lvgl.h>
#include <config.h>

#if FONT_DIGITAL_34

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002D "-" */
    0xff, 0xbf, 0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x0, 0x30, 0x3, 0xc0, 0x1c, 0x1, 0xe0, 0xe,
    0x0, 0xf0, 0x7, 0x0, 0x78, 0x3, 0x80, 0x1c,
    0x0, 0xc0, 0x18, 0x0, 0xc0, 0xe, 0x0, 0x70,
    0x7, 0x80, 0x38, 0x3, 0xc0, 0x1c, 0x1, 0xe0,
    0xe, 0x0, 0x70, 0x0,

    /* U+0030 "0" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1c, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0031 "1" */
    0x7f, 0xff, 0xd5, 0x7f, 0xff, 0xd0,

    /* U+0032 "2" */
    0xff, 0xeb, 0xff, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xdf, 0xff, 0xff, 0xec, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0x7, 0xfe, 0x7f, 0xf8,

    /* U+0033 "3" */
    0x7f, 0xeb, 0xff, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xcf, 0xfe, 0x7f, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x37, 0xff, 0xbf, 0xf4,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xfe, 0xff, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x0,

    /* U+0035 "5" */
    0xff, 0xf3, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x3f, 0xfc, 0xff, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0036 "6" */
    0xff, 0xf3, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x3f, 0xfd, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0037 "7" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1c, 0x0,
    0x40, 0x0, 0x0, 0x10, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x0,

    /* U+0038 "8" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0039 "9" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xfe, 0xff, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x37, 0xff, 0xff, 0xf4,

    /* U+003A ":" */
    0xf0, 0x0, 0xf,

    /* U+0041 "A" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0x80, 0x0,

    /* U+0042 "B" */
    0xff, 0xe3, 0xff, 0xb0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0x7f, 0xf0,

    /* U+0043 "C" */
    0xff, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x10, 0x2, 0x0, 0x40,
    0x8, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0x7, 0xff, 0xff, 0xc0,

    /* U+0044 "D" */
    0xff, 0xe3, 0xff, 0xb0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1c, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0x7f, 0xf0,

    /* U+0045 "E" */
    0xff, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0xff, 0xff,
    0xfc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0x7, 0xff, 0xff, 0xc0,

    /* U+0046 "F" */
    0xff, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0xff, 0xff,
    0xfc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0xff, 0xf3, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x20, 0x7d, 0x3, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0048 "H" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0x80, 0x0,

    /* U+0049 "I" */
    0x7f, 0xff, 0xd5, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x0, 0x0, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x2, 0x0, 0x8, 0x0, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+004B "K" */
    0x80, 0x3e, 0x3, 0xf0, 0x3d, 0x83, 0xcc, 0x3c,
    0x63, 0xc3, 0x3c, 0x1b, 0xc0, 0xdc, 0x6, 0x0,
    0x3f, 0xfd, 0xff, 0xfc, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0x80, 0x0,

    /* U+004C "L" */
    0x0, 0x6, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x20, 0x0, 0x0, 0x8, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xf, 0xff, 0x5f, 0xf8,

    /* U+004D "M" */
    0xff, 0xd7, 0xff, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x38, 0x61, 0x0,
    0x8, 0x1, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x30,

    /* U+004E "N" */
    0x0, 0x6, 0x0, 0xf6, 0x7, 0xb8, 0x3d, 0xe1,
    0xe7, 0x8f, 0x1e, 0x78, 0x7b, 0xc1, 0xde, 0x0,
    0xe0, 0x3, 0x0, 0x1c, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0x80, 0x0,

    /* U+004F "O" */
    0x3f, 0xe3, 0xff, 0xb0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1c, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0x1f, 0xf0,

    /* U+0050 "P" */
    0xff, 0xe3, 0xff, 0xb0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xec, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0xff, 0xe9, 0xff, 0xec, 0x1, 0xb0, 0x6, 0xc0,
    0x1b, 0x0, 0x6c, 0x1, 0xb0, 0x6, 0xc0, 0x1a,
    0x0, 0x28, 0x0, 0xa0, 0x2, 0x80, 0xb, 0x0,
    0x6c, 0x1, 0xb0, 0x6, 0xc0, 0x1b, 0x3, 0x6c,
    0xe, 0xb0, 0x1c, 0x7f, 0xbb, 0xff, 0x70,

    /* U+0052 "R" */
    0xff, 0xeb, 0xff, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xff, 0xff, 0xec, 0x0, 0x6e, 0x3, 0x78,
    0x19, 0xe0, 0xc7, 0x86, 0x1e, 0x30, 0x79, 0x81,
    0xec, 0x7, 0xc0, 0x1c,

    /* U+0053 "S" */
    0xff, 0xfb, 0xff, 0xb0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x3f, 0xfc, 0xff, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0054 "T" */
    0xff, 0xf7, 0xfe, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x0,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,
    0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+0055 "U" */
    0x0, 0x4, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xe0, 0x2, 0x0, 0x8, 0x0, 0xe0, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x37, 0xff, 0xff, 0xf4,

    /* U+0056 "V" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xe0, 0x2, 0x0, 0x8, 0x0, 0xe0, 0xf, 0x80,
    0xee, 0xe, 0x38, 0xe0, 0xee, 0x7, 0x70, 0x1b,
    0x0, 0x50, 0x0, 0x0,

    /* U+0057 "W" */
    0x0, 0xc, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0x80,
    0x18, 0x61, 0x86, 0x1c, 0x63, 0xc6, 0x3c, 0x63,
    0xc6, 0x3c, 0x63, 0xc6, 0x38, 0x3, 0x7f, 0xff,
    0xfd,

    /* U+0058 "X" */
    0x60, 0x37, 0x3, 0xdc, 0x1c, 0xe1, 0xe3, 0x8e,
    0x1c, 0xf0, 0x77, 0x3, 0xf8, 0xf, 0x80, 0x7c,
    0x1, 0xc0, 0x1e, 0x0, 0xf8, 0xf, 0xc0, 0x7f,
    0x7, 0xb8, 0x39, 0xe3, 0xc7, 0x1c, 0x3d, 0xe0,
    0xee, 0x7, 0xf0, 0x18,

    /* U+0059 "Y" */
    0x0, 0x0, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xff, 0xfe, 0xff, 0xf0, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x37, 0xff, 0xff, 0xf4,

    /* U+005A "Z" */
    0xff, 0xb7, 0xff, 0xc0, 0x1c, 0x0, 0xe0, 0xe,
    0x0, 0x70, 0x7, 0x0, 0x38, 0x3, 0x80, 0x1c,
    0x0, 0xc0, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0x70,
    0x7, 0x0, 0x38, 0x3, 0x80, 0x1c, 0x1, 0xc0,
    0xe, 0xfe, 0x6f, 0xf0,

    /* U+005C "\\" */
    0xe0, 0x7, 0x0, 0x3c, 0x0, 0xe0, 0x7, 0x80,
    0x1c, 0x0, 0xf0, 0x3, 0x80, 0xc, 0x0, 0x60,
    0x1, 0x0, 0x6, 0x0, 0x38, 0x1, 0xc0, 0xf,
    0x0, 0x38, 0x1, 0xe0, 0x7, 0x0, 0x3c, 0x0,
    0xe0, 0x7, 0x80, 0x18
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 148, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 218, .box_w = 10, .box_h = 2, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 4, .adv_w = 89, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 89, .box_w = 2, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 89, .box_w = 2, .box_h = 12, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 374, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 237, .box_w = 11, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 237, .box_w = 11, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 237, .box_w = 11, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 89, .box_w = 2, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 257, .box_w = 12, .box_h = 21, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 793, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 262, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 257, .box_w = 12, .box_h = 21, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1044, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 257, .box_w = 12, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1221, .adv_w = 257, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 256, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 45, .range_length = 14, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 16,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 92, .range_length = 1, .glyph_id_start = 42,
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
    .cmap_num = 4,
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
const lv_font_t font_digital_34 = {
#else
lv_font_t font_digital_34 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FONT_DIGITAL_34*/

