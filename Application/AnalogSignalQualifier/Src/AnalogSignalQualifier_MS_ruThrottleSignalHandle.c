/*
 * AnalogSignalQualifier_MS_ruThrottleSignalHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

ThrottleSignalHandleType ThrottleSignal = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruThrottleSignalHandle)(dtRawThrottleSignal value)
{
	ThrottleSignal.qualifier = SIGNAL_QUALIFIED;
	ThrottleSignal.value = value;

	return ASQ_EOK;
}
