/*
 * AnalogSignalQualifier_MS_ruFETSenseCHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

FETSenseBHandleType FETSenseC = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseCHandle)(dtRawFETSenseC value)
{
	FETSenseC.qualifier = SIGNAL_QUALIFIED;
	FETSenseC.value = value;

	return ASQ_EOK;
}

