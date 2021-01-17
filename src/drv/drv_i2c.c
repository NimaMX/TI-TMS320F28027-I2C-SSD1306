/*
 * drv_i2c.c
 *
 *  Created on: Jan 16, 2021
 *      Author: Nima Mohammadi
 */

#include "drv/drv_i2c.h"

void i2cInit(uint8_t slaveAddress)
{

    EALLOW;

    // enable SCL and SDA pin Pull-up mode
    GpioCtrlRegs.GPBPUD.bit.GPIO32 = 0;
    GpioCtrlRegs.GPBPUD.bit.GPIO33 = 0;

    // enable SCL and SDA pin Async Input
    GpioCtrlRegs.GPBQSEL1.bit.GPIO32 = 3;
    GpioCtrlRegs.GPBQSEL1.bit.GPIO33 = 3;

    // configure mux to enbale SCL and SDA
    GpioCtrlRegs.GPBMUX1.bit.GPIO32 = 1;
    GpioCtrlRegs.GPBMUX1.bit.GPIO33 = 1;

    EDIS;

    // Enable the interrupt
    EALLOW;
    PieVectTable.I2CINT1A = &i2cFirstInt;
    EDIS;

    // Update register values
    I2caRegs.I2CSAR = slaveAddress;
    I2caRegs.I2CPSC.all = 6; // 60 Mhz
    I2caRegs.I2CCLKL = 10;
    I2caRegs.I2CCLKH = 5;
    I2caRegs.I2CIER.all = 0x24;
    I2caRegs.I2CMDR.all = 0x0020;  // reset on suspend
    I2caRegs.I2CFFTX.all = 0x6000; // Enable TXFIFO, RXFIFO
    I2caRegs.I2CFFRX.all = 0x2040; // Enbale RXFIFO, RXFFINT

    PieCtrlRegs.PIEIER8.bit.INTx1 = 1;

    IER |= M_INT8;
    EINT;
}

uint8_t i2cWriteData(uint8_t slaveAddress, uint8_t *buf, size_t len)
{
    if (I2caRegs.I2CMDR.bit.STP == 1)
    {
        return I2C_STP_NOT_READY_ERROR;
    }

    I2caRegs.I2CSAR = slaveAddress;
    if (I2caRegs.I2CSTR.bit.BB == 1)
    {
        return I2C_BUS_BUSY_ERROR;
    }

    I2caRegs.I2CCNT = len;

    while (len--) {
        I2caRegs.I2CDXR = *(buf++);
    }

    I2caRegs.I2CMDR.all = 0x6E20;

    return 0;
}

void i2cReadData(uint8_t *buf, uint8_t slaveAddress, uint8_t len)
{
    // will be implemented
}

__interrupt void i2cFirstInt(void)
{

}
