
#include "drv/drv_base.h"

/**
 * main.c
 */
int main(void)
{
    initWdog();
    initInternalClk();
    initFlash();
    initPerherialsReq();

    ledInitGpio();

    enablePIE();

    ledRxUpdate(true);
    ledTxUpdate(true);
    ledWarningUpdate(true);
    ledErrorUpdate(true);

    for(;;) {


        ledRxUpdate(!state);
        ledTxUpdate(state);

        state = !state;
        DELAY_US(1000000L);
    }

	return 0;
}
