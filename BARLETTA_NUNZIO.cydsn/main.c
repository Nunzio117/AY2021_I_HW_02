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
#include "state.h" //tale header definisce gli stati
#include "RGBLedDriver.h" //tale header include anche "project.h" e definisce le funzioni usate

int main(void)
{
    CyGlobalIntEnable;
    int i=0;
    
    RGBLed_Start(); //inizializzazione pwm
 
    for(;;)
    {    
         if(Button_Pin_Read()== 0){ //controllo stato del bottone
         while(Button_Pin_Read()== 0){}; /*Permette di cambiare lo stato solo ne momento in cui
                                           il bottone viene rilasciato*/
            i+=1;
            if(i==7){
                i=0;
             }
         RGBLed_WriteColor(A_State[i]); //generazione one quadre
        }
    }
}