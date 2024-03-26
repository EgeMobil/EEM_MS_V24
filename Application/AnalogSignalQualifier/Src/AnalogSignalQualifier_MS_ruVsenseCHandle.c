/*
 * AnalogSignalQualifier_MS_ruVsenseCHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

VsenseCHandleType VsenseC = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseCHandle)(dtRawVsenseC value)
{
	VsenseC.qualifier = SIGNAL_QUALIFIED;
	VsenseC.value = value;

	return ASQ_EOK;
}


