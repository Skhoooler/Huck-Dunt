/******************************************************
 * Huck Dunt Controller
 *
 * Receives input from a potentiometer and the onboard
 * switches, and sends that information to the console
 * microcontroller
 */

#include "msp.h"


/**
 * main.c
 */
void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

    /* Communications Setup */
    P3->SEL0 |=    BIT2 | BIT3;     //   Set bit 2 and bit 3 of P3SEL0
    P3->SEL1 |= ~( BIT2 | BIT3 );   // Reset bit 2 and bit 3 of P3SEL1

}
