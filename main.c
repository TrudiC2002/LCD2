#include "driverlib.h"
#include "msp430.h"
#include "Header.h"

void LCD()
{
    //initialising the LCD
    //pins 27 - 35 are not needed
    LCDPCTL0 = 0b1111111111111111;
    LCDPCTL1 = 0b0000011111111111;
    LCDPCTL2 = 0b1111111111110000;

    LCDCTL0 |= (1<<2);      //Turn segments on
    LCDCTL0 = (0b011<<3);   //Set 4 mux mode
    LCDBLKCTL = 0b1000;     //Blinking off as default
}
