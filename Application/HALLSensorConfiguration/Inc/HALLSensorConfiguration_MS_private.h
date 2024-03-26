/*
 * HALLSensorConfiguration_MS_private.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PRIVATE_H_
#define HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PRIVATE_H_

#include "HALLSensorConfiguration_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "MotorDriveDcmProxy_MS_public.h"

FUNC(void, HALLSensorConfiguration_MS_ruHALLManager)(dtHALLStatus* HALL_status);
FUNC(dtHALLReturn, HALLSensorConfiguration_MS_ruHALLInitialisation)(void);



#endif /* HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PRIVATE_H_ */
