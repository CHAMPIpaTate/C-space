/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define Motor_Control_TRIS                 TRISAbits.TRISA0
#define Motor_Control_LAT                  LATAbits.LATA0
#define Motor_Control_PORT                 PORTAbits.RA0
#define Motor_Control_WPU                  WPUAbits.WPUA0
#define Motor_Control_OD                   ODCONAbits.ODCA0
#define Motor_Control_ANS                  ANSELAbits.ANSA0
#define Motor_Control_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Motor_Control_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Motor_Control_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Motor_Control_GetValue()           PORTAbits.RA0
#define Motor_Control_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Motor_Control_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Motor_Control_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Motor_Control_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Motor_Control_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Motor_Control_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Motor_Control_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Motor_Control_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA2 aliases
#define Ok_TRIS                 TRISAbits.TRISA2
#define Ok_LAT                  LATAbits.LATA2
#define Ok_PORT                 PORTAbits.RA2
#define Ok_WPU                  WPUAbits.WPUA2
#define Ok_OD                   ODCONAbits.ODCA2
#define Ok_ANS                  ANSELAbits.ANSA2
#define Ok_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Ok_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Ok_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Ok_GetValue()           PORTAbits.RA2
#define Ok_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Ok_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Ok_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define Ok_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define Ok_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define Ok_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define Ok_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define Ok_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define Err_TRIS                 TRISAbits.TRISA3
#define Err_LAT                  LATAbits.LATA3
#define Err_PORT                 PORTAbits.RA3
#define Err_WPU                  WPUAbits.WPUA3
#define Err_OD                   ODCONAbits.ODCA3
#define Err_ANS                  ANSELAbits.ANSA3
#define Err_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Err_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Err_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Err_GetValue()           PORTAbits.RA3
#define Err_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Err_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Err_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define Err_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define Err_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define Err_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define Err_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define Err_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
// get/set IO_RA7 aliases
#define BP_Fin_Course_TRIS                 TRISAbits.TRISA7
#define BP_Fin_Course_LAT                  LATAbits.LATA7
#define BP_Fin_Course_PORT                 PORTAbits.RA7
#define BP_Fin_Course_WPU                  WPUAbits.WPUA7
#define BP_Fin_Course_OD                   ODCONAbits.ODCA7
#define BP_Fin_Course_ANS                  ANSELAbits.ANSA7
#define BP_Fin_Course_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define BP_Fin_Course_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define BP_Fin_Course_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define BP_Fin_Course_GetValue()           PORTAbits.RA7
#define BP_Fin_Course_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define BP_Fin_Course_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define BP_Fin_Course_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define BP_Fin_Course_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define BP_Fin_Course_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define BP_Fin_Course_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define BP_Fin_Course_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define BP_Fin_Course_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)
#define RA7_SetInterruptHandler  BP_Fin_Course_SetInterruptHandler
// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RC0 aliases
#define SD_CS_TRIS                 TRISCbits.TRISC0
#define SD_CS_LAT                  LATCbits.LATC0
#define SD_CS_PORT                 PORTCbits.RC0
#define SD_CS_WPU                  WPUCbits.WPUC0
#define SD_CS_OD                   ODCONCbits.ODCC0
#define SD_CS_ANS                  ANSELCbits.ANSC0
#define SD_CS_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SD_CS_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SD_CS_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SD_CS_GetValue()           PORTCbits.RC0
#define SD_CS_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SD_CS_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SD_CS_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SD_CS_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SD_CS_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SD_CS_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SD_CS_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SD_CS_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.WPUC2
#define IO_RC2_OD                   ODCONCbits.ODCC2
#define IO_RC2_ANS                  ANSELCbits.ANSC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RD0 aliases
#define IO_RD0_TRIS                 TRISDbits.TRISD0
#define IO_RD0_LAT                  LATDbits.LATD0
#define IO_RD0_PORT                 PORTDbits.RD0
#define IO_RD0_WPU                  WPUDbits.WPUD0
#define IO_RD0_OD                   ODCONDbits.ODCD0
#define IO_RD0_ANS                  ANSELDbits.ANSD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_RD0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_RD0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define IO_RD0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define IO_RD0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)
// get/set IO_RD1 aliases
#define IO_RD1_TRIS                 TRISDbits.TRISD1
#define IO_RD1_LAT                  LATDbits.LATD1
#define IO_RD1_PORT                 PORTDbits.RD1
#define IO_RD1_WPU                  WPUDbits.WPUD1
#define IO_RD1_OD                   ODCONDbits.ODCD1
#define IO_RD1_ANS                  ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define IO_RD1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define IO_RD1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define IO_RD1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define IO_RD1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)
// get/set IO_RD2 aliases
#define IO_RD2_TRIS                 TRISDbits.TRISD2
#define IO_RD2_LAT                  LATDbits.LATD2
#define IO_RD2_PORT                 PORTDbits.RD2
#define IO_RD2_WPU                  WPUDbits.WPUD2
#define IO_RD2_OD                   ODCONDbits.ODCD2
#define IO_RD2_ANS                  ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_RD2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_RD2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)
// get/set IO_RD3 aliases
#define IO_RD3_TRIS                 TRISDbits.TRISD3
#define IO_RD3_LAT                  LATDbits.LATD3
#define IO_RD3_PORT                 PORTDbits.RD3
#define IO_RD3_WPU                  WPUDbits.WPUD3
#define IO_RD3_OD                   ODCONDbits.ODCD3
#define IO_RD3_ANS                  ANSELDbits.ANSD3
#define IO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_RD3_GetValue()           PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_RD3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define IO_RD3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define IO_RD3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define IO_RD3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define IO_RD3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the BP_Fin_Course pin functionality
 * @param none
 * @return none
 */
void BP_Fin_Course_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for BP_Fin_Course pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for BP_Fin_Course at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void BP_Fin_Course_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for BP_Fin_Course pin.
 *        This is a dynamic interrupt handler to be used together with the BP_Fin_Course_SetInterruptHandler() method.
 *        This handler is called every time the BP_Fin_Course ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*BP_Fin_Course_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for BP_Fin_Course pin. 
 *        This is a predefined interrupt handler to be used together with the BP_Fin_Course_SetInterruptHandler() method.
 *        This handler is called every time the BP_Fin_Course ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void BP_Fin_Course_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/