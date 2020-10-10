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

//Inizializzazione delle funzioni seguenti
static void RGBLed_WriteRed(uint8_t red);
static void RGBLed_WriteGreen(uint8_t green);
static void RGBLed_WritePred(uint8_t Pred);
static void RGBLed_WritePGreen(uint8_t Pgreen);
static void RGBLed_WriteTRed(uint8 Tred);
static void RGBLed_WriteTGreen(uint8 Tgreen);


void RGBLed_Start(){
    PWM_Red_Start();   //inizializza il pwm red
    PWM_Green_Start(); //inizializza il pwm green
}

void RGBLed_Stop(){
    PWM_Red_Stop();    //stoppa il pwm red
    PWM_Green_Stop(); //stoppa il pwm green
    
}

//Funzione che genera le onde quadre del pwm verde e del pwm rosso a seconda dello stato inserito
void RGBLed_WriteColor(State s){
    RGBLed_WritePred(s.Pred); 
    RGBLed_WritePGreen(s.Pgreen);
    RGBLed_WriteTRed(s.Tred);
    RGBLed_WriteTGreen(s.Tgreen);
    RGBLed_WriteRed(s.red);
    RGBLed_WriteGreen(s.green);
}
//Funzioni che definiscono il periodo dei pwm del verde e del rosso
void RGBLed_WritePred(uint8_t Pred){
    PWM_Red_WritePeriod(Pred);
}
void RGBLed_WritePGreen(uint8_t Pgreen){
    PWM_Green_WritePeriod(Pgreen);
}
//Funzioni che definiscono il CMP_Type del pwm del rosso e del pwm del verde
void RGBLed_WriteTRed(uint8 Tred){
    PWM_Red_SetCompareMode(Tred);
}
void RGBLed_WriteTGreen(uint8 Tgreen){
    PWM_Green_SetCompareMode(Tgreen);
}
//Funzioni che definiscono il time_on del canale rosso e del verde
void RGBLed_WriteRed(uint8_t red){
    PWM_Red_WriteCompare(red);
}
void RGBLed_WriteGreen(uint8_t green){
    PWM_Green_WriteCompare(green);
}

/* [] END OF FILE */
