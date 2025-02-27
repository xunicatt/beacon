/*******************************************************************************
 * Size: 64 px
 * Bpp: 1
 * Opts: --bpp 1 --size 64 --no-compress --font digital-7.ttf --symbols 1234567890 :/\. --format lvgl -o font_digital_64.c
 ******************************************************************************/

#include <lvgl.h>
#include <config.h>

#if FONT_DIGITAL_64

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002E "." */
    0xff, 0xff, 0xf0,

    /* U+002F "/" */
    0x0, 0x0, 0xe, 0x0, 0x0, 0x7, 0xc0, 0x0,
    0x7, 0xe0, 0x0, 0x3, 0xf0, 0x0, 0x3, 0xf0,
    0x0, 0x1, 0xf8, 0x0, 0x1, 0xf8, 0x0, 0x0,
    0xfc, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f,
    0x0, 0x0, 0x1f, 0x80, 0x0, 0x1f, 0x80, 0x0,
    0xf, 0xc0, 0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0,
    0x0, 0x1, 0xe0, 0x0, 0x0, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xc0, 0x0,
    0x1, 0xe0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0x7e, 0x0, 0x0,
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x1f, 0x80,
    0x0, 0x1f, 0x80, 0x0, 0xf, 0xc0, 0x0, 0xf,
    0xc0, 0x0, 0x7, 0xe0, 0x0, 0x7, 0xe0, 0x0,
    0x3, 0xf0, 0x0, 0x3, 0xf0, 0x0, 0x1, 0xf8,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x1c, 0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xfe, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xf8, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x7,
    0xc0, 0x0, 0x7, 0xf0, 0x0, 0x7, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1,
    0xff, 0x80, 0x0, 0xff, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+0031 "1" */
    0x23, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0xce, 0x30, 0x0, 0x67, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xef, 0x71, 0x0,

    /* U+0032 "2" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xf0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7, 0xc0,
    0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7,
    0xc0, 0x0, 0x0, 0xe1, 0xff, 0xff, 0x31, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe3, 0x3f, 0xff, 0xe1,
    0xc0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x7, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xe1, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc,
    0x1f, 0xff, 0xfe, 0x0,

    /* U+0033 "3" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xf0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7, 0xc0,
    0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7,
    0xc0, 0x0, 0x0, 0xe1, 0xff, 0xff, 0x31, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xee,
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0x7f, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x80, 0x0,
    0x1, 0xf8, 0x0, 0x0, 0xff, 0x80, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xfc, 0x0, 0x1, 0xf9, 0xff, 0xff, 0x31, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xee,
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0x1e, 0x0, 0x0, 0xf, 0x0, 0x0, 0x7,
    0x0, 0x0, 0x1, 0x0,

    /* U+0035 "5" */
    0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xfe, 0x3f, 0xff,
    0xfe, 0x3, 0xff, 0xff, 0xe, 0x0, 0x0, 0x7,
    0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x38, 0x0, 0x0, 0x19, 0xff, 0xff, 0x1, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xee,
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+0036 "6" */
    0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xfe, 0x3f, 0xff,
    0xfe, 0x3, 0xff, 0xff, 0xe, 0x0, 0x0, 0x7,
    0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x38, 0x0, 0x0, 0x19, 0xff, 0xff, 0x1, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe3, 0x3f, 0xff, 0xef,
    0xc0, 0x0, 0xf, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1,
    0xff, 0x80, 0x0, 0xff, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xfe, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xf8, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0xe8, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0xe,
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0x1e, 0x0, 0x0, 0xf, 0x0, 0x0, 0x3,
    0x0,

    /* U+0038 "8" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xfe, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xf8, 0x0, 0x0, 0xf9, 0xff, 0xff, 0x31, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe3, 0x3f, 0xff, 0xef,
    0xc0, 0x0, 0xf, 0xf8, 0x0, 0xf, 0xfc, 0x0,
    0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1, 0xff,
    0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0,
    0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x3, 0xff, 0x0, 0x1,
    0xff, 0x80, 0x0, 0xff, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+0039 "9" */
    0x3f, 0xff, 0xf2, 0x3f, 0xff, 0xfb, 0xff, 0xff,
    0xfd, 0xe3, 0xff, 0xfd, 0xfe, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xfe,
    0x0, 0x3, 0xff, 0x0, 0x1, 0xff, 0x80, 0x0,
    0xff, 0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0,
    0x0, 0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7,
    0xf8, 0x0, 0x0, 0xf9, 0xff, 0xff, 0x31, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xee,
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x7f,
    0xff, 0xbf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xf7,
    0x9f, 0xff, 0xf9, 0x0,

    /* U+003A ":" */
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xe0,

    /* U+005C "\\" */
    0x38, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0xf, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf8, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0x1f, 0x80, 0x0, 0x7, 0xe0, 0x0, 0x3,
    0xf0, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0x1f, 0x80, 0x0, 0xf, 0xc0, 0x0, 0x3,
    0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x78, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0,
    0x0, 0xf, 0x0, 0x0, 0x7, 0x80, 0x0, 0x3,
    0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0x1f, 0x80, 0x0, 0xf,
    0xc0, 0x0, 0x3, 0xf0, 0x0, 0x1, 0xf8, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0x3f, 0x0, 0x0, 0xf,
    0xc0, 0x0, 0x7, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xfc, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x7, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 279, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 168, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 168, .box_w = 5, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 484, .box_w = 25, .box_h = 41, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 1084, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1216, .adv_w = 484, .box_w = 25, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 168, .box_w = 5, .box_h = 23, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 1363, .adv_w = 482, .box_w = 25, .box_h = 42, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x3c
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 61, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
const lv_font_t font_digital_64 = {
#else
lv_font_t font_digital_64 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 42,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -7,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FONT_DIGITAL_64*/

