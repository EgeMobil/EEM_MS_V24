/*
 * MotorDriveDcmProxy_MS_definition.h
 *
 *  Created on: Mar 26, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_DEFINITION_H_
#define MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

typedef enum
{
	MOTORDRIVE_DCM_ERR = 0 	,
	MOTORDRIVE_DCM_EOK 		,
	MOTORDRIVE_DCM_UNKNOWN 	,
}dtMotorDriveDcmReturn;

typedef uint8_t dtMotorDriveError ;

enum
{
	ERROR_PASSIVE = 0,
	ERROR_ACTIVE = !ERROR_PASSIVE
};

typedef union
{
	uint8_t error;
	struct {
		dtMotorDriveError portError 			: 1 ;
		dtMotorDriveError portApinError 		: 1 ;
		dtMotorDriveError portBpinError			: 1 ;
		dtMotorDriveError portApin5TrigError	: 1 ;
		dtMotorDriveError portBpin6TrigError	: 1 ;
		dtMotorDriveError portBpin7TrigError	: 1 ;
		uint8_t : 2 ;
	}bits;
}dtExternalIrqError;

typedef union
{
	uint8_t error;
	struct {
		dtMotorDriveError HALLSetDefaultError	: 1 ;
		dtMotorDriveError HALLResetDefaultError	: 1 ;
		uint8_t : 6 ;
	}bits;
}dtHALLManagerError;

typedef union
{
	uint8_t error;
	struct {
		dtMotorDriveError initFreqError 	: 1 ;
		dtMotorDriveError initDutyError 	: 1 ;
		dtMotorDriveError initTimerError	: 1 ;
		uint8_t : 5 ;
	}bits;
}dtPwmInitError;

typedef struct
{
	dtExternalIrqError		extIrq;
	dtHALLManagerError		hall;
	dtPwmInitError			pwmInit;
}dtMotorDriveErrors;



#endif /* MOTORDRIVEDCMPROXY_INC_MOTORDRIVEDCMPROXY_MS_DEFINITION_H_ */
