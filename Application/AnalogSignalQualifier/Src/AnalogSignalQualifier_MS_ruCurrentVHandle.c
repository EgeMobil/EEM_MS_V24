/*
 * AnalogSignalQualifier_MS_ruCurrentVHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentWHandleType currentV = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentVHandle)(dtRawCurrentV value)
{
	currentV.qualifier = SIGNAL_QUALIFIED;
	currentV.value = value;

	return ASQ_EOK;
}
