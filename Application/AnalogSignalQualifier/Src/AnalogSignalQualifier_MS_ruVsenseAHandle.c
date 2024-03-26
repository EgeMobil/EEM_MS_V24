/*
 * AnalogSignalQualifier_MS_ruVsenseAHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

VsenseAHandleType VsenseA = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseAHandle)(dtRawVsenseA value)
{
	VsenseA.qualifier = SIGNAL_QUALIFIED;
	VsenseA.value = value;

	return ASQ_EOK;
}
