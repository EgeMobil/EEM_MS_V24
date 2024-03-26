/*
 * ECUStateManager_definition.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ECUSTATEMANAGER_INC_ECUSTATEMANAGER_DEFINITION_H_
#define ECUSTATEMANAGER_INC_ECUSTATEMANAGER_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

typedef enum
{
	ECUSTATE_UNKNOWN = 0,
	ECUSTATE_INIT	 ,
	ECUSTATE_ROUTINE ,
	ECUSTATE_PROCESS ,
	ECUSTATE_SUSPEND
}dtEcuState;

typedef enum
{
	STARTUP_UNKNOWN = 0,
	STARTUP_PRE_INIT  ,
	STARTUP_INIT	  ,
	STARTUP_POST_INIT ,
}dtStartUp;

typedef enum
{
	REFRESHSTATE_UNKNOWN 			 = 0,
	REFRESHSTATE_DEFAULT				,
	REFRESHSTATE_ANALOGREAD 			,
	REFRESHSTATE_COMMUNICATION  		,
	REFRESHSTATE_GATEDRIVER_FAULTREAD	,
	REFRESHSTATE_RFU03			        ,
	REFRESHSTATE_RFU04			        ,
	REFRESHSTATE_RFU05			        ,
	REFRESHSTATE_RFU06			        ,
}dtRefreshState;

#endif /* ECUSTATEMANAGER_INC_ECUSTATEMANAGER_DEFINITION_H_ */

