/*
 * AnalogSignalQualifier_MS_ruVsenseDCHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

CurrentDCHandleType currentDC = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruCurrentDCHandle)(dtRawCurrentDC value)
{
	currentDC.qualifier = SIGNAL_QUALIFIED;
	currentDC.value = value;

	return ASQ_EOK;
}
