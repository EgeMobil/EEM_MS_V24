/*
 * BrakeAndDirectionManager_MS_public.h
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PUBLIC_H_
#define BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PUBLIC_H_

#include "BrakeAndDirectionManager_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"

extern FUNC(dtBdrReturn, BrakeAndDirectionManager_MS_ruInitialistaion)(dtBdrConfiguration* pwmStatus);
extern FUNC(void, BrakeAndDirectionManager_MS_ruRefresh)(dtBdrConfiguration* pwmStatus);

#endif /* BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PUBLIC_H_ */
