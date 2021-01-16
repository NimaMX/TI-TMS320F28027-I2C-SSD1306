/*
 * fonts.h
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima Mohammadi
 */

#pragma once

#include "DSP28x_Project.h"
#include "string.h"

typedef struct {
    uint8_t FontWidth;
    uint8_t FontHeight;
    const uint16_t *data;
} FontDef_t;

typedef struct {
    uint16_t Length;
    uint16_t Height;
} FONTS_SIZE_t;

#ifdef __cplusplus
extern "C" {
#endif

extern FontDef_t Font_7x10;
extern FontDef_t Font_11x18;
extern FontDef_t Font_16x26;

char* FONTS_GetStringSize(char* str, FONTS_SIZE_t* SizeStruct, FontDef_t* Font);


#ifdef __cplusplus
}
#endif
