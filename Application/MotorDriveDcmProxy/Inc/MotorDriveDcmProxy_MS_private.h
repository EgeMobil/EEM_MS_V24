/*
 * MotorDriveDcmProxy_MS_private.h
 *
 *  Created on: Mar 26, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PRIVATE_H_
#define MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PRIVATE_H_

#include "MotorDriveDcmProxy_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"

FUNC(void, MotorDriveDcmProxy_MS_ruErrorReport)	(dtMotorDriveErrors* error);

FUNC(void, MotorDriveDcmProxy_MS_ruSetPwmInitError	  )(dtPwmInitError* pwmInit);
FUNC(void, MotorDriveDcmProxy_MS_ruSetExternalIrqError)(dtExternalIrqError* extIrq);
FUNC(void, MotorDriveDcmProxy_MS_ruSetHALLManagerError)(dtHALLManagerError* hall);

#endif /* MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PRIVATE_H_ */
