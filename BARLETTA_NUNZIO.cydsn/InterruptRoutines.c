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

// Include header
#include "InterruptRoutines.h"
// Include required header files
#include "RGBLedDriver.h"
#include "state.h"

CY_ISR(Debouncer_ISR)
{
    i+=1; //incremento degli stati 
    if(i==7){
        i=0;
    }
    RGBLed_WriteColor(A_State[i]); //generazione one quadre
}

/* [] END OF FILE */
