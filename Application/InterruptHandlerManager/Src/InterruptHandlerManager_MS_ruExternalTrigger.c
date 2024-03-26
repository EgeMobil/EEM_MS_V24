/*
 * InterruptHandlerManager_MS_ruExternalTrigger.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "InterruptHandlerManager_MS_private.h"

FUNC(void, InterruptHandlerManager_MS_ruExternalTrigger)(dtIrqStatus* irqStatus)
{

	static dtHALLStatus HALL_A_Status = {HALL_UNKNOWN , HALL_STATUS_UNKNOWN , 0 , 0 };
	static dtHALLStatus HALL_B_Status = {HALL_UNKNOWN , HALL_STATUS_UNKNOWN , 0 , 0 };
	static dtHALLStatus HALL_C_Status = {HALL_UNKNOWN , HALL_STATUS_UNKNOWN , 0 , 0 };

	static dtExternalIrqError extIrqErrHandle = {ERROR_PASSIVE};

	if( PortName_GPIOA == irqStatus->portName)
	{
		if( PinName_5 == irqStatus->pinName )
		{
			HALL_C_Status.name = HALL_C;

			if( TriggerType_RisingEdge == irqStatus->triggerType )
			{
				HALL_C_Status.risingEdgeFlag 	= 1;
				HALL_C_Status.fallingEdgeFlag	= 0;
				_HALL_C_risingEdgeCount++;

			}
			else if( TriggerType_FallingEdge == irqStatus->triggerType )
			{
				HALL_C_Status.risingEdgeFlag 	= 0;
				HALL_C_Status.fallingEdgeFlag	= 1;
				_HALL_C_fallingEdgeCount++;
			}
			else
			{
				/* Defensive Coding */
				extIrqErrHandle.bits.portApin5TrigError = ERROR_ACTIVE;

			}

			/* Run HALL Sensor Configuration */
			HALLSensorConfiguration_MS_ruHALLManager(&HALL_C_Status);
		}
		else
		{
			/* Defensive Coding */
			extIrqErrHandle.bits.portApinError = ERROR_ACTIVE;
		}

	}
	else if( PortName_GPIOB == irqStatus->portName)
	{
		if( PinName_6 == irqStatus->pinName )
		{
			HALL_A_Status.name = HALL_A;

			if( TriggerType_RisingEdge == irqStatus->triggerType )
			{
				HALL_A_Status.risingEdgeFlag 	= 1;
				HALL_A_Status.fallingEdgeFlag	= 0;
				_HALL_A_risingEdgeCount++;
			}
			else if( TriggerType_FallingEdge == irqStatus->triggerType )
			{
				HALL_A_Status.risingEdgeFlag 	= 0;
				HALL_A_Status.fallingEdgeFlag	= 1;
				_HALL_A_fallingEdgeCount++;
			}
			else
			{
				/* Defensive Coding */
				extIrqErrHandle.bits.portBpin6TrigError = ERROR_ACTIVE;
			}

			/* Run HALL Sensor Configuration */
			HALLSensorConfiguration_MS_ruHALLManager(&HALL_A_Status);

		}
		else if( PinName_7 == irqStatus->pinName )
		{
			HALL_B_Status.name = HALL_B;

			if( TriggerType_RisingEdge == irqStatus->triggerType )
			{
				HALL_B_Status.risingEdgeFlag 	= 1;
				HALL_B_Status.fallingEdgeFlag	= 0;
				_HALL_B_risingEdgeCount++;
			}
			else if( TriggerType_FallingEdge == irqStatus->triggerType )
			{
				HALL_B_Status.risingEdgeFlag 	= 0;
				HALL_B_Status.fallingEdgeFlag	= 1;
				_HALL_B_fallingEdgeCount++;
			}
			else
			{
				/* Defensive Coding */
				extIrqErrHandle.bits.portBpin7TrigError = ERROR_ACTIVE;
			}

			/* Run HALL Sensor Configuration */
			HALLSensorConfiguration_MS_ruHALLManager(&HALL_B_Status);

		}
		else
		{
			/* Defensive Coding */
			extIrqErrHandle.bits.portBpinError = ERROR_ACTIVE;
		}
	}
	else
	{
		/* Defensive Coding */
		extIrqErrHandle.bits.portError = ERROR_ACTIVE;
	}

	/* If any error has report error */
	if( extIrqErrHandle.error )
	{
		MotorDriveDcmProxy_MS_ruSetExternalIrqError(&extIrqErrHandle);
	}

}
