/*
 * PWMConfiguration_MS_definition.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_DEFINITION_H_
#define PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

/* */
#define	PWM_TIM			 TIM1
/* */
extern TIM_HandleTypeDef htim1;

typedef enum
{
	PWM_ERR = 0,
	PWM_EOK ,
	PWM_RETURN_UNKNOWN
}dtPwmReturn;

typedef enum
{
	PWM_DISABLE = 0,
	PWM_ENABLE ,
	PWM_STATUS_UNKNOWN
}dtPwmStatus;

typedef enum
{
	PWMCH_DISABLE = 0,
	PWMCH_ENABLE ,
	PWMCH_STATUS_UNKNOWN
}dtPwmChStatus;

typedef enum
{
	PWM_FREQ_NULL = 0,
	PWM_FREQ_5KHZ ,
	PWM_FREQ_10KHZ ,
	PWM_FREQ_15KHZ ,
	PWM_FREQ_20KHZ ,
	PWM_FREQ_25KHZ
}dtPwmDefinedFreq;


typedef enum
{
	INTERNAL_DEADTIME_DISABLE = 0,
	INTERNAL_DEADTIME_ENABLE ,
	INTERNAL_DEADTIME_UNKNOWN,
}dtPwmDeadtimeStatus;

typedef uint32_t dtPwmAutoReloadValue;
typedef uint32_t dtPwmPreScalerValue;
typedef uint32_t dtPwmDutyAutoReloadValue;
typedef uint32_t dtPwmDeadTimeAutoReloadValue;

typedef struct
{
	dtPwmStatus 				 pwmStatus;
	dtPwmChStatus			     pwmChStatus;
	dtPwmAutoReloadValue 		 arrVal;
	dtPwmPreScalerValue  		 pscVal;
	dtPwmDutyAutoReloadValue	 dtyArrVal;
	dtPwmDeadtimeStatus			 deadtimeStatus;
	dtPwmDeadTimeAutoReloadValue deadtimeArr;
}dtPwmRegister;

typedef uint32_t dtPwmFrequency;
typedef uint8_t  dtDutyCycle;
typedef uint8_t  dtDeadTimeNs;

typedef struct
{
	dtPwmRegister    regLevel;
	dtPwmFrequency 	 frequency;
	dtDutyCycle	 	 dutyCycle;
	dtDeadTimeNs	 deadtime;
}dtPwmConfiguration;


#endif /* PWMCONFIGURATION_MS_INC_PWMCONFIGURATION_MS_DEFINITION_H_ */
