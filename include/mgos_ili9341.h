#ifndef __MGOS_ILI9341_H
#define __MGOS_ILI9341_H

#include "mgos.h"

// Color definitions for RGB in 565-format
#define ILI9341_BLACK       0x0000      /*   0,   0,   0 */
#define ILI9341_NAVY        0x000F      /*   0,   0, 128 */
#define ILI9341_DARKGREEN   0x03E0      /*   0, 128,   0 */
#define ILI9341_DARKCYAN    0x03EF      /*   0, 128, 128 */
#define ILI9341_MAROON      0x7800      /* 128,   0,   0 */
#define ILI9341_PURPLE      0x780F      /* 128,   0, 128 */
#define ILI9341_OLIVE       0x7BE0      /* 128, 128,   0 */
#define ILI9341_LIGHTGREY   0xC618      /* 192, 192, 192 */
#define ILI9341_DARKGREY    0x7BEF      /* 128, 128, 128 */
#define ILI9341_BLUE        0x001F      /*   0,   0, 255 */
#define ILI9341_GREEN       0x07E0      /*   0, 255,   0 */
#define ILI9341_CYAN        0x07FF      /*   0, 255, 255 */
#define ILI9341_RED         0xF800      /* 255,   0,   0 */
#define ILI9341_MAGENTA     0xF81F      /* 255,   0, 255 */
#define ILI9341_YELLOW      0xFFE0      /* 255, 255,   0 */
#define ILI9341_WHITE       0xFFFF      /* 255, 255, 255 */
#define ILI9341_ORANGE      0xFD20      /* 255, 165,   0 */
#define ILI9341_GREENYELLOW 0xAFE5      /* 173, 255,  47 */
#define ILI9341_PINK        0xF81F

#ifndef SPI_DEFAULT_FREQ
#define SPI_DEFAULT_FREQ         26000000
#endif // SPI_DEFAULT_FREQ

// Externally callable functions:
void mgos_ili9341_set_window(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);
void mgos_ili9341_set_fgcolor(uint8_t r, uint8_t g, uint8_t b);
void mgos_ili9341_set_bgcolor(uint8_t r, uint8_t g, uint8_t b);
uint16_t mgos_ili9341_color565(uint8_t r, uint8_t g, uint8_t b);
void mgos_ili9341_set_fgcolor565(uint16_t rgb);
void mgos_ili9341_set_bgcolor565(uint16_t rgb);
void mgos_ili9341_set_dimensions(uint16_t width, uint16_t height);
void mgos_ili9341_set_orientation(uint8_t flags);

void mgos_ili9341_fillScreen();

void mgos_ili9341_drawPixel(uint16_t x0, uint16_t y0);
void mgos_ili9341_drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);

#endif // __MGOS_ILI9341_H