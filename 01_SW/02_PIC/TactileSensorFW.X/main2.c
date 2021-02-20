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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F19176
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
uint8_t a;
uint16_t value;
uint8_t byteH;
uint8_t byteL;
uint8_t data[50];
uint8_t i;
uint8_t b;
uint8_t c;
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
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
        if (EUSART1_is_rx_ready())
        {
           a=EUSART1_Read();
           //ADCC_StartConversion(RA0);
           //c=0;
           //while (c=0)
           //{
            //   if (ADCC_IsConversionDone())
             //  {
              //     value=ADCC_GetConversionResult();
               //    c=1;
              // }
           //}
           //ADCC_StopConversion();
           //ADCC_DischargeSampleCapacitor();
          // data[0]=value>>8;data[1]=value;
          // __delay_us(100);
           
           //value=ADCC_GetSingleConversion(RA0);
           value=ADCC_GetSingleConversion(channel_AND0);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[0]=ADRESL;
           data[1]=ADRESH;
           
           b=0;
           EUSART1_Write(data[0]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[1]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
         // data[0]=ADRESH;data[1]=ADRESL;
         // ADCC_DischargeSampleCapacitor();
           //          __delay_us(100);
           value=ADCC_GetSingleConversion(channel_ANC4);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[2]=ADRESL;
           data[3]=ADRESH;
           
           b=0;
           EUSART1_Write(data[2]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[3]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND5);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[4]=ADRESL;
           data[5]=ADRESH;
           
           b=0;
           EUSART1_Write(data[4]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[5]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB1);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[6]=ADRESL;
           data[7]=ADRESH;
           
           b=0;
           EUSART1_Write(data[6]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[7]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB5);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[8]=ADRESL;
           data[9]=ADRESH;
           
           b=0;
           EUSART1_Write(data[8]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[9]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND1);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[10]=ADRESL;
           data[11]=ADRESH;
           
           b=0;
           EUSART1_Write(data[10]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[11]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANC6);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[12]=ADRESL;
           data[13]=ADRESH;
           
           b=0;
           EUSART1_Write(data[12]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[13]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND6);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[14]=ADRESL;
           data[15]=ADRESH;
           
           b=0;
           EUSART1_Write(data[14]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[15]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB2);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[16]=ADRESL;
           data[17]=ADRESH;
           
           b=0;
           EUSART1_Write(data[16]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[17]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANA0);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[18]=ADRESL;
           data[19]=ADRESH;
           
           b=0;
           EUSART1_Write(data[18]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[19]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND2);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[20]=ADRESL;
           data[21]=ADRESH;
           
           b=0;
           EUSART1_Write(data[20]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[21]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANC7);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[22]=ADRESL;
           data[23]=ADRESH;
           
           b=0;
           EUSART1_Write(data[22]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[23]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND7);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[24]=ADRESL;
           data[25]=ADRESH;
           
           b=0;
           EUSART1_Write(data[24]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[25]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB3);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[26]=ADRESL;
           data[27]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[26]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[27]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANA1);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[28]=ADRESL;
           data[29]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[28]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[29]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND3);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[30]=ADRESL;
           data[31]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[30]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[31]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_AND4);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[32]=ADRESL;
           data[33]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[32]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[33]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB0);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[34]=ADRESL;
           data[35]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[34]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[35]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANB4);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[36]=ADRESL;
           data[37]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[36]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[37]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           value=ADCC_GetSingleConversion(channel_ANA2);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[38]=ADRESL;
           data[39]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[38]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[39]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANA3);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[40]=ADRESL;
           data[41]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[40]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[41]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANA4);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[42]=ADRESL;
           data[43]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[42]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[43]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANE0);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[44]=ADRESL;
           data[45]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[44]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[45]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANE1);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[46]=ADRESL;
           data[47]=ADRESH;
           
           
           b=0;
           EUSART1_Write(data[46]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[47]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           
           
           value=ADCC_GetSingleConversion(channel_ANE2);
           ADCON0bits.ADGO = 0;
           ADPCH = 0x3b;
           data[48]=ADRESL;
           data[49]=ADRESH;

           b=0;
           EUSART1_Write(data[48]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
           b=0;
           EUSART1_Write(data[49]);
           while(b==0){if (EUSART1_is_tx_done()){b=1;}}
          
         
         
           
/*           for (i=0;i<50;i++){
               EUSART1_Write(data[i]);
           }
           __delay_us(200);*/
         
         /*
                i=0;
                while (i<50){
                    if (EUSART1_is_tx_ready){
                    EUSART1_Write(data[i]);
                    i=i+1;
                    b=0;
                    while(b=0){
                        if (EUSART1_is_tx_done())
                        {
                            b=1;
                        }
                    }
                    }
                }
           */
                
            //}
            
           // EUSART1_is_tx_done();
           // }
        }
    }
}
/**
 End of File
*/