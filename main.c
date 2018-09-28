/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC24 / dsPIC33 / PIC32MM MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - pic24-dspic-pic32mm : 1.55
        Device            :  PIC32MM0256GPM048
    The generated drivers are tested against the following:
        Compiler          :  XC32 v2.05
        MPLAB             :  MPLAB X v4.15
*/



#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    SCCP4_COMPARE_Initialize();
    
    // When using interrupts, you need to set the Global Interrupt Enable bits
    // Use the following macros to:
    // Enable the Global Interrupts
    INTERRUPT_GlobalEnable();
    // Disable the Global Interrupts
    //INTERRUPT_GlobalDisable();
  
    while (1)
    {
        // Add your application code
    }
}
