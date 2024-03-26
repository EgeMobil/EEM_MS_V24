/*
 * AnalogSignalQualifier_MS_ruMotorTempSenseHandle.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogSignalQualifier_MS_private.h"

MotorTempSenseHandleType MotorTempSense = { SIGNAL_UNKNOWN , 0u };

FUNC(ASQ_ReturnType, AnalogSignalQualifier_MS_ruMotorTempSenseHandle)(dtRawMotorTempSense value)
{
	MotorTempSense.qualifier = SIGNAL_QUALIFIED;
	MotorTempSense.value = value;

	return ASQ_EOK;
}
