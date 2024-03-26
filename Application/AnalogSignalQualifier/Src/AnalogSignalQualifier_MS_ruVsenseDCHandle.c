/*
 * AnalogSignalQualifier_MS_ruVbusHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

VsenseDCHandleType VsenseDC = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruVsenseDCHandle)(dtRawsenseDC value)
{
	VsenseDC.qualifier = SIGNAL_QUALIFIED;
	VsenseDC.value = value;

	return ASQ_EOK;
}
