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
#include "state.h" //si include l'header che definisce gli stati
#include "RGBLedDriver.h" /*si include l'header per le funzioni usate e si include 
                          anche "project.h"*/
#include "InterruptRoutines.h" //si include l'header per la ISR custom

int main(void)
{
    CyGlobalIntEnable; //Enable global interrupts
    isr_1_StartEx(Debouncer_ISR); //inizializzazione della ISR custom
    
    i=0; //variabile definita in "state.h"
    RGBLed_Start(); //inizializzazione pwm
    RGBLed_WriteColor(A_State[i]); //inizializzazione pwm allo stato 1
    
    for(;;)
    {  
    }
}