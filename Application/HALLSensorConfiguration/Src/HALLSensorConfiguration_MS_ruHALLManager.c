/*
 * HALLSensorConfiguration_MS_ruHALLManager.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "HALLSensorConfiguration_MS_private.h"

dtHALLSensorState HALL_STATE = {
		HALL_A_UNKNOWN ,
		HALL_B_UNKNOWN ,
		HALL_C_UNKNOWN
};

dtHALLRisingEdgeCount  _HALL_A_risingEdgeCount  = 0;
dtHALLFallingEdgeCount _HALL_A_fallingEdgeCount = 0;
dtHALLRisingEdgeCount  _HALL_B_risingEdgeCount  = 0;
dtHALLFallingEdgeCount _HALL_B_fallingEdgeCount = 0;
dtHALLRisingEdgeCount  _HALL_C_risingEdgeCount  = 0;
dtHALLFallingEdgeCount _HALL_C_fallingEdgeCount = 0;

FUNC(void, HALLSensorConfiguration_MS_ruHALLManager)(dtHALLStatus* HALL_status)
{

	dtHALLManagerError	HALLManagerErrorHandle = {ERROR_PASSIVE};

	if( ( 1 == HALL_status->risingEdgeFlag ) && ( 0 == HALL_status->fallingEdgeFlag ) )
	{
		switch(HALL_status->name)
		{
			case HALL_A:
			{
				HALL_STATE.hall_A = HALL_A_HIGH;
				HALL_A_SET();
				break;
			}
			case HALL_B:
			{
				HALL_STATE.hall_B = HALL_B_HIGH;
				HALL_B_SET();
				break;
			}

			case HALL_C:
			{
				HALL_STATE.hall_C = HALL_C_HIGH;
				HALL_C_SET();
				break;
			}

			default:
			/* Defensive Coding */
				HALLManagerErrorHandle.bits.HALLSetDefaultError = ERROR_ACTIVE;
			break;
		}
	}
	else if( 0 == HALL_status->risingEdgeFlag && 1 == HALL_status->fallingEdgeFlag )
	{
		switch(HALL_status->name)
		{
			case HALL_A:
			{
				HALL_STATE.hall_A = HALL_A_LOW;
				HALL_A_RESET();
				break;
			}
			case HALL_B:
			{
				HALL_STATE.hall_B = HALL_B_LOW;
				HALL_B_RESET();
				break;
			}

			case HALL_C:
			{
				HALL_STATE.hall_C = HALL_C_LOW;
				HALL_C_RESET();
				break;
			}
				default:
				/* Defensive Coding */
					HALLManagerErrorHandle.bits.HALLResetDefaultError = ERROR_ACTIVE;
				break;
		}
	}
	else
	{
		/* Defensive Coding */
	}

	/* If any error has report error */
	if( HALLManagerErrorHandle.error )
	{
		MotorDriveDcmProxy_MS_ruSetHALLManagerError(&HALLManagerErrorHandle);
	}

}
