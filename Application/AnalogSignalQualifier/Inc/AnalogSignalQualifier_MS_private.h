/*
 * AnalogSignalQualifier_MS_private.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PRIVATE_H_
#define ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PRIVATE_H_

#include "AnalogSignalQualifier_MS_definition.h"

#include "AnalogConfiguration_MS_public.h"

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentAHandle)(dtRawCurrentA value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentBHandle)(dtRawCurrentB value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentCHandle)(dtRawCurrentC value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentDCHandle)(dtRawCurrentDC value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentUHandle)(dtRawCurrentU value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentVHandle)(dtRawCurrentV value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentWHandle)(dtRawCurrentW value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseAHandle)(dtRawFETSenseA value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseBHandle)(dtRawFETSenseB value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseCHandle)(dtRawFETSenseC value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruMotorTempSenseHandle)(dtRawMotorTempSense value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruThrottleSignalHandle)(dtRawThrottleSignal value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseAHandle)(dtRawVsenseA value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseBHandle)(dtRawVsenseB value);
FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseCHandle)(dtRawVsenseC value);

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseDCHandle)(dtRawsenseDC value);

#endif /* ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_PRIVATE_H_ */
