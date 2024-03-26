/*
 * AnalogSignalQualifier_MS_ruCurrentAHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentAHandleType currentA = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentAHandle)(dtRawCurrentA value)
{
	currentA.qualifier = SIGNAL_QUALIFIED;
	currentA.value = value;

	return ASQ_EOK;
}
