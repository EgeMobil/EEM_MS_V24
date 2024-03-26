/*
 * GateDriverController_MS_ruInitialisation.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */


/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "GateDriverController_MS_private.h"

FUNC(dtGateDriverReturn, GateDriverController_MS_ruInitialistaion)(dtGateDriverController* gateDriverStatus)
{
	dtGateDriverReturn status = GATEDRIVER_RETURN_UNKNOWN;

	/* Gate Driver Initialisation Parameters */
	gateDriverStatus->enableStatus   = GATEDRIVER_STATUS_ENABLE;
	gateDriverStatus->pwmMode	     = GATEDRIVER_PWMMODE_1X;
	gateDriverStatus->currentSinkNHs = GATEDRIVER_N_SINK_300MA;
    gateDriverStatus->currentSinkPHs = GATEDRIVER_P_SINK_600MA;
	gateDriverStatus->currenkSinkNLs = GATEDRIVER_N_SINK_300MA;
	gateDriverStatus->currentSinkPLs = GATEDRIVER_P_SINK_600MA;
	gateDriverStatus->tDriveTime     = GATEDRIVER_TDRIVE_4000NS;
	gateDriverStatus->deadtime       = GATEDRIVER_DEADTIME_100NS;
	gateDriverStatus->deGlitchTime   = GATEDRIVER_DEGLITCHTIME_2US;
	gateDriverStatus->vdsLevel       = GATEDRIVER_VDSLEVEL_2V;

	DRV8353_Init();

	return status;

}
