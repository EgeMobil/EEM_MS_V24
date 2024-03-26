/*
 * BrakeAndDirectionManager_MS_private.h
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PRIVATE_H_
#define BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PRIVATE_H_

#include "BrakeAndDirectionManager_MS_definition.h"

FUNC(dtBdrReturn, BrakeAndDirectionManager_MS_ruInitialistaion)(dtBdrConfiguration* pwmStatus);
FUNC(void, BrakeAndDirectionManager_MS_ruRefresh)(dtBdrConfiguration* pwmStatus);

#endif /* BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_PRIVATE_H_ */
