/*
 * AnalogConfiguration_MS_public.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PUBLIC_H_
#define ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PUBLIC_H_

#include "AnalogConfiguration_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"

extern FUNC(ADC_ReturnType, AnalogConfiguration_MS_ruRefresh)(ADC_StatusType* adc);
extern FUNC(ADC_ReturnType, AnalogConfiguration_MS_ruHALLInitialisation)(void);

#endif /* ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PUBLIC_H_ */
