/*
 * HALLSensorConfiguration_MS_ruHALLInitialisation.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "HALLSensorConfiguration_MS_private.h"


FUNC(dtHALLReturn, HALLSensorConfiguration_MS_ruHALLInitialisation)(void)
{
	dtHALLReturn status = HALL_RETURN_UNKNOWN;

	if( ECUSTATE_INIT == ECU_STATE )
	{
		/* Check HALL Sensor A */
		if( GPIO_PIN_SET == HALL_A_READ() )
		{
			HALL_STATE.hall_A = HALL_A_HIGH;
			HALL_A_SET();
		}
		else
		{
			HALL_STATE.hall_A = HALL_A_LOW;
			HALL_A_RESET();
		}

		/* Check HALL Sensor B */
		if( GPIO_PIN_SET == HALL_B_READ() )
		{
			HALL_STATE.hall_B = HALL_B_HIGH;
			HALL_B_SET();
		}
		else
		{
			HALL_STATE.hall_B = HALL_B_LOW;
			HALL_B_RESET();
		}

		/* Check HALL Sensor C */
		if( GPIO_PIN_SET == HALL_C_READ() )
		{
			HALL_STATE.hall_C = HALL_C_HIGH;
			HALL_C_SET();
		}
		else
		{
			HALL_STATE.hall_C = HALL_C_LOW;
			HALL_C_RESET();
		}

		status = HALL_EOK;

	}
	else
	{
		/* This runnable only works is ECU INIT STATE */
		status = HALL_ERR;
	}

	return status;

}
