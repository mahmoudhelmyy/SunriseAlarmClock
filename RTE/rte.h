/*
 * rte.h
 *
 *  Created on: Aug 29, 2023
 *      Author: youss
 */

#ifndef RTE_H_
#define RTE_H_

#include "../Commons/std_types.h"
#include "../HAL/LCD/AVR_LCD.h"
#include "../HAL/Keypad/keypad.h"
#include "../HAL/LED/LED.h"
#include "../HAL/LDR/LDR_Interface.h"
#include "../HAL/Button/Button.h"
#include "../HAL/Buzzer/Buzzer.h"
#include "../MCAL/Timer0/Timer0.h"
#include "../MCAL/Timer1/Timer1.h"

/* Keypad Module RTE Services */
#define RTE_KEYPAD_init				 	KeyPad_Init
#define RTE_KEYPAD_getPressedKey 			GetPresseKey

/* Character LCD Module RTE Services */
#define RTE_LCD_init 					LCD_init
#define RTE_LCD_displayCharacter 			LCD_displayCharacter
#define RTE_LCD_displayString 				LCD_displayString
#define RTE_LCD_integerToString 			LCD_integerToString
#define RTE_LCD_clearScreen 				LCD_clearScreen
#define RTE_LCD_moveCursor			        LCD_moveCursor

/* LDR Module RTE Services */
#define RTE_LDR_vidLDRInit                              LDR_vidLDRInit
#define RTE_LDR_u16GetLDRReadingSync                    LDR_u16GetLDRReadingSync

/* LED Module RTE Services */
#define RTE_LED_Init                                    LED_Init
#define RTE_LED_Init_All                                LED_Init_All
#define RTE_LED_on                                      LED_on
#define RTE_LED_Off                                     LED_Off
#define RTE_LED_Toggle                                  LED_Toggle
#define RTE_LED_Check                                   LED_Check
#define RTE_LED_All_Off                                 LED_All_Off

/* Buzzer Module RTE Services */
#define RTE_Buzzer_Init                                 Buzzer_Init
#define RTE_Buzzer_TurnOnOff                            Buzzer_TurnOnOff

/* Button Module RTE Services */
#define RTE_Button_init                                 Button_init
#define RTE_Button_Read                                 Button_Read

/* Timer0 Module RTE Services */
#define RTE_TIMER0_vidInit                              TIMER0_vidInit
#define RTE_TIMER0_vidStart                             TIMER0_vidStart
#define RTE_TIMER0_vidStop                              TIMER0_vidStop
#define RTE_TIMER0_vidSetPreloadValue                   TIMER0_vidSetPreloadValue
#define RTE_TIMER0_vidSetCompareMatchValue              TIMER0_vidSetCompareMatchValue
#define RTE_TIMER0_u8ReadTimerValue                     TIMER0_u8ReadTimerValue
#define RTE_TIMER0_vidEnableOverflowInterrupt           TIMER0_vidEnableOverflowInterrupt
#define RTE_TIMER0_vidDisableOverflowInterrupt          TIMER0_vidDisableOverflowInterrupt
#define RTE_TIMER0_vidEnableCompareMatchInterrupt       TIMER0_vidEnableCompareMatchInterrupt
#define RTE_TIMER0_vidDisableCompareMatchInterrupt      TIMER0_vidDisableCompareMatchInterrupt
#define RTE_TIMER0_u8SetOverflowCallback                TIMER0_u8SetOverflowCallback
#define RTE_TIMER0_u8SetCompareMatchCallback            TIMER0_u8SetCompareMatchCallback
#define RTE_TIMER0_u8SetBusyWait_ms                     TIMER0_u8SetBusyWait_ms
#define RTE_TIMER0_u8StartPWM                           TIMER0_u8StartPWM
#define RTE_TIMER0_vidClearOvfFlag                      TIMER0_vidClearOvfFlag


/* Timer1 Module RTE Services */
#define RTE_TIMER1_vidInit                             TIMER1_vidInit
#define RTE_TIMER1_vidStart                            TIMER1_vidStart
#define RTE_TIMER1_vidStop                             TIMER1_vidStop
#define RTE_TIMER1_vidSetPreloadValue                  TIMER1_vidSetPreloadValue
#define RTE_TIMER1_vidSetCompareMatchAValue            TIMER1_vidSetCompareMatchAValue
#define RTE_TIMER1_vidSetCompareMatchBValue            TIMER1_vidSetCompareMatchBValue
#define RTE_TIMER1_vidSetInputCaptureValue             TIMER1_vidSetInputCaptureValue
#define RTE_TIMER1_uint16ReadTimerValue(void);         TIMER1_uint16ReadTimerValue(void);
#define RTE_TIMER1_uint16ReadInputCaptureValue         TIMER1_uint16ReadInputCaptureValue
#define RTE_TIMER1_vidEnableOverflowInterrupt          TIMER1_vidEnableOverflowInterrupt
#define RTE_TIMER1_vidDisableOverflowInterrupt         TIMER1_vidDisableOverflowInterrupt
#define RTE_TIMER1_vidEnableCompareMatchAInterrupt     TIMER1_vidEnableCompareMatchAInterrupt
#define RTE_TIMER1_vidDisableCompareMatchAInterrupt    TIMER1_vidDisableCompareMatchAInterrupt
#define RTE_TIMER1_vidEnableCompareMatchBInterrupt     TIMER1_vidEnableCompareMatchBInterrupt
#define RTE_TIMER1_vidDisableCompareMatchBInterrupt    TIMER1_vidDisableCompareMatchBInterrupt
#define RTE_TIMER1_vidEnableCaptureEventInterrupt      TIMER1_vidEnableCaptureEventInterrupt
#define RTE_TIMER1_vidDisableCaptureEventInterrupt     TIMER1_vidDisableCaptureEventInterrupt
#define RTE_TIMER1_uint8SetInputCaptureEventEdge       TIMER1_uint8SetInputCaptureEventEdge
#define RTE_TIMER1_uint8SetOverflowCallback            TIMER1_uint8SetOverflowCallback
#define RTE_TIMER1_uint8SetCompareMatchACallback       TIMER1_uint8SetCompareMatchACallback
#define RTE_TIMER1_uint8SetCompareMatchBCallback       TIMER1_uint8SetCompareMatchBCallback
#define RTE_TIMER1_uint8SetCaptureEventCallback        TIMER1_uint8SetCaptureEventCallback
#define RTE_TIMER1_uint8SetBusyWait_ms                 TIMER1_uint8SetBusyWait_ms
#define RTE_TIMER1_uint8StartPWMChannelA               TIMER1_uint8StartPWMChannelA
#define RTE_TIMER1_uint8StartPWMChannelB               TIMER1_uint8StartPWMChannelB



#endif /* RTE_H_ */
