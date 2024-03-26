/*
 * MotorDriveDcmProxy_MS_public.h
 *
 *  Created on: Mar 26, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PUBLIC_H_
#define MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PUBLIC_H_

#include "MotorDriveDcmProxy_MS_definition.h"

extern FUNC(void, MotorDriveDcmProxy_MS_ruErrorReport)		(dtMotorDriveError* error);

extern FUNC(void, MotorDriveDcmProxy_MS_ruSetPwmInitError	  )(dtPwmInitError* pwmInit);
extern FUNC(void, MotorDriveDcmProxy_MS_ruSetExternalIrqError)(dtExternalIrqError* extIrq);
extern FUNC(void, MotorDriveDcmProxy_MS_ruSetHALLManagerError)(dtHALLManagerError* hall);

#endif /* MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_PUBLIC_H_ */
