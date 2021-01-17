/*
 * drv_led.c
 *
 *  Created on: Jan 7, 2021
 *      Author: nima mohammadi
 */

#include <drv/drv_led.h>

void ledInitGpio(void)
{
    EALLOW;

    // led error
    //GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;  // PULL-UP ENABLED
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; // GPIO0
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;  // GPIO DIR

    // led  warn
    //GpioCtrlRegs.GPAPUD.bit.GPIO1 = 0;  // PULL-UP ENABLED
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; // GPIO0
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;  // GPIO DIR

    // led rx
    //GpioCtrlRegs.GPAPUD.bit.GPIO2 = 0;  // PULL-UP ENABLED
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; // GPIO0
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;  // GPIO DIR

    // led tx
    //GpioCtrlRegs.GPAPUD.bit.GPIO3 = 0;  // PULL-UP ENABLED
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; // GPIO0
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;  // GPIO DIR

    EDIS;
}

void ledErrorUpdate(bool state)
{
    if(state)
        GpioDataRegs.GPADAT.bit.GPIO0 = 0x5;
    else
        GpioDataRegs.GPADAT.bit.GPIO0 = 0xA;
}

void ledWarningUpdate(bool state)
{
    if(state)
        GpioDataRegs.GPADAT.bit.GPIO1 = 0x5;
    else
        GpioDataRegs.GPADAT.bit.GPIO1 = 0xA;
}

void ledRxUpdate(bool state)
{
    if(state)
        GpioDataRegs.GPADAT.bit.GPIO2 = 0x5;
    else
        GpioDataRegs.GPADAT.bit.GPIO2 = 0xA;
}

void ledTxUpdate(bool state)
{
    if(state)
        GpioDataRegs.GPADAT.bit.GPIO3 = 0x5;
    else
        GpioDataRegs.GPADAT.bit.GPIO3 = 0xA;
}
