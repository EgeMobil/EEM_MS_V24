/*
 * PWMConfiguration_ruInitialization.c
 *
 *  Created on: Mar 19, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "PWMConfiguration_MS_private.h"


FUNC(dtPwmReturn, PWMConfiguration_MS_ruInitialistaion)(dtPwmConfiguration* pwmStatus)
{
	dtPwmReturn status = PWM_RETURN_UNKNOWN;
	static dtPwmInitError pwmInitErrHandle = {0};

	status = PWMConfiguration_SetFrequency( pwmStatus , PWM_FREQ_15KHZ);
	if(PWM_EOK != status )
	{
		/* timer error reporting frequency set*/
		pwmInitErrHandle.bits.initFreqError = ERROR_ACTIVE;
		status = PWM_ERR;
		return status;
	}

	status = PWMConfiguration_SetDutyCycle( pwmStatus , 50u );
	if(PWM_EOK != status )
	{
		/* timer error reporting frequency set*/
		status = PWM_ERR;
		pwmInitErrHandle.bits.initDutyError = ERROR_ACTIVE;
		return status;
	}

	status = PWMConfiguration_StartTimer( pwmStatus );
	if(PWM_EOK != status )
	{
		/* timer error reporting initialisation and start */
		status = PWM_ERR;
		pwmInitErrHandle.bits.initFreqError = ERROR_ACTIVE;
		return status;
	}

	/* If any error has report error */
	if( pwmInitErrHandle.error )
	{
		MotorDriveDcmProxy_MS_ruSetPwmInitError(&pwmInitErrHandle);
	}

	return status;
}

