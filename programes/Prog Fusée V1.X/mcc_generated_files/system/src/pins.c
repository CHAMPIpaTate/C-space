/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../pins.h"

void (*BP_Fin_Course_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;
    LATD = 0xC;
    LATE = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0xF2;
    TRISB = 0xFF;
    TRISC = 0xF8;
    TRISD = 0xFF;
    TRISE = 0x7;

    /**
    ANSELx registers
    */
    ANSELA = 0x72;
    ANSELB = 0xEF;
    ANSELC = 0xF0;
    ANSELD = 0xF3;
    ANSELE = 0x7;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUD = 0x0;
    WPUE = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    ODCOND = 0x0;
    ODCONE = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x7;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0xF;

    /**
    PPS registers
    */
    SSP1DATPPS = 0x13; //RC3->MSSP1:SDI1;
    ADCACTPPS = 0xC; //RB4->ADCC:ADCACT;
    RC1PPS = 0x15;  //RC1->MSSP1:SDO1;
    SSP1CLKPPS = 0x12;  //RC2->MSSP1:SCK1;
    RC2PPS = 0x14;  //RC2->MSSP1:SCK1;
    SSP2CLKPPS = 0x1B;  //RD3->MSSP2:SCL2;
    RD3PPS = 0x16;  //RD3->MSSP2:SCL2;
    SSP2DATPPS = 0x1A;  //RD2->MSSP2:SDA2;
    RD2PPS = 0x17;  //RD2->MSSP2:SDA2;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x80;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    BP_Fin_Course_SetInterruptHandler(BP_Fin_Course_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin BP_Fin_Course}
    if(IOCAFbits.IOCAF7 == 1)
    {
        BP_Fin_Course_ISR();  
    }
}
   
/**
   BP_Fin_Course Interrupt Service Routine
*/
void BP_Fin_Course_ISR(void) {

    // Add custom IOCAF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(BP_Fin_Course_InterruptHandler)
    {
        BP_Fin_Course_InterruptHandler();
    }
    IOCAFbits.IOCAF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF7 at application runtime
*/
void BP_Fin_Course_SetInterruptHandler(void (* InterruptHandler)(void)){
    BP_Fin_Course_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF7
*/
void BP_Fin_Course_DefaultInterruptHandler(void){
    // add your BP_Fin_Course interrupt custom code
    // or set custom function using BP_Fin_Course_SetInterruptHandler()
}
/**
 End of File
*/