/*
 * InterruptHandlerManager_MS.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PRIVATE_H_
#define INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PRIVATE_H_

#include "InterruptHandlerManager_MS_definition.h"
/* Public Access */
#include "ECUStateManager_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"
#include "MotorDriveDcmProxy_MS_public.h"

FUNC(void, InterruptHandlerManager_MS_ruExternalTrigger)(dtIrqStatus* irqStatus);
FUNC(void, InterruptHandlerManager_MS_ruTimerTrigger)	(dtTimeStatus* timeStatus);



#endif /* INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PRIVATE_H_ */
