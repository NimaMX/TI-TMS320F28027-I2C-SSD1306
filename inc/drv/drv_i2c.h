/*
 * drv_i2c.h
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima Mohammadi
 */

#pragma once

#include "DSP28x_Project.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
void i2cInit(void);

/**
 *
 */
void i2cWriteData(uint8_t *buf, uint8_t slaveAddress, uint8_t len);

/**
 *
 */
void i2cReadData(uint8_t *buf, uint8_t slaveAddress, uint8_t len);

#ifdef __cplusplus
}
#endif
