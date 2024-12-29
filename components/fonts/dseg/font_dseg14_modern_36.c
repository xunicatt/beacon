/*******************************************************************************
 * Size: 36 px
 * Bpp: 1
 * Opts: --bpp 1 --size 36 --no-compress --font DSEG14Modern-Regular.ttf --range 47-92 --format lvgl -o font_dseg14_modern_36.c
 ******************************************************************************/

#include <lvgl.h>
#include <config.h>

#if FONT_DSEG14_MODERN_36

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002F "/" */
    0x0, 0x4, 0x0, 0x30, 0x0, 0xc0, 0x7, 0x0,
    0x3c, 0x0, 0xf0, 0x7, 0x80, 0x1e, 0x0, 0x70,
    0x1, 0xc0, 0xe, 0x0, 0x30, 0x0, 0x80, 0x0,
    0x0, 0x0, 0x1, 0x0, 0xc, 0x0, 0x70, 0x3,
    0x80, 0xe, 0x0, 0x78, 0x1, 0xe0, 0xf, 0x0,
    0x3c, 0x0, 0xe0, 0x3, 0x0, 0xc, 0x0, 0x20,
    0x0,

    /* U+0030 "0" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x5f, 0x80, 0x3,
    0x7e, 0x0, 0xd, 0xf8, 0x0, 0x77, 0xe0, 0x1,
    0xdf, 0x80, 0xf, 0x7e, 0x0, 0x79, 0xf8, 0x1,
    0xe7, 0xe0, 0x7, 0x1f, 0x80, 0x1c, 0x7e, 0x0,
    0xe1, 0xf8, 0x3, 0x7, 0xe0, 0x8, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x10, 0x7, 0xe0,
    0xc0, 0x1f, 0x87, 0x0, 0x7e, 0x38, 0x1, 0xf8,
    0xe0, 0x7, 0xe7, 0x80, 0x1f, 0x9e, 0x0, 0x7e,
    0xf0, 0x1, 0xfb, 0x80, 0x7, 0xee, 0x0, 0x1f,
    0xb0, 0x0, 0x7e, 0xc0, 0x1, 0xfa, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0031 "1" */
    0x25, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x29, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xec, 0x0,

    /* U+0032 "2" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xd0, 0xff, 0xfe,
    0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0x70, 0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0,
    0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0,
    0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70, 0x0,
    0x1, 0xc0, 0x0, 0x3, 0xf, 0x3, 0xf4, 0x7f,
    0x3f, 0x8b, 0xf0, 0x3c, 0x30, 0x0, 0x0, 0xe0,
    0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe,
    0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3,
    0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0, 0x0,
    0xc0, 0x0, 0x3, 0x7f, 0xff, 0xb, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0033 "3" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xd0, 0xff, 0xfe,
    0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0x70, 0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0,
    0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0,
    0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70, 0x0,
    0x1, 0xc0, 0x0, 0x3, 0xf, 0x83, 0xf4, 0x7f,
    0x3f, 0xb1, 0xf8, 0x3d, 0xc0, 0x0, 0x7, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0,
    0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0, 0x7,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0xf, 0xff, 0xff,

    /* U+0034 "4" */
    0x0, 0x0, 0x6, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0xb3, 0xf0, 0x3d, 0xc0, 0x0, 0x7, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0,
    0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0, 0x7,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x10,

    /* U+0035 "5" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xef, 0x3, 0xf3, 0x7f,
    0x3f, 0xb3, 0xf0, 0x3d, 0xc0, 0x0, 0x7, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0,
    0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0, 0x7,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0xf, 0xff, 0xff,

    /* U+0036 "6" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xef, 0x3, 0xf3, 0x7f,
    0x3f, 0xbb, 0xf0, 0x3d, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0037 "7" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0x7, 0x0,
    0x0, 0x20, 0x0, 0x1, 0xc0, 0x0, 0x7, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0,
    0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0, 0x7,
    0x0, 0x0, 0x1c, 0x0, 0x0, 0x10,

    /* U+0038 "8" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0xbb, 0xf0, 0x3d, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0039 "9" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0xb3, 0xf0, 0x3d, 0xc0, 0x0, 0x7, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0,
    0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c,
    0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0, 0x7,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0xf, 0xff, 0xff,

    /* U+003A ":" */
    0x6f, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xff, 0x60,

    /* U+003C "<" */
    0x0, 0x0, 0x80, 0x0, 0xc, 0x0, 0x0, 0x60,
    0x0, 0x7, 0x0, 0x0, 0x78, 0x0, 0x3, 0xc0,
    0x0, 0x3c, 0x0, 0x1, 0xe0, 0x0, 0xe, 0x0,
    0x0, 0x70, 0x0, 0x7, 0x0, 0x0, 0x30, 0x0,
    0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x10, 0x0, 0x1, 0x80, 0x0, 0x1c, 0x0, 0x1,
    0xc0, 0x0, 0xe, 0x0, 0x0, 0xf0, 0x0, 0x7,
    0x80, 0x0, 0x78, 0x0, 0x3, 0xc0, 0x0, 0x1c,
    0x0, 0x0, 0xc0, 0x0, 0x6, 0x0, 0x0, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xc1, 0xff,
    0xff, 0x8f, 0xff, 0xff,

    /* U+003D "=" */
    0x3e, 0xf, 0xc1, 0xfd, 0xfe, 0x1f, 0x83, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xfc, 0x1f,
    0xff, 0xf9, 0xff, 0xff, 0xf0,

    /* U+003E ">" */
    0x10, 0x0, 0x0, 0xc0, 0x0, 0x6, 0x0, 0x0,
    0x38, 0x0, 0x1, 0xe0, 0x0, 0xf, 0x0, 0x0,
    0x3c, 0x0, 0x1, 0xe0, 0x0, 0x7, 0x0, 0x0,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x0, 0x0,
    0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x18, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0x1c, 0x0, 0x0, 0xf0, 0x0,
    0x7, 0x80, 0x0, 0x1e, 0x0, 0x0, 0xf0, 0x0,
    0x3, 0x80, 0x0, 0xc, 0x0, 0x0, 0x60, 0x0,
    0x1, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xc1, 0xff,
    0xff, 0x8f, 0xff, 0xff,

    /* U+003F "?" */
    0xff, 0xff, 0xfa, 0x7f, 0xff, 0xf7, 0x3f, 0xff,
    0xdf, 0x0, 0x0, 0x7e, 0x0, 0x0, 0xfc, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0xf, 0xc0, 0x0, 0x1f, 0x80, 0x0, 0x3f,
    0x0, 0x0, 0x7e, 0x0, 0x0, 0xfc, 0x0, 0x1,
    0xf8, 0x0, 0x3, 0xf0, 0x0, 0x3, 0xe0, 0x3,
    0xfb, 0x80, 0x1f, 0xe0, 0x0, 0xf, 0x80, 0x0,
    0x80, 0x0, 0x1, 0x0, 0x0, 0x2, 0x0, 0x0,
    0x4, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x38, 0x0,
    0x0, 0x70, 0x0, 0x0, 0xe0, 0x0, 0x1, 0xc0,
    0x0, 0x3, 0x80, 0x0, 0x7, 0x0, 0x0, 0xe,
    0x0, 0x0, 0x1c, 0x0,

    /* U+0040 "@" */
    0xff, 0xff, 0xfa, 0x7f, 0xff, 0xf7, 0x3f, 0xff,
    0xdf, 0x0, 0x0, 0x7e, 0x0, 0x0, 0xfc, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0xf, 0xc0, 0x0, 0x1f, 0x80, 0x0, 0x3f,
    0x0, 0x0, 0x7e, 0x0, 0x0, 0xfc, 0x0, 0x1,
    0xf8, 0x0, 0x3, 0xf0, 0x0, 0x3, 0xe0, 0x3,
    0xfb, 0x80, 0x1f, 0xee, 0x0, 0xf, 0xbe, 0x0,
    0x80, 0x7e, 0x1, 0x0, 0xfc, 0x2, 0x1, 0xf8,
    0x4, 0x3, 0xf0, 0x1c, 0x7, 0xe0, 0x38, 0xf,
    0xc0, 0x70, 0x1f, 0x80, 0xe0, 0x3f, 0x1, 0xc0,
    0x7e, 0x3, 0x80, 0xfc, 0x7, 0x1, 0xf8, 0xe,
    0x3, 0xf0, 0x1c, 0x7, 0xc0, 0x0, 0xf, 0xbf,
    0xff, 0xce, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xf0,

    /* U+0041 "A" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0xbb, 0xf0, 0x3d, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf0, 0x0, 0x7,
    0xc0, 0x0, 0xe, 0x0, 0x0, 0x18, 0x0, 0x0,
    0x0,

    /* U+0042 "B" */
    0xff, 0xff, 0xf5, 0xff, 0xff, 0xd1, 0xff, 0xfe,
    0xc0, 0x0, 0x3, 0x0, 0x70, 0x1c, 0x1, 0xc0,
    0x70, 0x7, 0x1, 0xc0, 0x1c, 0x7, 0x0, 0x70,
    0x1c, 0x1, 0xc0, 0x70, 0x7, 0x1, 0xc0, 0x1c,
    0x7, 0x0, 0x20, 0x1c, 0x0, 0x80, 0x70, 0x2,
    0x1, 0xc0, 0x8, 0x3, 0x0, 0x7, 0xf4, 0x0,
    0x7f, 0xb0, 0x0, 0x7d, 0xc0, 0x8, 0x7, 0x0,
    0x20, 0x1c, 0x0, 0x80, 0x70, 0x2, 0x1, 0xc0,
    0x1c, 0x7, 0x0, 0x70, 0x1c, 0x1, 0xc0, 0x70,
    0x7, 0x1, 0xc0, 0x1c, 0x7, 0x0, 0x70, 0x1c,
    0x1, 0xc0, 0x70, 0x7, 0x1, 0xc0, 0x1c, 0x7,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0x1f, 0xff, 0xff,

    /* U+0043 "C" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x0,
    0x0, 0x4, 0x0, 0x0, 0x20, 0x0, 0x0, 0xe0,
    0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe,
    0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3,
    0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0, 0x0,
    0xc0, 0x0, 0x3, 0x7f, 0xff, 0xb, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0044 "D" */
    0xff, 0xff, 0xf5, 0xff, 0xff, 0xd1, 0xff, 0xfe,
    0xc0, 0x0, 0x3, 0x0, 0x70, 0x1c, 0x1, 0xc0,
    0x70, 0x7, 0x1, 0xc0, 0x1c, 0x7, 0x0, 0x70,
    0x1c, 0x1, 0xc0, 0x70, 0x7, 0x1, 0xc0, 0x1c,
    0x7, 0x0, 0x20, 0x1c, 0x0, 0x80, 0x70, 0x2,
    0x1, 0xc0, 0x8, 0x7, 0x0, 0x20, 0x4, 0x0,
    0x0, 0x20, 0x0, 0x0, 0xc0, 0x8, 0x7, 0x0,
    0x20, 0x1c, 0x0, 0x80, 0x70, 0x2, 0x1, 0xc0,
    0x8, 0x7, 0x0, 0x70, 0x1c, 0x1, 0xc0, 0x70,
    0x7, 0x1, 0xc0, 0x1c, 0x7, 0x0, 0x70, 0x1c,
    0x1, 0xc0, 0x70, 0x7, 0x1, 0xc0, 0x1c, 0x7,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0x1f, 0xff, 0xff,

    /* U+0045 "E" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xef, 0x7, 0xe3, 0x7f,
    0x3f, 0x8b, 0xf0, 0x7c, 0x30, 0x0, 0x0, 0xe0,
    0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe,
    0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3,
    0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0, 0x0,
    0xc0, 0x0, 0x3, 0x7f, 0xff, 0xb, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xf1, 0xff, 0xff, 0xb3, 0xff, 0xf9,
    0xc0, 0x0, 0xe, 0x0, 0x0, 0x70, 0x0, 0x3,
    0x80, 0x0, 0x1c, 0x0, 0x0, 0xe0, 0x0, 0x7,
    0x0, 0x0, 0x38, 0x0, 0x1, 0xc0, 0x0, 0xe,
    0x0, 0x0, 0x70, 0x0, 0x3, 0x80, 0x0, 0x1c,
    0x0, 0x0, 0xef, 0x7, 0xe6, 0xfe, 0x7f, 0x2f,
    0xc1, 0xf1, 0x80, 0x0, 0xe, 0x0, 0x0, 0x70,
    0x0, 0x3, 0x80, 0x0, 0x1c, 0x0, 0x0, 0xe0,
    0x0, 0x7, 0x0, 0x0, 0x38, 0x0, 0x1, 0xc0,
    0x0, 0xe, 0x0, 0x0, 0x70, 0x0, 0x3, 0x80,
    0x0, 0x18, 0x0, 0x0, 0xc0, 0x0, 0x4, 0x0,
    0x0, 0x20, 0x0, 0x0,

    /* U+0047 "G" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xe0, 0x3, 0xf3, 0x0,
    0x3f, 0xb8, 0x0, 0x3d, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0048 "H" */
    0x0, 0x0, 0x6, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0xbb, 0xf0, 0x3d, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf0, 0x0, 0x7,
    0xc0, 0x0, 0xe, 0x0, 0x0, 0x18, 0x0, 0x0,
    0x0,

    /* U+0049 "I" */
    0xff, 0xff, 0xf3, 0xff, 0xff, 0x7, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x7, 0x0, 0x0, 0x38, 0x0,
    0x1, 0xc0, 0x0, 0xe, 0x0, 0x0, 0x70, 0x0,
    0x3, 0x80, 0x0, 0x1c, 0x0, 0x0, 0xe0, 0x0,
    0x2, 0x0, 0x0, 0x10, 0x0, 0x0, 0x80, 0x0,
    0x4, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x40, 0x0, 0x2, 0x0, 0x0,
    0x10, 0x0, 0x0, 0x80, 0x0, 0x4, 0x0, 0x0,
    0x70, 0x0, 0x3, 0x80, 0x0, 0x1c, 0x0, 0x0,
    0xe0, 0x0, 0x7, 0x0, 0x0, 0x38, 0x0, 0x1,
    0xc0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xfe, 0xf, 0xff, 0xfc, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x0, 0x0, 0x4, 0x0, 0x0, 0x30, 0x0, 0x0,
    0xc0, 0x0, 0x7, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0x70, 0x0, 0x1, 0xc0, 0x0, 0x7, 0x0, 0x0,
    0x1c, 0x0, 0x0, 0x70, 0x0, 0x1, 0xc0, 0x0,
    0x7, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x70, 0x0,
    0x1, 0xc0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x38, 0x0, 0x1, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf0, 0x0, 0x7,
    0xdf, 0xff, 0xce, 0xff, 0xff, 0xcb, 0xff, 0xff,
    0xc0,

    /* U+004B "K" */
    0x0, 0x0, 0x30, 0x0, 0xe, 0x0, 0x3, 0x80,
    0x1, 0xe0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0x1f,
    0x80, 0x7, 0xe0, 0x3, 0xf8, 0x1, 0xee, 0x0,
    0x7b, 0x80, 0x1c, 0xe0, 0x7, 0x38, 0x3, 0x8e,
    0x0, 0xe3, 0x80, 0x30, 0xef, 0x0, 0x37, 0xf0,
    0xb, 0xf0, 0x3, 0x0, 0x30, 0xe0, 0xe, 0x38,
    0x3, 0x8e, 0x0, 0x73, 0x80, 0x1c, 0xe0, 0x7,
    0xb8, 0x0, 0xfe, 0x0, 0x3f, 0x80, 0x7, 0xe0,
    0x0, 0xf8, 0x0, 0x3e, 0x0, 0x7, 0x0, 0x0,
    0xc0, 0x0, 0x20, 0x0, 0x8, 0x0, 0x0,

    /* U+004C "L" */
    0x80, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0,
    0x38, 0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0,
    0xe, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38, 0x0,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0x40, 0x0, 0x2, 0x0,
    0x0, 0xc, 0x0, 0x0, 0x38, 0x0, 0x0, 0xe0,
    0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe,
    0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3,
    0x80, 0x0, 0xc, 0x0, 0x0, 0x37, 0xff, 0xf0,
    0xbf, 0xff, 0xf2, 0xff, 0xff, 0xf0,

    /* U+004D "M" */
    0x0, 0x0, 0x4, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe8, 0x0, 0x5f, 0xb0, 0x3,
    0x7e, 0xe0, 0xd, 0xfb, 0x80, 0x77, 0xef, 0x1,
    0xdf, 0xbc, 0xf, 0x7e, 0x78, 0x39, 0xf9, 0xe1,
    0xe7, 0xe3, 0xc7, 0x1f, 0x87, 0x1c, 0x7e, 0x1c,
    0x61, 0xf8, 0x33, 0x87, 0xe0, 0x28, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x4, 0x7, 0xe0,
    0x10, 0x1f, 0x80, 0x40, 0x7e, 0x1, 0x1, 0xf8,
    0x4, 0x7, 0xe0, 0x38, 0x1f, 0x80, 0xe0, 0x7e,
    0x3, 0x81, 0xf8, 0xe, 0x7, 0xe0, 0x38, 0x1f,
    0x80, 0xe0, 0x7e, 0x3, 0x81, 0xf8, 0xe, 0x7,
    0xc0, 0x0, 0x1f, 0x0, 0x0, 0x38, 0x0, 0x0,
    0x20, 0x0, 0x0,

    /* U+004E "N" */
    0x0, 0x0, 0x4, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe8, 0x0, 0x1f, 0xb0, 0x0,
    0x7e, 0xc0, 0x1, 0xfb, 0x80, 0x7, 0xee, 0x0,
    0x1f, 0xbc, 0x0, 0x7e, 0x78, 0x1, 0xf9, 0xe0,
    0x7, 0xe3, 0x80, 0x1f, 0x8e, 0x0, 0x7e, 0x1c,
    0x1, 0xf8, 0x30, 0x7, 0xe0, 0x40, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x2, 0x7, 0xe0,
    0xc, 0x1f, 0x80, 0x38, 0x7e, 0x0, 0x71, 0xf8,
    0x1, 0xc7, 0xe0, 0x7, 0x9f, 0x80, 0x1e, 0x7e,
    0x0, 0x3d, 0xf8, 0x0, 0x77, 0xe0, 0x1, 0xdf,
    0x80, 0x3, 0x7e, 0x0, 0xd, 0xf8, 0x0, 0x17,
    0xc0, 0x0, 0x1f, 0x0, 0x0, 0x38, 0x0, 0x0,
    0x20, 0x0, 0x0,

    /* U+004F "O" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0050 "P" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0x8b, 0xf0, 0x3c, 0x30, 0x0, 0x0, 0xe0,
    0x0, 0x3, 0x80, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe,
    0x0, 0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x3,
    0x80, 0x0, 0xe, 0x0, 0x0, 0x30, 0x0, 0x0,
    0xc0, 0x0, 0x2, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0,

    /* U+0051 "Q" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x2, 0x7, 0xe0,
    0xc, 0x1f, 0x80, 0x38, 0x7e, 0x0, 0x71, 0xf8,
    0x1, 0xc7, 0xe0, 0x7, 0x9f, 0x80, 0x1e, 0x7e,
    0x0, 0x3d, 0xf8, 0x0, 0x77, 0xe0, 0x1, 0xdf,
    0x80, 0x3, 0x7e, 0x0, 0xd, 0xf8, 0x0, 0x17,
    0xc0, 0x0, 0x1f, 0x7f, 0xff, 0x3b, 0xff, 0xff,
    0x2f, 0xff, 0xff,

    /* U+0052 "R" */
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xdc, 0xff, 0xfe,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xef, 0x3, 0xf7, 0x7f,
    0x3f, 0x8b, 0xf0, 0x3c, 0x30, 0x3, 0x0, 0xe0,
    0xe, 0x3, 0x80, 0x38, 0xe, 0x0, 0x70, 0x38,
    0x1, 0xe0, 0xe0, 0x7, 0x83, 0x80, 0xf, 0xe,
    0x0, 0x3c, 0x38, 0x0, 0x70, 0xe0, 0x0, 0xc3,
    0x80, 0x3, 0xe, 0x0, 0x4, 0x38, 0x0, 0x10,
    0xc0, 0x0, 0x3, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0,

    /* U+0053 "S" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xcc, 0xff, 0xfe,
    0x38, 0x0, 0x0, 0xe8, 0x0, 0x3, 0xb0, 0x0,
    0xe, 0xc0, 0x0, 0x3b, 0x80, 0x0, 0xef, 0x0,
    0x3, 0xbc, 0x0, 0xe, 0x78, 0x0, 0x39, 0xe0,
    0x0, 0xe3, 0x80, 0x3, 0x86, 0x0, 0xe, 0x1c,
    0x0, 0x38, 0x30, 0x0, 0xef, 0x3, 0xf3, 0x7f,
    0x3f, 0xb3, 0xf0, 0x3d, 0xc0, 0x3, 0x7, 0x0,
    0xe, 0x1c, 0x0, 0x38, 0x70, 0x0, 0x71, 0xc0,
    0x1, 0xc7, 0x0, 0x7, 0x9c, 0x0, 0xf, 0x70,
    0x0, 0x3d, 0xc0, 0x0, 0x77, 0x0, 0x1, 0xdc,
    0x0, 0x3, 0x70, 0x0, 0xd, 0xc0, 0x0, 0x17,
    0x0, 0x0, 0x1c, 0x7f, 0xff, 0x33, 0xff, 0xff,
    0xf, 0xff, 0xff,

    /* U+0054 "T" */
    0xff, 0xff, 0xf7, 0xff, 0xfe, 0x1f, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x70, 0x0, 0x7, 0x0, 0x0,
    0x70, 0x0, 0x7, 0x0, 0x0, 0x70, 0x0, 0x7,
    0x0, 0x0, 0x70, 0x0, 0x7, 0x0, 0x0, 0x20,
    0x0, 0x2, 0x0, 0x0, 0x20, 0x0, 0x2, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x20, 0x0, 0x2, 0x0, 0x0,
    0x20, 0x0, 0x2, 0x0, 0x0, 0x70, 0x0, 0x7,
    0x0, 0x0, 0x70, 0x0, 0x7, 0x0, 0x0, 0x70,
    0x0, 0x7, 0x0, 0x0, 0x70, 0x0, 0x7, 0x0,

    /* U+0055 "U" */
    0x0, 0x0, 0x6, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0,
    0x7e, 0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0,
    0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8, 0x0,
    0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0,
    0x1, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0x1, 0x0,
    0x0, 0x38, 0x0, 0x1, 0xf0, 0x0, 0x7, 0xe0,
    0x0, 0x1f, 0x80, 0x0, 0x7e, 0x0, 0x1, 0xf8,
    0x0, 0x7, 0xe0, 0x0, 0x1f, 0x80, 0x0, 0x7e,
    0x0, 0x1, 0xf8, 0x0, 0x7, 0xe0, 0x0, 0x1f,
    0x80, 0x0, 0x7e, 0x0, 0x1, 0xf0, 0x0, 0x7,
    0xdf, 0xff, 0xce, 0xff, 0xff, 0xcb, 0xff, 0xff,
    0xc0,

    /* U+0056 "V" */
    0x0, 0x0, 0x30, 0x0, 0xe, 0x0, 0x3, 0x80,
    0x1, 0xe0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0x1f,
    0x80, 0xf, 0xe0, 0x3, 0xf8, 0x1, 0xee, 0x0,
    0x7b, 0x80, 0x1c, 0xe0, 0x7, 0x38, 0x3, 0x8e,
    0x0, 0xc3, 0x80, 0x20, 0xc0, 0x0, 0x10, 0x0,
    0x8, 0x4, 0x3, 0x83, 0x0, 0xe1, 0xc0, 0x38,
    0xe0, 0xe, 0x38, 0x3, 0x9e, 0x0, 0xe7, 0x80,
    0x3b, 0xc0, 0xe, 0xf0, 0x3, 0xb8, 0x0, 0xec,
    0x0, 0x3b, 0x0, 0xe, 0x80, 0x3, 0x0, 0x0,
    0xc0, 0x0, 0x20, 0x0, 0x8, 0x0, 0x0,

    /* U+0057 "W" */
    0x0, 0x0, 0x4, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe0, 0x38, 0x1f, 0x80, 0xe0,
    0x7e, 0x3, 0x81, 0xf8, 0xe, 0x7, 0xe0, 0x38,
    0x1f, 0x80, 0xe0, 0x7e, 0x3, 0x81, 0xf8, 0xe,
    0x7, 0xe0, 0x10, 0x1f, 0x80, 0x40, 0x7e, 0x1,
    0x1, 0xf8, 0x4, 0x7, 0xe0, 0x10, 0x7, 0x0,
    0x0, 0x24, 0x0, 0x0, 0xe0, 0xa, 0x7, 0xe0,
    0xee, 0x1f, 0x87, 0x18, 0x7e, 0x1c, 0x71, 0xf8,
    0xf1, 0xc7, 0xe7, 0x87, 0x9f, 0x9e, 0xe, 0x7e,
    0xf0, 0x3d, 0xfb, 0xc0, 0x77, 0xee, 0x1, 0xdf,
    0xb8, 0x3, 0x7e, 0xc0, 0xd, 0xfa, 0x0, 0x17,
    0xc0, 0x0, 0x1f, 0x0, 0x0, 0x38, 0x0, 0x0,
    0x20, 0x0, 0x0,

    /* U+0058 "X" */
    0x80, 0x7, 0x0, 0x3c, 0x0, 0xf8, 0x7, 0xf0,
    0x3f, 0xc0, 0xf7, 0x87, 0x9e, 0x1e, 0x38, 0x70,
    0xe1, 0xc1, 0xce, 0x3, 0x30, 0x4, 0x80, 0x0,
    0x0, 0x0, 0x1, 0x20, 0xc, 0xc0, 0x73, 0x83,
    0x87, 0xe, 0x1c, 0x78, 0x79, 0xe1, 0xef, 0x3,
    0xfc, 0xf, 0xe0, 0x1f, 0x0, 0x3c, 0x0, 0xe0,
    0x1,

    /* U+0059 "Y" */
    0x80, 0x7, 0x0, 0x3e, 0x0, 0xf8, 0x7, 0xf0,
    0x1f, 0xc0, 0xf7, 0x83, 0x9e, 0x1e, 0x3c, 0x70,
    0x71, 0xc1, 0xc6, 0x3, 0x38, 0x2, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x40, 0x1, 0x0, 0x4, 0x0,
    0x10, 0x0, 0x40, 0x3, 0x80, 0xe, 0x0, 0x38,
    0x0, 0xe0, 0x3, 0x80, 0xe, 0x0, 0x38, 0x0,
    0xe0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0x0, 0x3,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x70, 0x0, 0x3,
    0xc0, 0x0, 0xf, 0x0, 0x0, 0x78, 0x0, 0x1,
    0xe0, 0x0, 0x7, 0x0, 0x0, 0x18, 0x0, 0x0,
    0xe0, 0x0, 0x3, 0x0, 0x0, 0x8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0xc0, 0x0, 0x7, 0x0, 0x0, 0x18, 0x0, 0x0,
    0xe0, 0x0, 0x7, 0x80, 0x0, 0x1e, 0x0, 0x0,
    0xf0, 0x0, 0x3, 0xc0, 0x0, 0xe, 0x0, 0x0,
    0x30, 0x0, 0x0, 0xc0, 0x0, 0x2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0x3, 0xff, 0xff,
    0xf, 0xff, 0xff,

    /* U+005C "\\" */
    0x80, 0x3, 0x0, 0xc, 0x0, 0x38, 0x0, 0xf0,
    0x3, 0xc0, 0x7, 0x80, 0x1e, 0x0, 0x38, 0x0,
    0xe0, 0x1, 0xc0, 0x3, 0x0, 0x4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x20, 0x0, 0xc0, 0x3, 0x80,
    0x7, 0x0, 0x1c, 0x0, 0x78, 0x1, 0xe0, 0x3,
    0xc0, 0xf, 0x0, 0x1c, 0x0, 0x30, 0x0, 0xc0,
    0x1
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 470, .box_w = 14, .box_h = 28, .ofs_x = 8, .ofs_y = 4},
    {.bitmap_index = 49, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 470, .box_w = 3, .box_h = 35, .ofs_x = 22, .ofs_y = 1},
    {.bitmap_index = 162, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 470, .box_w = 22, .box_h = 34, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 454, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 470, .box_w = 22, .box_h = 34, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 746, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 115, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 954, .adv_w = 470, .box_w = 21, .box_h = 32, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 470, .box_w = 21, .box_h = 20, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 470, .box_w = 21, .box_h = 32, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 470, .box_w = 23, .box_h = 32, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 1267, .adv_w = 470, .box_w = 23, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 1468, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1567, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1666, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1864, .adv_w = 470, .box_w = 21, .box_h = 35, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 1956, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2055, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2152, .adv_w = 470, .box_w = 21, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2247, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2344, .adv_w = 470, .box_w = 18, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2423, .adv_w = 470, .box_w = 22, .box_h = 34, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2517, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2616, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2715, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2814, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 2911, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3010, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 3107, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3206, .adv_w = 470, .box_w = 20, .box_h = 32, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 3286, .adv_w = 470, .box_w = 22, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3383, .adv_w = 470, .box_w = 18, .box_h = 35, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3462, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3561, .adv_w = 470, .box_w = 14, .box_h = 28, .ofs_x = 8, .ofs_y = 4},
    {.bitmap_index = 3610, .adv_w = 470, .box_w = 14, .box_h = 28, .ofs_x = 8, .ofs_y = 4},
    {.bitmap_index = 3659, .adv_w = 470, .box_w = 22, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3758, .adv_w = 470, .box_w = 14, .box_h = 28, .ofs_x = 8, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 47, .range_length = 12, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 60, .range_length = 31, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 92, .range_length = 1, .glyph_id_start = 44,
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
    .cmap_num = 3,
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
const lv_font_t font_dseg14_modern_36 = {
#else
lv_font_t font_dseg14_modern_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 36,          /*The maximum line height required by the font*/
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



#endif /*#if FONT_DSEG14_MODERN_36*/

