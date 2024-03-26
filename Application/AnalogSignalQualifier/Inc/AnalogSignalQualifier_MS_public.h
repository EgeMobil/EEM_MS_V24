/*
 * AnalogSignalQualifier_MS_public.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PUBLIC_H_
#define ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PUBLIC_H_

#include "AnalogSignalQualifier_MS_definition.h"

#include "ECUStateManager_public.h"
#include "InterruptHandlerManager_MS_public.h"
#include "PWMConfiguration_MS_public.h"
#include "HALLSensorConfiguration_MS_public.h"
#include "GateDriverController_MS_public.h"
#include "BrakeAndDirectionManager_MS_public.h"
#include "AnalogMultiplexerController_MS_public.h"
#include "AnalogConfiguration_MS_public.h"

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentAHandle)(dtRawCurrentA value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentBHandle)(dtRawCurrentB value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentCHandle)(dtRawCurrentC value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentDCHandle)(dtRawCurrentDC value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentUHandle)(dtRawCurrentU value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentVHandle)(dtRawCurrentV value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentWHandle)(dtRawCurrentW value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseAHandle)(dtRawFETSenseA value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseBHandle)(dtRawFETSenseB value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseCHandle)(dtRawFETSenseC value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruMotorTempSenseHandle)(dtRawMotorTempSense value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruThrottleSignalHandle)(dtRawThrottleSignal value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseAHandle)(dtRawVsenseA value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseBHandle)(dtRawVsenseB value);
extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseCHandle)(dtRawVsenseC value);

extern FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseDCHandle)(dtRawsenseDC value);

#endif /* ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PUBLIC_H_ */
