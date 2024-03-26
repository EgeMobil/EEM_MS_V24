/*
 * AnalogSignalQualifier_MS_ruCurrentWHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentWHandleType currentW = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentWHandle)(dtRawCurrentW value)
{
	currentW.qualifier = SIGNAL_QUALIFIED;
	currentW.value = value;

	return ASQ_EOK;
}
