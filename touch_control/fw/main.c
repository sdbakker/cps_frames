/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16LF1559
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

#define FIRST_RECALIBRATION_DELAY 2000   
uint8_t _wait_to_initialize = 1;
uint16_t _first_delay_cntr = 0;
/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    SigOut_SetHigh();
    LED1_SetHigh();
    
    while (1)
    {
        if(MTOUCH_Service_Mainloop())
        {
            if (_wait_to_initialize > 0) {
                if (++_first_delay_cntr >= FIRST_RECALIBRATION_DELAY) {
                   MTOUCH_Button_InitializeAll(); 
                   _wait_to_initialize = 0;
                   LED1_SetHigh();
                }
            } else {
                /* Proximity API*/
                if(MTOUCH_Button_isPressed(0))
                {
                    SigOut_SetLow();
                    // process if proximity is triggered
                    if(EUSART_is_tx_ready())
                    {
                        RTS_SetHigh();
                        __delay_us(10);
                        EUSART_Write('b');
                    }
                    LED1_SetHigh();
                }
                else
                {
                    // process if button is not triggered
                    if (!SigIn_GetValue()) {
                        LED2_SetHigh();
                        SigOut_SetLow();
                    } else {
                        LED2_SetLow();
                        SigOut_SetHigh(); 
                    }
                    LED1_SetLow(); 
                }
            }

            if (EUSART_is_tx_done()) {
                RTS_SetLow();
            }
        }
    }
}
/**
 End of File
*/