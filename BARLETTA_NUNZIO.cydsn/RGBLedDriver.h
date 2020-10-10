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
#ifndef __RGB_LED_DRIVER_H
    #define __RGB_LED_DRIVER_H
    
    #include "cytypes.h" 
    #include "project.h"
    
    //STRUCT che definisce uno stato
    typedef struct {
        uint8_t red; //varibile per il time_on del canale rosso
        uint8_t green; //varibile per il time_on del canale verde
        uint8_t Pred; //varibile per il periodo del canale rosso
        uint8_t Pgreen; //varibile per il periodo del canale verde
        uint8 Tred; //varibile per il CMP_Type del canale rosso
        uint8 Tgreen; //varibile per il CMP_Type del canale verde
    } State;
    
    //Dichiarazioni di funzioni espresse in RGBLedDriver.c 
    void RGBLed_Start();
    void RGBLed_Stop();
    void RGBLed_WriteColor(State s);
    
#endif
/* [] END OF FILE */
