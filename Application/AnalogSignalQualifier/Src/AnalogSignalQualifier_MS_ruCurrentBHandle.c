/*
 * AnalogSignalQualifier_MS_ruCurrentBHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentBHandleType currentB = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentBHandle)(dtRawCurrentB value)
{
	currentB.qualifier = SIGNAL_QUALIFIED;
	currentB.value = value;

	return ASQ_EOK;
}
