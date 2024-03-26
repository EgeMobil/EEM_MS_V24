/*
 * MotorDriveDcmProxy_MS_ruGetPwmInitError.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Atakan.Ertekin
 */
/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "MotorDriveDcmProxy_MS_private.h"

FUNC(void, MotorDriveDcmProxy_MS_ruSetPwmInitError)(dtPwmInitError* pwmInit)
{
	motorDriverError.pwmInit = *pwmInit;
}
