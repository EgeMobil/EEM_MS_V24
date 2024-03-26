/*
 * AnalogSignalQualifier_MS_ruFETSenseAHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

FETSenseAHandleType FETSenseA = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseAHandle)(dtRawFETSenseA value)
{
	FETSenseA.qualifier = SIGNAL_QUALIFIED;
	FETSenseA.value = value;

	return ASQ_EOK;
}
