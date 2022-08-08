#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED
/*
 * frequency_kh: is an input argument that describes the frequency in KHz.
 * dutyCycle: is an input argument that describes the duty cycle needed for the PWM that varies from 0 to 100 ( 0 means 0%, and 100 means 100%).
 */
 #include "DIO.h"
 void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);


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


#endif // PWM_H_INCLUDED
