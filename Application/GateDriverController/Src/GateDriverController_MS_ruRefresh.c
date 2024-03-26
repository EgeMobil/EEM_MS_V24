/*
 * GateDriverController_MS_ruRefresh.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#include "ECUStateManager_global.h"

#include "GateDriverController_MS_private.h"

dtGateDriverController gateDriver = {
		{
				{0},	/* fault reg 0 */
				{0},	/* fault reg 1 */
		} ,
		GATEDRIVER_STATUS_UNKNOWN ,   /* EnableStatusType 	*/
		GATEDRIVER_PWMMODE_UNKNOWN ,      /* PwmModesType	   	*/
		GATEDRIVER_N_SINK_UNKNOWN ,       /* CurrentNSinkType	*/
		GATEDRIVER_P_SINK_UNKNOWN ,       /* CurrentPSinkType	*/
		GATEDRIVER_N_SINK_UNKNOWN ,       /* CurrentNSinkType	*/
		GATEDRIVER_P_SINK_UNKNOWN ,       /* CurrentPSinkType	*/
		GATEDRIVER_TDRIVE_UNKNOWN ,       /* TdriveType			*/
		GATEDRIVER_DEADTIME_UNKNOWN ,     /* DeadTime			*/
		GATEDRIVER_DEGLITCHTIME_UNKNOWN , /* DeGlitchTime		*/
		GATEDRIVER_VDSLEVEL_UNKNOWN ,     /* VdsLevel			*/
};



FUNC(void, GateDriverController_MS_ruRefresh)(dtGateDriverController* gateDriverStatus)
{

}
