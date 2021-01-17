
#include "drv/drv_base.h"
#include "drv/drv_i2c.h"

#include "bsp/ssd1306.h"

/**
 * main.c
 */
int main(void)
{
    // base sys init
    initWdog();
    initInternalClk();
    initFlash();
    initPerherialsReq();

    // driver layer init
    ledInitGpio();
    enablePIE();
    i2cInit(SSD1306_I2C_ADDR);

    // bsp init
    SSD1306_Init();

    SSD1306_Fill(SSD1306_COLOR_BLACK);
    SSD1306_GotoXY (40 , 5);
    SSD1306_Puts("Kir Khar" , &Font_7x10 , SSD1306_COLOR_BLACK);
    SSD1306_UpdateScreen();

    // led reset
    ledRxUpdate(true);
    ledTxUpdate(true);
    ledWarningUpdate(true);
    ledErrorUpdate(true);

    bool state = false;
    for(;;) {


        ledRxUpdate(!state);
        ledTxUpdate(state);

        state = !state;
        DELAY_US(1000000L);
    }

	return 0;
}
