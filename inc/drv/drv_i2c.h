/*
 * drv_i2c.h
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima Mohammadi
 */

#pragma once

#include "drv_base.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
void i2cInit(uint8_t slaveAddress);

/**
 *
 */
uint8_t i2cWriteData(uint8_t slaveAddress, uint8_t *buf, size_t len);

/**
 *
 */
void i2cReadData(uint8_t *buf, uint8_t slaveAddress, uint8_t len);

/**
 *
 */
__interrupt void i2cFirstInt(void);

#ifdef __cplusplus
}
#endif
