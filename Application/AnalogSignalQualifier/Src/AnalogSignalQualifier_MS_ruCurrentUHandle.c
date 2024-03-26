/*
 * AnalogSignalQualifier_MS_ruCurrentUHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentUHandleType currentU = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentUHandle)(dtRawCurrentU value)
{
	currentU.qualifier = SIGNAL_QUALIFIED;
	currentU.value = value;

	return ASQ_EOK;
}
