/*
 * drv_i2c.c
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima Mohammadi
 */

#include "drv/drv_i2c.h"

void i2cInit() {

    InitI2CGpio();

    I2caRegs.I2CSAR = slaveAddress;
    I2caRegs.I2CPSC.all = 6; // 60 Mhz
    I2caRegs.I2CCLKL = 10;
    I2caRegs.I2CCLKH = 5;
    I2caRegs.I2CIER = 0x24;
    I2caRegs.I2CMDR.all = 0x0020;  // reset on suspend
    I2caRegs.I2CFFTX.all = 0x6000; // Enable TXFIFO, RXFIFO
    I2caRegs.I2CFFRX.all = 0x2040; // Enbale RXFIFO, RXFFINT
}

void i2cWriteData(uint8_t *buf, uint8_t slaveAddress, uint8_t len) {

}

void i2cReadData(uint8_t *buf, uint8_t slaveAddress, uint8_t len) {

}
