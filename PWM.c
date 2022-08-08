#include "PWM.h"

void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle)
{
    DIO_init(0,A,OUT);

}

/*
 * This function is to start PWM generation.
 */
 void SWPWM_start(void);

/*
 * newDutyCycle: is an input argument that describes the new duty cycle needed for the PWM.
 */
 void SWPWM_changeDutyCycle(uint8_t newDutyCycle);

 /*
 * This function is to stop PWM generation.
 */
 void SWPWM_stop(stop);
