/*
 * ssd1306.h
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima_
 */

#pragma once

#include <drv/drv_i2c.h>
#include "fonts.h"

#include "stdlib.h"
#include "string.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SSD1306_I2C_ADDR
#define SSD1306_I2C_ADDR        0x3C
#endif

#ifndef SSD1306_WIDTH
#define SSD1306_WIDTH            128
#endif

#ifndef SSD1306_HEIGHT
#define SSD1306_HEIGHT           64
#endif

#ifndef ssd1306_I2C_TIMEOUT
#define ssd1306_I2C_TIMEOUT      20000
#endif

typedef enum {
    SSD1306_COLOR_BLACK = 0x00,
    SSD1306_COLOR_WHITE = 0x01
} SSD1306_COLOR_t;


uint8_t SSD1306_Init();

void SSD1306_UpdateScreen(void);

void SSD1306_ToggleInvert(void);

void SSD1306_Fill(SSD1306_COLOR_t Color);

void SSD1306_DrawPixel(uint16_t x, uint16_t y, SSD1306_COLOR_t color);

void SSD1306_GotoXY(uint16_t x, uint16_t y);

char SSD1306_Putc(char ch, FontDef_t* Font, SSD1306_COLOR_t color);

char SSD1306_Puts(char* str, FontDef_t* Font, SSD1306_COLOR_t color);

void SSD1306_DrawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, SSD1306_COLOR_t c);

void SSD1306_DrawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);

void SSD1306_DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);

void SSD1306_DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, SSD1306_COLOR_t color);

void SSD1306_DrawCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);

void SSD1306_DrawFilledCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);

void ssd1306_I2C_Write(uint8_t address, uint8_t reg, uint8_t data);

void ssd1306_I2C_WriteMulti(uint8_t address, uint8_t reg, uint8_t *data, uint16_t count);

#ifdef __cplusplus
}
#endif
