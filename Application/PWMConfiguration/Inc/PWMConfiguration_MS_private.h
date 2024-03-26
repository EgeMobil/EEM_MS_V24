/*
 * PWMConfiguration_MS_private.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef PWMCONFIGURATION_INC_MS_PWMCONFIGURATION_MS_PRIVATE_H_
#define PWMCONFIGURATION_INC_MS_PWMCONFIGURATION_MS_PRIVATE_H_

#include "PWMConfiguration_MS_definition.h"
/* Public header */
#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"
#include "MotorDriveDcmProxy_MS_public.h"

FUNC(dtPwmReturn, PWMConfiguration_MS_ruInitialistaion) (dtPwmConfiguration* pwmStatus);
FUNC(void, 		  PWMConfiguration_MS_ruRefresh		  )	(dtPwmConfiguration* pwmStatus, dtBdrConfiguration* bdrStatus);

dtPwmReturn PWMConfiguration_StartTimer		(dtPwmConfiguration* pwm);
dtPwmReturn PWMConfiguration_SetFrequency	(dtPwmConfiguration* pwm , dtPwmDefinedFreq freq);
dtPwmReturn PWMConfiguration_SetDutyCycle	(dtPwmConfiguration* pwm , dtDutyCycle duty);


#endif /* PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_PRIVATE_H_ */
