/*
 * ECUStateManager_private.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PRIVATE_H_
#define ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PRIVATE_H_

#include "ECUStateManager_definition.h"

#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"

dtEcuState 		ECU_STATE 	   = ECUSTATE_UNKNOWN;
dtStartUp  		systemStartUp  = STARTUP_PRE_INIT;
dtRefreshState	REFRESH_STATE  = REFRESHSTATE_UNKNOWN;

FUNC(void, ECUStateManager)(void);

void ECU_StateMachine(void);

void ECU_SystemTestCTOR(dtPwmConfiguration* _pwm, dtBdrConfiguration* _bdr);

#endif /* ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PRIVATE_H_ */
