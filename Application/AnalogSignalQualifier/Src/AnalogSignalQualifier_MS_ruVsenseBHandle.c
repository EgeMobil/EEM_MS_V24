/*
 * AnalogSignalQualifier_MS_ruVsenseBHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

VsenseBHandleType VsenseB = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseBHandle)(dtRawVsenseB value)
{
	VsenseB.qualifier = SIGNAL_QUALIFIED;
	VsenseB.value = value;

	return ASQ_EOK;
}



