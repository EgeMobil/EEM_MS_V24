/*
 * AnalogSignalQualifier_MS_ruFETSenseBHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

FETSenseBHandleType FETSenseB = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruFETSenseBHandle)(dtRawFETSenseB value)
{
	FETSenseB.qualifier = SIGNAL_QUALIFIED;
	FETSenseB.value = value;

	return ASQ_EOK;
}
