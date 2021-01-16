/*
 * drv_led.h
 *
 *  Created on: Jan 3, 2021
 *      Author: Nima Mohammadi
 */

#pragma once

#include <drv/drv_base.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
void ledInitGpio(void);

/**
 *
 */
void ledErrorUpdate(bool state);

/**
 *
 */
void ledWarningUpdate(bool state);

/**
 *
 */
void ledRxUpdate(bool state);

/**
 *
 */
void ledTxUpdate(bool state);


#ifdef __cplusplus
}
#endif
