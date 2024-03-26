/*
 * AnalogSignalQualifier_MS_ruCurrentCHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentCHandleType currentC = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentCHandle)(dtRawCurrentC value)
{
	currentC.qualifier = SIGNAL_QUALIFIED;
	currentC.value = value;

	return ASQ_EOK;
}
