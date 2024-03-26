/*
 * InterruptHandlerManager_MS_ruTimerTrigger.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "InterruptHandlerManager_MS_private.h"

FUNC(void, InterruptHandlerManager_MS_ruTimerTrigger)(dtTimeStatus* timeStatus)
{

	switch( timeStatus->refreshFlag )
	{

		case RefreshFlag_miliSecond :
		{
			REFRESH_STATE = REFRESHSTATE_ANALOGREAD;
			break;
		}

		case RefreshFlag_second :
		{
			REFRESH_STATE = REFRESHSTATE_GATEDRIVER_FAULTREAD;
			break;
		}


		case RefreshFlag_minutes :
		{

			break;
		}

		case RefreshFlag_hour :
		{

			break;
		}

		/* Default or error timer based events */
		default:
		{

			break;
		}

	}





}
