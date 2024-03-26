/*
 * AnalogMultiplexerController_MS_public.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_PUBLIC_H_
#define ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_PUBLIC_H_

#include "AnalogMultiplexerController_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogSignalQualifier_MS_public.h"
#include "AnalogConfiguration_MS_public.h"

extern  FUNC(MUX_ReturnType, AnalogMultiplexerController_MS_ruSelection)(MUX_SelectionType mux);

#endif /* ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_PUBLIC_H_ */
