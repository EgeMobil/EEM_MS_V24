/*
 * AnalogMultiplexerController_MS_definition.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_DEFINITION_H_
#define ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

#define MUX_S0_Pin 			GPIO_PIN_14
#define MUX_S0_GPIO_Port 	GPIOC
#define MUX_S1_Pin 			GPIO_PIN_15
#define MUX_S1_GPIO_Port 	GPIOC
#define MUX_S2_Pin 			GPIO_PIN_10
#define MUX_S2_GPIO_Port 	GPIOG

#define	MUX_S2_RESET()       ( HAL_GPIO_WritePin(MUX_S2_GPIO_Port, MUX_S2_Pin, GPIO_PIN_RESET))
#define MUX_S1_RESET()       ( HAL_GPIO_WritePin(MUX_S1_GPIO_Port, MUX_S1_Pin, GPIO_PIN_RESET))
#define MUX_S0_RESET()       ( HAL_GPIO_WritePin(MUX_S0_GPIO_Port, MUX_S0_Pin, GPIO_PIN_RESET))

#define MUX_S2_SET()         ( HAL_GPIO_WritePin(MUX_S2_GPIO_Port, MUX_S2_Pin, GPIO_PIN_SET))
#define MUX_S1_SET()         ( HAL_GPIO_WritePin(MUX_S1_GPIO_Port, MUX_S1_Pin, GPIO_PIN_SET))
#define MUX_S0_SET()         ( HAL_GPIO_WritePin(MUX_S0_GPIO_Port, MUX_S0_Pin, GPIO_PIN_SET))


typedef enum
{
	MUX_ERR = 0	,
	MUX_EOK		,
	MUX_RETURN_UNKNOWN
}MUX_ReturnType;


typedef enum
{
	MUX_SELECT_UNKNOWN = 0,
	MUX_SELECT_A0,
	MUX_SELECT_A1,
	MUX_SELECT_A2,
	MUX_SELECT_A3,
	MUX_SELECT_A4,
	MUX_SELECT_A5,
	MUX_SELECT_A6,
	MUX_SELECT_A7
}MUX_SelectionType;

#endif /* ANALOGMULTIPLEXERCONTROLLER_INC_ANALOGMULTIPLEXERCONTROLLER_MS_DEFINITION_H_ */
