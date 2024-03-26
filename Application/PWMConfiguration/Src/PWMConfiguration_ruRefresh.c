/*
 * PWMConfiguration_ruRefresh.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "PWMConfiguration_MS_private.h"



dtPwmConfiguration pwm = {
		{
				PWM_STATUS_UNKNOWN ,	/* pwm status */
				PWMCH_STATUS_UNKNOWN ,  /* pwm channel status */
				0u			,			/* auto reload register value */
				0u			,			/* prescaler register value */
				0u			,           /* duty cycle auto reload value */
				INTERNAL_DEADTIME_UNKNOWN , /* deadtime status */
				0u			,			/* deadtime autoreload value */
		} ,
		0u ,					/* frequency */
		0u ,					/* dutyCycle */
		0u 						/* dead time */
};


FUNC(void, PWMConfiguration_MS_ruRefresh)(dtPwmConfiguration* pwmStatus, dtBdrConfiguration* bdrStatus)
{

}
