/*
 * BrakeAndDirectionManager_MS_definition.h
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_DEFINITION_H_
#define BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

#define	SET_FORWARD_DIRECTION()  (HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0x1))
#define	SET_BACKWARD_DIRECTION() (HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0x0))

#define	BRAKE_ENABLE()			 (HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13 , 0x0))
#define BRAKE_DISABLE()			 (HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13 , 0x1))

typedef enum
{
	BDR_ERR = 0,
	BDR_EOK ,
	BDR_UNKNOWN
}dtBdrReturn;

typedef enum
{
	DIRECTION_BACKWARD = 0 ,
	DIRECTION_FORWARD ,
	DIRECTION_UNKNOWN ,
}dtBdrDirection;

typedef enum
{
	BRAKE_DISABLE = 0 ,
	BRAKE_ENABLE  ,
	BRAKE_UNKNOWN ,
}dtBdrBrake;

typedef struct
{
	dtBdrDirection    direction;
	dtBdrBrake	  brake;
}dtBdrConfiguration;

#endif /* BRAKEANDDIRECTIONMANAGER_INC_BRAKEANDDIRECTIONMANAGER_MS_DEFINITION_H_ */
