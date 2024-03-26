/*
 * InterruptHandlerManager_MS.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */


#ifndef INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_DEFINITION_H_
#define INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

/* */
#define	BASE_TIM			 TIM2
/* */
extern TIM_HandleTypeDef htim2;

#define IS_IRQ_TRIGGERED_GPIOB6 			(EXTI->PR1 & PWR_PUCRB_PB6)
#define IS_IRQ_TRIGGERED_GPIOB7 			(EXTI->PR1 & PWR_PUCRB_PB7)
#define IS_IRQ_TRIGGERED_GPIOA5 			(EXTI->PR1 & PWR_PUCRA_PA5)

#define CLEAR_IRQ_GPIOB6()					(EXTI->PR1 |= EXTI_PR1_PIF6)
#define CLEAR_IRQ_GPIOB7()					(EXTI->PR1 |= EXTI_PR1_PIF7)
#define CLEAR_IRQ_GPIOA5()					(EXTI->PR1 |= EXTI_PR1_PIF5)

#define GPIOB6_IS_RISINGEDGE_TRIGGERED 		(GPIOB->IDR & GPIO_IDR_ID6)
#define GPIOB7_IS_RISINGEDGE_TRIGGERED 		(GPIOB->IDR & GPIO_IDR_ID7)
#define GPIOA5_IS_RISINGEDGE_TRIGGERED 		(GPIOA->IDR & GPIO_IDR_ID5)

typedef enum
{
	PortName_GPIOA = 0,
	PortName_GPIOB ,
	PortName_GPIOC ,
	PortName_GPIOD ,
	PortName_GPIOE ,
	PortName_NULL = 0xFF ,
}dtPortName;

typedef enum
{
	PinName_0 = 0,
	PinName_1 ,
	PinName_2 ,
	PinName_3 ,
	PinName_4 ,
	PinName_5 ,
	PinName_6 ,
	PinName_7 ,
	PinName_8 ,
	PinName_9 ,
	PinName_10 ,
	PinName_11 ,
	PinName_12 ,
	PinName_13 ,
	PinName_14 ,
	PinName_15 ,
	PinName_NULL = 0xFF ,
}dtPinName;

typedef enum
{
	TriggerType_Unknown = 0,
	TriggerType_RisingEdge  ,
	TriggerType_FallingEdge ,
	TriggerType_Timer ,
}dtTriggerType;


typedef struct
{
	dtPortName 	   portName;
	dtPinName  	   pinName;
	dtTriggerType  triggerType;
}dtIrqStatus;

typedef struct
{
	uint32_t	miliSecond;
	uint8_t		second;
	uint8_t		minutes;
	uint8_t		hour;
	uint8_t		day;
}dtTimeBase;

typedef enum
{
	RefreshFlag_Unknown = 0,
	RefreshFlag_miliSecond ,
	RefreshFlag_second ,
	RefreshFlag_minutes ,
	RefreshFlag_hour ,
	RefreshFlag_day ,
}dtRefreshEventFlagType;

typedef struct
{
	dtTimeBase		 time;
	dtRefreshEventFlagType refreshFlag;
}dtTimeStatus;

#endif /* INTERRUPTHANDLERMANAGER_INC_INTERRUPTHANDLERMANAGER_MS_DEFINITION_H_ */
