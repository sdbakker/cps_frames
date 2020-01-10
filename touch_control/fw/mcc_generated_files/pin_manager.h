/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16LF1559
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SigIn aliases
#define SigIn_TRIS                 TRISAbits.TRISA2
#define SigIn_LAT                  LATAbits.LATA2
#define SigIn_PORT                 PORTAbits.RA2
#define SigIn_WPU                  WPUAbits.WPUA2
#define SigIn_ANS                  ANSELAbits.ANSA2
#define SigIn_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SigIn_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SigIn_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SigIn_GetValue()           PORTAbits.RA2
#define SigIn_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SigIn_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SigIn_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SigIn_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SigIn_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SigIn_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RTS aliases
#define RTS_TRIS                 TRISAbits.TRISA4
#define RTS_LAT                  LATAbits.LATA4
#define RTS_PORT                 PORTAbits.RA4
#define RTS_WPU                  WPUAbits.WPUA4
#define RTS_ANS                  ANSELAbits.ANSA4
#define RTS_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RTS_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RTS_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RTS_GetValue()           PORTAbits.RA4
#define RTS_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RTS_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RTS_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define RTS_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define RTS_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define RTS_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC0
#define LED1_LAT                  LATCbits.LATC0
#define LED1_PORT                 PORTCbits.RC0
#define LED1_ANS                  ANSELCbits.ANSC0
#define LED1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED1_GetValue()           PORTCbits.RC0
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SigOut aliases
#define SigOut_TRIS                 TRISCbits.TRISC6
#define SigOut_LAT                  LATCbits.LATC6
#define SigOut_PORT                 PORTCbits.RC6
#define SigOut_ANS                  ANSELCbits.ANSC6
#define SigOut_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SigOut_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SigOut_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SigOut_GetValue()           PORTCbits.RC6
#define SigOut_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SigOut_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SigOut_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SigOut_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISCbits.TRISC7
#define LED2_LAT                  LATCbits.LATC7
#define LED2_PORT                 PORTCbits.RC7
#define LED2_ANS                  ANSELCbits.ANSC7
#define LED2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED2_GetValue()           PORTCbits.RC7
#define LED2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED2_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/