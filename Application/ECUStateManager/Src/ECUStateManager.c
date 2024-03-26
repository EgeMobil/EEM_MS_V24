/*
 * ECUStateManager.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#include "ECUStateManager_global.h"

#include "ECUStateManager_private.h"

FUNC(void, ECUStateManager)(void)
{
	for(;;)
	{
		/* Infinite loop */
		ECU_StateMachine();
	}

}


void ECU_StateMachine(void)
{
	if( ECUSTATE_UNKNOWN == ECU_STATE )
	{
		if( STARTUP_PRE_INIT == systemStartUp )
		{
			/* test conditions */
			ECU_SystemTestCTOR(&pwm, &bdr);

			/* Pre-Init Conditions will be here */
			ECU_STATE = ECUSTATE_INIT;
			systemStartUp = STARTUP_INIT;
		}
		else
		{
			/* State başlangıç dışında unknown olursa state hatası var demektir. */
			/* Error Handling here */
		}
	}
	else
	{
		switch(ECU_STATE)
		{
			case ECUSTATE_INIT:
				/* Init Runnables are handle here */

				dtGateDriverReturn gateDriverStatus = GateDriverController_MS_ruInitialistaion(&gateDriver);
				if( GATEDRIVER_EOK != gateDriverStatus )
				{
					/* Error Handling here */
				}

				dtBdrReturn bdrStatus = BrakeAndDirectionManager_MS_ruInitialistaion(&bdr);
				if( BDR_EOK != bdrStatus )
				{
					/* Error Handling here */
				}

				dtPwmReturn pwmStatus = PWMConfiguration_MS_ruInitialistaion(&pwm);
				if( PWM_EOK != pwmStatus )
				{
					/* Error Handling here */
				}

				dtHALLReturn hallStatus = HALLSensorConfiguration_MS_ruHALLInitialisation();
				if( HALL_EOK != hallStatus )
				{
					/* Error Handling here */
				}

				/* */
				ECU_STATE = ECUSTATE_ROUTINE;
				systemStartUp = STARTUP_POST_INIT;
			break;

			case ECUSTATE_ROUTINE:
				/* Routine Runnables are handle here */

				switch( REFRESH_STATE )
				{
					case REFRESHSTATE_ANALOGREAD :
					{


						/* Go default state periodical when periodical routine finished */
						REFRESH_STATE = REFRESHSTATE_DEFAULT;
						break;
					}


					case REFRESHSTATE_COMMUNICATION:
					{

						/* Go default state periodical when periodical routine finished */
						REFRESH_STATE = REFRESHSTATE_DEFAULT;
						break;
					}

					case REFRESHSTATE_GATEDRIVER_FAULTREAD:
					{

						/* Go default state periodical when periodical routine finished */
						REFRESH_STATE = REFRESHSTATE_DEFAULT;
						break;
					}

					/* Routine Always Check State */
					default:
					{

						break;
					}

				}

			break;

			case ECUSTATE_PROCESS:
				/* Process Runnables are handle here */

			break;

			case ECUSTATE_SUSPEND:
				/* Suspend Runnables are handle here */
			break;

			default:
				/* Defensive Coding */
			break;
		}
	}
}


void ECU_SystemTestCTOR(dtPwmConfiguration* _pwm, dtBdrConfiguration* _bdr)
{
	dtPwmConfiguration pwm = {
			{
					PWM_STATUS_UNKNOWN 			,	/* pwm status */
					PWMCH_STATUS_UNKNOWN 		,  	/* pwm channel status */
					11119						,	/* auto reload register value */
					0							,	/* prescaler register value */
					5560						,   /* duty cycle auto reload value */
					INTERNAL_DEADTIME_DISABLE 	, 	/* deadtime status */
					0u			,					/* deadtime autoreload value */
			} ,
			15000u ,				/* frequency */
			50u ,					/* dutyCycle */
			0u 						/* dead time */
	};

	dtBdrConfiguration bdr = {
			DIRECTION_FORWARD ,
			BRAKE_DISABLE
	};

	*_pwm = pwm;
	*_bdr = bdr;

}
