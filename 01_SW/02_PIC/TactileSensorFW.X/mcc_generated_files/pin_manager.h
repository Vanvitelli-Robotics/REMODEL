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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F19175
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set channel_ANA1 aliases
#define channel_ANA1_TRIS                 TRISAbits.TRISA1
#define channel_ANA1_LAT                  LATAbits.LATA1
#define channel_ANA1_PORT                 PORTAbits.RA1
#define channel_ANA1_WPU                  WPUAbits.WPUA1
#define channel_ANA1_OD                   ODCONAbits.ODCA1
#define channel_ANA1_ANS                  ANSELAbits.ANSA1
#define channel_ANA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_ANA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_ANA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_ANA1_GetValue()           PORTAbits.RA1
#define channel_ANA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_ANA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_ANA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_ANA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_ANA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define channel_ANA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define channel_ANA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define channel_ANA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set channel_ANA2 aliases
#define channel_ANA2_TRIS                 TRISAbits.TRISA2
#define channel_ANA2_LAT                  LATAbits.LATA2
#define channel_ANA2_PORT                 PORTAbits.RA2
#define channel_ANA2_WPU                  WPUAbits.WPUA2
#define channel_ANA2_OD                   ODCONAbits.ODCA2
#define channel_ANA2_ANS                  ANSELAbits.ANSA2
#define channel_ANA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define channel_ANA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define channel_ANA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define channel_ANA2_GetValue()           PORTAbits.RA2
#define channel_ANA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define channel_ANA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define channel_ANA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define channel_ANA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define channel_ANA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define channel_ANA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define channel_ANA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define channel_ANA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set channel_ANA3 aliases
#define channel_ANA3_TRIS                 TRISAbits.TRISA3
#define channel_ANA3_LAT                  LATAbits.LATA3
#define channel_ANA3_PORT                 PORTAbits.RA3
#define channel_ANA3_WPU                  WPUAbits.WPUA3
#define channel_ANA3_OD                   ODCONAbits.ODCA3
#define channel_ANA3_ANS                  ANSELAbits.ANSA3
#define channel_ANA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define channel_ANA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define channel_ANA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define channel_ANA3_GetValue()           PORTAbits.RA3
#define channel_ANA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define channel_ANA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define channel_ANA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define channel_ANA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define channel_ANA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define channel_ANA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define channel_ANA3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define channel_ANA3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set channel_ANA4 aliases
#define channel_ANA4_TRIS                 TRISAbits.TRISA4
#define channel_ANA4_LAT                  LATAbits.LATA4
#define channel_ANA4_PORT                 PORTAbits.RA4
#define channel_ANA4_WPU                  WPUAbits.WPUA4
#define channel_ANA4_OD                   ODCONAbits.ODCA4
#define channel_ANA4_ANS                  ANSELAbits.ANSA4
#define channel_ANA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define channel_ANA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define channel_ANA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define channel_ANA4_GetValue()           PORTAbits.RA4
#define channel_ANA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define channel_ANA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define channel_ANA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define channel_ANA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define channel_ANA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define channel_ANA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define channel_ANA4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define channel_ANA4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set channel_ANB0 aliases
#define channel_ANB0_TRIS                 TRISBbits.TRISB0
#define channel_ANB0_LAT                  LATBbits.LATB0
#define channel_ANB0_PORT                 PORTBbits.RB0
#define channel_ANB0_WPU                  WPUBbits.WPUB0
#define channel_ANB0_OD                   ODCONBbits.ODCB0
#define channel_ANB0_ANS                  ANSELBbits.ANSB0
#define channel_ANB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define channel_ANB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define channel_ANB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define channel_ANB0_GetValue()           PORTBbits.RB0
#define channel_ANB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define channel_ANB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define channel_ANB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define channel_ANB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define channel_ANB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define channel_ANB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define channel_ANB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define channel_ANB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set channel_ANB1 aliases
#define channel_ANB1_TRIS                 TRISBbits.TRISB1
#define channel_ANB1_LAT                  LATBbits.LATB1
#define channel_ANB1_PORT                 PORTBbits.RB1
#define channel_ANB1_WPU                  WPUBbits.WPUB1
#define channel_ANB1_OD                   ODCONBbits.ODCB1
#define channel_ANB1_ANS                  ANSELBbits.ANSB1
#define channel_ANB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define channel_ANB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define channel_ANB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define channel_ANB1_GetValue()           PORTBbits.RB1
#define channel_ANB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define channel_ANB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define channel_ANB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define channel_ANB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define channel_ANB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define channel_ANB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define channel_ANB1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define channel_ANB1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set channel_ANB2 aliases
#define channel_ANB2_TRIS                 TRISBbits.TRISB2
#define channel_ANB2_LAT                  LATBbits.LATB2
#define channel_ANB2_PORT                 PORTBbits.RB2
#define channel_ANB2_WPU                  WPUBbits.WPUB2
#define channel_ANB2_OD                   ODCONBbits.ODCB2
#define channel_ANB2_ANS                  ANSELBbits.ANSB2
#define channel_ANB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define channel_ANB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define channel_ANB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define channel_ANB2_GetValue()           PORTBbits.RB2
#define channel_ANB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define channel_ANB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define channel_ANB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define channel_ANB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define channel_ANB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define channel_ANB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define channel_ANB2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define channel_ANB2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set channel_ANB3 aliases
#define channel_ANB3_TRIS                 TRISBbits.TRISB3
#define channel_ANB3_LAT                  LATBbits.LATB3
#define channel_ANB3_PORT                 PORTBbits.RB3
#define channel_ANB3_WPU                  WPUBbits.WPUB3
#define channel_ANB3_OD                   ODCONBbits.ODCB3
#define channel_ANB3_ANS                  ANSELBbits.ANSB3
#define channel_ANB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define channel_ANB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define channel_ANB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define channel_ANB3_GetValue()           PORTBbits.RB3
#define channel_ANB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define channel_ANB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define channel_ANB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define channel_ANB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define channel_ANB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define channel_ANB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define channel_ANB3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define channel_ANB3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set channel_ANB4 aliases
#define channel_ANB4_TRIS                 TRISBbits.TRISB4
#define channel_ANB4_LAT                  LATBbits.LATB4
#define channel_ANB4_PORT                 PORTBbits.RB4
#define channel_ANB4_WPU                  WPUBbits.WPUB4
#define channel_ANB4_OD                   ODCONBbits.ODCB4
#define channel_ANB4_ANS                  ANSELBbits.ANSB4
#define channel_ANB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define channel_ANB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define channel_ANB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define channel_ANB4_GetValue()           PORTBbits.RB4
#define channel_ANB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define channel_ANB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define channel_ANB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define channel_ANB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define channel_ANB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define channel_ANB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define channel_ANB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define channel_ANB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set channel_ANB5 aliases
#define channel_ANB5_TRIS                 TRISBbits.TRISB5
#define channel_ANB5_LAT                  LATBbits.LATB5
#define channel_ANB5_PORT                 PORTBbits.RB5
#define channel_ANB5_WPU                  WPUBbits.WPUB5
#define channel_ANB5_OD                   ODCONBbits.ODCB5
#define channel_ANB5_ANS                  ANSELBbits.ANSB5
#define channel_ANB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define channel_ANB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define channel_ANB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define channel_ANB5_GetValue()           PORTBbits.RB5
#define channel_ANB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define channel_ANB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define channel_ANB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define channel_ANB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define channel_ANB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define channel_ANB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define channel_ANB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define channel_ANB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)

// get/set channel_ANC4 aliases
#define channel_ANC4_TRIS                 TRISCbits.TRISC4
#define channel_ANC4_LAT                  LATCbits.LATC4
#define channel_ANC4_PORT                 PORTCbits.RC4
#define channel_ANC4_WPU                  WPUCbits.WPUC4
#define channel_ANC4_OD                   ODCONCbits.ODCC4
#define channel_ANC4_ANS                  ANSELCbits.ANSC4
#define channel_ANC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define channel_ANC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define channel_ANC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define channel_ANC4_GetValue()           PORTCbits.RC4
#define channel_ANC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define channel_ANC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define channel_ANC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define channel_ANC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define channel_ANC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define channel_ANC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define channel_ANC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define channel_ANC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set channel_ANC6 aliases
#define channel_ANC6_TRIS                 TRISCbits.TRISC6
#define channel_ANC6_LAT                  LATCbits.LATC6
#define channel_ANC6_PORT                 PORTCbits.RC6
#define channel_ANC6_WPU                  WPUCbits.WPUC6
#define channel_ANC6_OD                   ODCONCbits.ODCC6
#define channel_ANC6_ANS                  ANSELCbits.ANSC6
#define channel_ANC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define channel_ANC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define channel_ANC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define channel_ANC6_GetValue()           PORTCbits.RC6
#define channel_ANC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define channel_ANC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define channel_ANC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define channel_ANC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define channel_ANC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define channel_ANC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define channel_ANC6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define channel_ANC6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set channel_ANC7 aliases
#define channel_ANC7_TRIS                 TRISCbits.TRISC7
#define channel_ANC7_LAT                  LATCbits.LATC7
#define channel_ANC7_PORT                 PORTCbits.RC7
#define channel_ANC7_WPU                  WPUCbits.WPUC7
#define channel_ANC7_OD                   ODCONCbits.ODCC7
#define channel_ANC7_ANS                  ANSELCbits.ANSC7
#define channel_ANC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define channel_ANC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define channel_ANC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define channel_ANC7_GetValue()           PORTCbits.RC7
#define channel_ANC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define channel_ANC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define channel_ANC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define channel_ANC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define channel_ANC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define channel_ANC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define channel_ANC7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define channel_ANC7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set channel_AND0 aliases
#define channel_AND0_TRIS                 TRISDbits.TRISD0
#define channel_AND0_LAT                  LATDbits.LATD0
#define channel_AND0_PORT                 PORTDbits.RD0
#define channel_AND0_WPU                  WPUDbits.WPUD0
#define channel_AND0_OD                   ODCONDbits.ODCD0
#define channel_AND0_ANS                  ANSELDbits.ANSD0
#define channel_AND0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define channel_AND0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define channel_AND0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define channel_AND0_GetValue()           PORTDbits.RD0
#define channel_AND0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define channel_AND0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define channel_AND0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define channel_AND0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define channel_AND0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define channel_AND0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define channel_AND0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define channel_AND0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set channel_AND1 aliases
#define channel_AND1_TRIS                 TRISDbits.TRISD1
#define channel_AND1_LAT                  LATDbits.LATD1
#define channel_AND1_PORT                 PORTDbits.RD1
#define channel_AND1_WPU                  WPUDbits.WPUD1
#define channel_AND1_OD                   ODCONDbits.ODCD1
#define channel_AND1_ANS                  ANSELDbits.ANSD1
#define channel_AND1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define channel_AND1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define channel_AND1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define channel_AND1_GetValue()           PORTDbits.RD1
#define channel_AND1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define channel_AND1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define channel_AND1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define channel_AND1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define channel_AND1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define channel_AND1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define channel_AND1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define channel_AND1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set channel_AND2 aliases
#define channel_AND2_TRIS                 TRISDbits.TRISD2
#define channel_AND2_LAT                  LATDbits.LATD2
#define channel_AND2_PORT                 PORTDbits.RD2
#define channel_AND2_WPU                  WPUDbits.WPUD2
#define channel_AND2_OD                   ODCONDbits.ODCD2
#define channel_AND2_ANS                  ANSELDbits.ANSD2
#define channel_AND2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define channel_AND2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define channel_AND2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define channel_AND2_GetValue()           PORTDbits.RD2
#define channel_AND2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define channel_AND2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define channel_AND2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define channel_AND2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define channel_AND2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define channel_AND2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define channel_AND2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define channel_AND2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set channel_AND3 aliases
#define channel_AND3_TRIS                 TRISDbits.TRISD3
#define channel_AND3_LAT                  LATDbits.LATD3
#define channel_AND3_PORT                 PORTDbits.RD3
#define channel_AND3_WPU                  WPUDbits.WPUD3
#define channel_AND3_OD                   ODCONDbits.ODCD3
#define channel_AND3_ANS                  ANSELDbits.ANSD3
#define channel_AND3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define channel_AND3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define channel_AND3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define channel_AND3_GetValue()           PORTDbits.RD3
#define channel_AND3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define channel_AND3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define channel_AND3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define channel_AND3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define channel_AND3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define channel_AND3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define channel_AND3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define channel_AND3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set channel_AND4 aliases
#define channel_AND4_TRIS                 TRISDbits.TRISD4
#define channel_AND4_LAT                  LATDbits.LATD4
#define channel_AND4_PORT                 PORTDbits.RD4
#define channel_AND4_WPU                  WPUDbits.WPUD4
#define channel_AND4_OD                   ODCONDbits.ODCD4
#define channel_AND4_ANS                  ANSELDbits.ANSD4
#define channel_AND4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define channel_AND4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define channel_AND4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define channel_AND4_GetValue()           PORTDbits.RD4
#define channel_AND4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define channel_AND4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define channel_AND4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define channel_AND4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define channel_AND4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define channel_AND4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define channel_AND4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define channel_AND4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set channel_AND5 aliases
#define channel_AND5_TRIS                 TRISDbits.TRISD5
#define channel_AND5_LAT                  LATDbits.LATD5
#define channel_AND5_PORT                 PORTDbits.RD5
#define channel_AND5_WPU                  WPUDbits.WPUD5
#define channel_AND5_OD                   ODCONDbits.ODCD5
#define channel_AND5_ANS                  ANSELDbits.ANSD5
#define channel_AND5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define channel_AND5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define channel_AND5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define channel_AND5_GetValue()           PORTDbits.RD5
#define channel_AND5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define channel_AND5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define channel_AND5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define channel_AND5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define channel_AND5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define channel_AND5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define channel_AND5_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define channel_AND5_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set channel_AND6 aliases
#define channel_AND6_TRIS                 TRISDbits.TRISD6
#define channel_AND6_LAT                  LATDbits.LATD6
#define channel_AND6_PORT                 PORTDbits.RD6
#define channel_AND6_WPU                  WPUDbits.WPUD6
#define channel_AND6_OD                   ODCONDbits.ODCD6
#define channel_AND6_ANS                  ANSELDbits.ANSD6
#define channel_AND6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define channel_AND6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define channel_AND6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define channel_AND6_GetValue()           PORTDbits.RD6
#define channel_AND6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define channel_AND6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define channel_AND6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define channel_AND6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define channel_AND6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define channel_AND6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define channel_AND6_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define channel_AND6_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set channel_AND7 aliases
#define channel_AND7_TRIS                 TRISDbits.TRISD7
#define channel_AND7_LAT                  LATDbits.LATD7
#define channel_AND7_PORT                 PORTDbits.RD7
#define channel_AND7_WPU                  WPUDbits.WPUD7
#define channel_AND7_OD                   ODCONDbits.ODCD7
#define channel_AND7_ANS                  ANSELDbits.ANSD7
#define channel_AND7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define channel_AND7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define channel_AND7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define channel_AND7_GetValue()           PORTDbits.RD7
#define channel_AND7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define channel_AND7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define channel_AND7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define channel_AND7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define channel_AND7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define channel_AND7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define channel_AND7_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define channel_AND7_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set channel_ANE0 aliases
#define channel_ANE0_TRIS                 TRISEbits.TRISE0
#define channel_ANE0_LAT                  LATEbits.LATE0
#define channel_ANE0_PORT                 PORTEbits.RE0
#define channel_ANE0_WPU                  WPUEbits.WPUE0
#define channel_ANE0_OD                   ODCONEbits.ODCE0
#define channel_ANE0_ANS                  ANSELEbits.ANSE0
#define channel_ANE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define channel_ANE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define channel_ANE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define channel_ANE0_GetValue()           PORTEbits.RE0
#define channel_ANE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define channel_ANE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define channel_ANE0_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define channel_ANE0_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define channel_ANE0_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define channel_ANE0_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define channel_ANE0_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define channel_ANE0_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set channel_ANE1 aliases
#define channel_ANE1_TRIS                 TRISEbits.TRISE1
#define channel_ANE1_LAT                  LATEbits.LATE1
#define channel_ANE1_PORT                 PORTEbits.RE1
#define channel_ANE1_WPU                  WPUEbits.WPUE1
#define channel_ANE1_OD                   ODCONEbits.ODCE1
#define channel_ANE1_ANS                  ANSELEbits.ANSE1
#define channel_ANE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define channel_ANE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define channel_ANE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define channel_ANE1_GetValue()           PORTEbits.RE1
#define channel_ANE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define channel_ANE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define channel_ANE1_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define channel_ANE1_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define channel_ANE1_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define channel_ANE1_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define channel_ANE1_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define channel_ANE1_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set channel_ANE2 aliases
#define channel_ANE2_TRIS                 TRISEbits.TRISE2
#define channel_ANE2_LAT                  LATEbits.LATE2
#define channel_ANE2_PORT                 PORTEbits.RE2
#define channel_ANE2_WPU                  WPUEbits.WPUE2
#define channel_ANE2_ANS                  ANSELEbits.ANSE2
#define channel_ANE2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define channel_ANE2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define channel_ANE2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define channel_ANE2_GetValue()           PORTEbits.RE2
#define channel_ANE2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define channel_ANE2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define channel_ANE2_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define channel_ANE2_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define channel_ANE2_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define channel_ANE2_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

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