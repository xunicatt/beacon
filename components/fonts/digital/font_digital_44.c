/*******************************************************************************
 * Size: 44 px
 * Bpp: 1
 * Opts: --bpp 1 --size 44 --no-compress --font digital-7.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 /-:.\ --format lvgl -o font_digital_44.c
 ******************************************************************************/

#include <lvgl.h>
#include <config.h>

#if FONT_DIGITAL_44

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002D "-" */
    0x7f, 0xfb, 0xff, 0xf7, 0xff, 0x80,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x0, 0x7, 0x0, 0x3, 0xc0, 0x1, 0xe0, 0x1,
    0xe0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0x78, 0x0,
    0x78, 0x0, 0x3c, 0x0, 0x3c, 0x0, 0x1e, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x0, 0x0, 0x0,
    0x6, 0x0, 0x7, 0x0, 0x3, 0x80, 0x3, 0xc0,
    0x1, 0xe0, 0x1, 0xe0, 0x0, 0xf0, 0x0, 0xf0,
    0x0, 0x78, 0x0, 0x78, 0x0, 0x3c, 0x0, 0x3c,
    0x0, 0x1e, 0x0, 0x7, 0x0, 0x0,

    /* U+0030 "0" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0031 "1" */
    0x4f, 0xff, 0xff, 0xff, 0xf6, 0x41, 0x7f, 0xff,
    0xff, 0xff, 0xb4,

    /* U+0032 "2" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xe0, 0x0,
    0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0,
    0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x19, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfc, 0xc0, 0x0, 0x70, 0x0, 0x38, 0x0,
    0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80,
    0x1, 0xc0, 0x0, 0xe0, 0x0, 0x60, 0x0, 0xf,
    0xff, 0x9f, 0xff, 0xc7, 0xff, 0xe0,

    /* U+0033 "3" */
    0x7f, 0xfd, 0x3f, 0xfe, 0xcf, 0xfe, 0xe0, 0x0,
    0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0,
    0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x18, 0xff, 0xf4, 0xff, 0xfc,
    0x3f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xcf,
    0xfe, 0xef, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0034 "4" */
    0x0, 0x1, 0x0, 0x0, 0xf0, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfc,
    0x7f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x30, 0x0, 0x10,

    /* U+0035 "5" */
    0x7f, 0xfe, 0x7f, 0xff, 0xf, 0xff, 0x98, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xc, 0x0, 0x5, 0xff, 0xf1, 0xff, 0xfc,
    0x7f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0036 "6" */
    0x7f, 0xfe, 0x7f, 0xff, 0xf, 0xff, 0x98, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xc, 0x0, 0x5, 0xff, 0xf1, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0037 "7" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x0,
    0x0, 0x3, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x30, 0x0, 0x10,

    /* U+0038 "8" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0039 "9" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfc,
    0x7f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff,

    /* U+0041 "A" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8,
    0x0, 0xf8, 0x0, 0x34, 0x0, 0x10,

    /* U+0042 "B" */
    0xff, 0xfc, 0x7f, 0xff, 0xf, 0xff, 0xd8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xff, 0xdf, 0xff, 0xcf, 0xff, 0xc0,

    /* U+0043 "C" */
    0x7f, 0xff, 0xff, 0xf8, 0xff, 0xf6, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xc, 0x0,
    0x10, 0x0, 0x0, 0x0, 0x40, 0x0, 0xc0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0x80,
    0x0, 0xff, 0xf7, 0xff, 0xe7, 0xff, 0xe0,

    /* U+0044 "D" */
    0xff, 0xfc, 0x7f, 0xff, 0xf, 0xff, 0xd8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xff, 0xdf, 0xff, 0xcf, 0xff, 0xc0,

    /* U+0045 "E" */
    0x7f, 0xff, 0xff, 0xf8, 0xff, 0xf6, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xc, 0x0,
    0x17, 0xff, 0x9f, 0xff, 0xdf, 0xfe, 0xc0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0x80,
    0x0, 0xff, 0xf7, 0xff, 0xe7, 0xff, 0xe0,

    /* U+0046 "F" */
    0x7f, 0xff, 0xff, 0xf8, 0xff, 0xf6, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xc, 0x0,
    0x17, 0xff, 0x9f, 0xff, 0xdf, 0xfe, 0xc0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0,
    0x3, 0x80, 0x6, 0x0, 0x4, 0x0, 0x0,

    /* U+0047 "G" */
    0x7f, 0xfe, 0x7f, 0xff, 0xf, 0xff, 0x98, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xc, 0x0, 0x4, 0x1, 0xf0, 0x3, 0xfd,
    0x0, 0x7d, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0048 "H" */
    0x0, 0x1, 0x60, 0x0, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x1f, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8,
    0x0, 0xf8, 0x0, 0x34, 0x0, 0x10,

    /* U+0049 "I" */
    0x4f, 0xff, 0xff, 0xff, 0xf6, 0x43, 0xff, 0xff,
    0xff, 0xff, 0xb0,

    /* U+004A "J" */
    0x0, 0x1, 0x0, 0x0, 0xc0, 0x0, 0xe0, 0x0,
    0x70, 0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0,
    0x7, 0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x18, 0x0, 0xc, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+004B "K" */
    0x40, 0x7, 0x60, 0x7, 0xf8, 0x7, 0xdc, 0x7,
    0xce, 0x7, 0xc7, 0x7, 0xc3, 0x87, 0xc1, 0xc7,
    0xc0, 0xe7, 0xc0, 0x77, 0xc0, 0x3b, 0xc0, 0x1d,
    0xc0, 0xc, 0x0, 0x5, 0xff, 0xf1, 0xff, 0xfd,
    0x7f, 0xfd, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8,
    0x0, 0xf8, 0x0, 0x34, 0x0, 0x10,

    /* U+004C "L" */
    0x40, 0x0, 0x60, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xc, 0x0, 0x6, 0x0, 0x0, 0x0, 0x1,
    0x0, 0x0, 0xc0, 0x0, 0x70, 0x0, 0x38, 0x0,
    0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80,
    0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x0, 0x3b,
    0xff, 0x9b, 0xff, 0xe5, 0xff, 0xf0,

    /* U+004D "M" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x1c, 0x3f, 0xe, 0x1f, 0x87, 0xf, 0xc3,
    0x87, 0xe1, 0xc3, 0xf0, 0xe1, 0xf8, 0x70, 0xfc,
    0x38, 0x7c, 0x1c, 0x1c, 0xe, 0x4, 0x2, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8,
    0x0, 0xf8, 0x0, 0x34, 0x0, 0x10,

    /* U+004E "N" */
    0x40, 0x1, 0x60, 0x0, 0xf8, 0x0, 0xfd, 0x80,
    0x7e, 0xe0, 0x3f, 0x78, 0x1f, 0xbf, 0xf, 0xcf,
    0xc7, 0xe1, 0xf3, 0xf0, 0x7d, 0xf8, 0x1e, 0xfc,
    0x7, 0x7e, 0x0, 0x3e, 0x0, 0xc, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8,
    0x0, 0xf8, 0x0, 0x34, 0x0, 0x10,

    /* U+004F "O" */
    0x1f, 0xfc, 0x1f, 0xff, 0x1f, 0xff, 0xdc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xdf,
    0xff, 0xc7, 0xff, 0xc1, 0xff, 0xc0,

    /* U+0050 "P" */
    0xff, 0xfc, 0x7f, 0xff, 0xf, 0xff, 0xd8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfc, 0xc0, 0x0, 0x70, 0x0, 0x38, 0x0,
    0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80,
    0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x0, 0x38,
    0x0, 0x18, 0x0, 0x4, 0x0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xef, 0xc0, 0x7b, 0xe0, 0x3e, 0xe0, 0xf, 0x8f,
    0xfb, 0xdf, 0xfe, 0xf7, 0xff, 0x98,

    /* U+0052 "R" */
    0x7f, 0xfd, 0x7f, 0xfe, 0xcf, 0xfe, 0xf8, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfd,
    0x7f, 0xfc, 0xc0, 0x0, 0x77, 0x0, 0x3b, 0xc0,
    0x1d, 0xf0, 0xe, 0x7c, 0x7, 0x1f, 0x3, 0x87,
    0xc1, 0xc1, 0xf0, 0xe0, 0x7c, 0x70, 0x1f, 0x38,
    0x7, 0xd8, 0x1, 0xf4, 0x0, 0x70,

    /* U+0053 "S" */
    0x7f, 0xff, 0x7f, 0xff, 0xcf, 0xff, 0x98, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xc, 0x0, 0x5, 0xff, 0xf1, 0xff, 0xfc,
    0x7f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0054 "T" */
    0x7f, 0xff, 0x7f, 0xff, 0xcf, 0xff, 0x80, 0x0,
    0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3,
    0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x0,
    0x38, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x1, 0x0, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70,
    0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7,
    0x0, 0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0,
    0x70, 0x0, 0x18, 0x0, 0x8, 0x0,

    /* U+0055 "U" */
    0x0, 0x1, 0x20, 0x0, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0x1,
    0x0, 0x1, 0xc0, 0x1, 0xf0, 0x1, 0xf8, 0x0,
    0xfc, 0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0056 "V" */
    0x0, 0x0, 0x60, 0x0, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3e, 0x0, 0xc, 0x0, 0x0,
    0x0, 0x0, 0xc0, 0x1, 0xf0, 0x1, 0xfc, 0x1,
    0xef, 0x1, 0xe3, 0x80, 0xe1, 0xe0, 0xf0, 0x78,
    0xf0, 0x1e, 0xf0, 0x7, 0x70, 0x3, 0xb8, 0x0,
    0xd8, 0x0, 0x28, 0x0, 0x0, 0x0,

    /* U+0057 "W" */
    0x40, 0x1, 0x60, 0x0, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1c, 0x0, 0x4, 0x2, 0x1,
    0x3, 0x81, 0xc1, 0xc1, 0xf0, 0xe1, 0xf8, 0x70,
    0xfc, 0x38, 0x7e, 0x1c, 0x3f, 0xe, 0x1f, 0x87,
    0xf, 0xc3, 0x87, 0xe1, 0xc3, 0xe0, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+0058 "X" */
    0x70, 0x3, 0x78, 0x3, 0xdc, 0x1, 0xef, 0x1,
    0xe3, 0x80, 0xf1, 0xe0, 0xf0, 0xf0, 0x78, 0x3c,
    0x78, 0x1e, 0x3c, 0x7, 0xbc, 0x3, 0xde, 0x0,
    0xee, 0x0, 0x77, 0x0, 0x1b, 0x0, 0x0, 0x0,
    0x6, 0xc0, 0x7, 0x70, 0x3, 0xb8, 0x3, 0xde,
    0x1, 0xef, 0x1, 0xe3, 0xc0, 0xf1, 0xe0, 0xf0,
    0x78, 0x78, 0x3c, 0x78, 0xf, 0x3c, 0x7, 0xbc,
    0x1, 0xfe, 0x0, 0xf7, 0x0, 0x30,

    /* U+0059 "Y" */
    0x0, 0x1, 0x0, 0x0, 0xf0, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7c, 0x0, 0x1d, 0xff, 0xf5, 0xff, 0xfc,
    0x7f, 0xfd, 0x0, 0x1, 0x80, 0x1, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xcf,
    0xfe, 0xff, 0xff, 0xb7, 0xff, 0xd0,

    /* U+005A "Z" */
    0x7f, 0xf6, 0x7f, 0xfb, 0x9f, 0xfb, 0xc0, 0x1,
    0xe0, 0x1, 0xe0, 0x0, 0xf0, 0x0, 0xf0, 0x0,
    0x78, 0x0, 0x78, 0x0, 0x3c, 0x0, 0x1c, 0x0,
    0x1e, 0x0, 0xe, 0x0, 0x7, 0x0, 0x0, 0x0,
    0x7, 0x0, 0x7, 0x80, 0x3, 0x80, 0x3, 0xc0,
    0x1, 0xc0, 0x1, 0xe0, 0x0, 0xf0, 0x0, 0xf0,
    0x0, 0x78, 0x0, 0x78, 0x0, 0x3c, 0x0, 0x3d,
    0xff, 0x1f, 0xff, 0x86, 0xff, 0xe0,

    /* U+005C "\\" */
    0x70, 0x0, 0x78, 0x0, 0x3c, 0x0, 0xf, 0x0,
    0x7, 0x80, 0x1, 0xe0, 0x0, 0xf0, 0x0, 0x3c,
    0x0, 0x1e, 0x0, 0x7, 0x80, 0x3, 0xc0, 0x0,
    0xe0, 0x0, 0x70, 0x0, 0x18, 0x0, 0x0, 0x0,
    0x0, 0xc0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1e,
    0x0, 0xf, 0x0, 0x3, 0xc0, 0x1, 0xe0, 0x0,
    0x78, 0x0, 0x3c, 0x0, 0xf, 0x0, 0x7, 0x80,
    0x1, 0xe0, 0x0, 0xf0, 0x0, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 282, .box_w = 14, .box_h = 3, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 7, .adv_w = 115, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 115, .box_w = 3, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 115, .box_w = 3, .box_h = 16, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 646, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 307, .box_w = 15, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 307, .box_w = 15, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 307, .box_w = 15, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 115, .box_w = 3, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1442, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1504, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1566, .adv_w = 339, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1628, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1690, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1752, .adv_w = 332, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1814, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1876, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2000, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2124, .adv_w = 333, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2186, .adv_w = 332, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = 0}
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
const lv_font_t font_digital_44 = {
#else
lv_font_t font_digital_44 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FONT_DIGITAL_44*/

