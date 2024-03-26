/*
 * HALLSensorConfiguration_MS_definition.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_DEFINITION_H_
#define HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

#define STATE0_Pin 			GPIO_PIN_15
#define STATE0_GPIO_Port 	GPIOB

#define STATE1_Pin 			GPIO_PIN_9
#define STATE1_GPIO_Port 	GPIOA

#define STATE2_Pin 			GPIO_PIN_14
#define STATE2_GPIO_Port 	GPIOB


#define HALL_A_READ()	(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6))
#define	HALL_B_READ()	(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7))
#define HALL_C_READ()	(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_5))

#define HALL_A_SET()	(HAL_GPIO_WritePin(STATE0_GPIO_Port, STATE0_Pin, GPIO_PIN_SET))
#define HALL_A_RESET()	(HAL_GPIO_WritePin(STATE0_GPIO_Port, STATE0_Pin, GPIO_PIN_RESET))

#define HALL_B_SET()	(HAL_GPIO_WritePin(STATE1_GPIO_Port, STATE1_Pin, GPIO_PIN_SET))
#define HALL_B_RESET()	(HAL_GPIO_WritePin(STATE1_GPIO_Port, STATE1_Pin, GPIO_PIN_RESET))

#define HALL_C_SET()	(HAL_GPIO_WritePin(STATE2_GPIO_Port, STATE2_Pin, GPIO_PIN_SET))
#define HALL_C_RESET()	(HAL_GPIO_WritePin(STATE2_GPIO_Port, STATE2_Pin, GPIO_PIN_RESET))

typedef enum
{
	HALL_ERR = 0 ,
	HALL_EOK 	,
	HALL_RETURN_UNKNOWN ,
}dtHALLReturn;

typedef enum
{
	HALL_STATUS_LOW = 0,
	HALL_STATUS_HIGH ,
	HALL_STATUS_UNKNOWN ,
}dtHALLState;

typedef enum
{
	HALL_A = 0,
	HALL_B ,
	HALL_C ,
	HALL_UNKNOWN ,
}dtHALLSensorName;

typedef uint8_t dtHALLRisingEdgeFlag;
typedef uint8_t dtHALLFallingEdgeFlag;

typedef uint32_t dtHALLRisingEdgeCount;
typedef uint32_t dtHALLFallingEdgeCount;

typedef struct
{
	dtHALLSensorName 				name;
	dtHALLState 					status;
	volatile dtHALLRisingEdgeFlag 	risingEdgeFlag;
	volatile dtHALLRisingEdgeFlag	fallingEdgeFlag;
}dtHALLStatus;


typedef enum
{
	HALL_A_LOW = 0,
	HALL_A_HIGH ,
	HALL_A_UNKNOWN ,
}dtHALLASensorState;

typedef enum
{
	HALL_B_LOW = 0,
	HALL_B_HIGH ,
	HALL_B_UNKNOWN ,
}dtHALLBSensorState;

typedef enum
{
	HALL_C_LOW = 0,
	HALL_C_HIGH ,
	HALL_C_UNKNOWN ,
}dtHALLCSensorState;

typedef struct
{
	dtHALLASensorState hall_A;
	dtHALLBSensorState hall_B;
	dtHALLCSensorState hall_C;
}dtHALLSensorState;

#endif /* HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_DEFINITION_H_ */
