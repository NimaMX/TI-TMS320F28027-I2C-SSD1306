/*
 * drv_base.h
 *
 *  Created on: Jan 7, 2021
 *      Author: nima
 */

#pragma once

#include "DSP28x_Project.h"

#include "gpio.h"
#include "cpu.h"
#include "clk.h"
#include "pie.h"
#include "sci.h"
#include "spi.h"
#include "flash.h"
#include "pll.h"
#include "wdog.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
extern GPIO_Handle mGpio;

/**
 *
 */
void initWdog(void);

/**
 *
 */
void initInternalClk(void);

/**
 *
 */
void initPerherialsReq(void);

/**
 *
 */
void initFlash(void);

/**
 *
 */
void enablePIE(void);

#ifdef __cplusplus
}
#endif
