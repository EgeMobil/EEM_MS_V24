/*
 * PWMConfiguration_MS_public.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_PUBLIC_H_
#define PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_PUBLIC_H_

#include "PWMConfiguration_MS_definition.h"
#include "BrakeAndDirectionManager_MS_definition.h"

extern FUNC(dtPwmReturn, PWMConfiguration_MS_ruInitialistaion)(dtPwmConfiguration* pwmStatus);
extern FUNC(void, PWMConfiguration_MS_ruRefresh				 )(dtPwmConfiguration* pwmStatus, dtBdrConfiguration* bdrStatus);


#endif /* PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_PUBLIC_H_ */
