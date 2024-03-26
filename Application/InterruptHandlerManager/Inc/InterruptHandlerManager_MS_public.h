/*
 * InterruptHandlerManager_MS.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PUBLIC_H_
#define INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PUBLIC_H_

#include "InterruptHandlerManager_MS_definition.h"

extern FUNC(void, InterruptHandlerManager_MS_ruExternalTrigger)(dtIrqStatus* irqStatus);
extern FUNC(void, InterruptHandlerManager_MS_ruTimerTrigger)   (dtTimeStatus* timeStatus);

#endif /* INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_PUBLIC_H_ */
