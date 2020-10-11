/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "RGBLedDriver.h"

/*Definizione del COMPARE TYPE (CMP TYPE) per il pwm relativo al canale del rosso e del pwm
 relativo al canale del verde, per  tutti e sette gli stati definiti nell'assignment*/
#define CMP_TYPE_1_RED   PWM_Red__B_PWM__GREATER_THAN
#define CMP_TYPE_1_GREEN PWM_Green__B_PWM__GREATER_THAN
#define CMP_TYPE_2_RED   PWM_Red__B_PWM__GREATER_THAN
#define CMP_TYPE_2_GREEN PWM_Green__B_PWM__LESS_THAN
#define CMP_TYPE_3_RED   PWM_Red__B_PWM__GREATER_THAN
#define CMP_TYPE_3_GREEN PWM_Green__B_PWM__GREATER_THAN // arrivato qui
#define CMP_TYPE_4_RED   PWM_Red__B_PWM__LESS_THAN
#define CMP_TYPE_4_GREEN PWM_Green__B_PWM__GREATER_THAN
#define CMP_TYPE_5_RED   PWM_Red__B_PWM__GREATER_THAN
#define CMP_TYPE_5_GREEN PWM_Green__B_PWM__LESS_THAN
#define CMP_TYPE_6_RED   PWM_Red__B_PWM__LESS_THAN
#define CMP_TYPE_6_GREEN PWM_Green__B_PWM__LESS_THAN
#define CMP_TYPE_7_RED   PWM_Red__B_PWM__GREATER_THAN
#define CMP_TYPE_7_GREEN PWM_Green__B_PWM__LESS_THAN

int i;// variabile per l'incremento degli stai

//Definzione di un array di strutture, definite in RGBLedDriver.h
static State A_State[] ={
                // V_r  V_g  P_r   P_g     CMP_Type_r     CMP_Type_g
                 { 255, 255, 255,  255, CMP_TYPE_1_RED, CMP_TYPE_1_GREEN},
                 { 255, 127, 255,  255, CMP_TYPE_2_RED, CMP_TYPE_2_GREEN},
                 { 127, 255, 255,  255, CMP_TYPE_3_RED, CMP_TYPE_3_GREEN},
                 { 63,  63,  127,  127, CMP_TYPE_4_RED, CMP_TYPE_4_GREEN},
                 { 31,  31,  63,   63,  CMP_TYPE_5_RED, CMP_TYPE_5_GREEN},
                 { 63,  127, 255,  255, CMP_TYPE_6_RED, CMP_TYPE_6_GREEN},
                 { 127, 63,  255,  127, CMP_TYPE_7_RED, CMP_TYPE_7_GREEN}
                        };
/*Legenda:
- V_r: valore di time_on del canale rosso;
- V_g: valore di time_on del canale verde;
- P_r: periodo onda quadra del canale rosso;
- P_g: periodo onda quadra del canale verde;
- CMP_Type_r: valore di compare type del rosso;
- CMP_Type_g: valore di compare type del verde.
*/
/* [] END OF FILE */
