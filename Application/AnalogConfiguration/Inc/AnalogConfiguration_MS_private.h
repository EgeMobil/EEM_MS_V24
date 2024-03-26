/*
 * AnalogConfiguration_MS_private.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PRIVATE_H_
#define ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PRIVATE_H_

#include "AnalogConfiguration_MS_definition.h"
#include "AnalogMultiplexerController_MS_definition.h"

#include "AnalogSignalQualifier_MS_public.h"

FUNC(ADC_ReturnType, AnalogConfiguration_MS_ruRefresh)(ADC_StatusType* adc);
FUNC(ADC_ReturnType, AnalogConfiguration_MS_ruInitialisation)(void);

ADC_ReturnType AnalogConfiguration_MS_channelSelect(ADC_PortType port , ADC_channelType channel );

#endif /* ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_PRIVATE_H_ */
