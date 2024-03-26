/*
 * AnalogConfiguration_MS_definition.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_DEFINITION_H_
#define ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

/* */
extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;

typedef enum
{
	ADC_ERR = 0	,
	ADC_EOK		,
	ADC_RETURN_UNKNOWN
}ADC_ReturnType;

typedef enum
{
	ADC_PORT_UNKNOWN = 0 ,
	ADC_PORT_1	,
	ADC_PORT_2  ,
}ADC_PortType;

typedef struct{
  		 uint16_t channel1;
  		 uint16_t channel4;
  		 uint16_t channel11;
  		 uint16_t channel12;
  		 uint16_t channel15;
  		 uint16_t internalTemp;
  		 uint16_t internalVbat;
  		 uint16_t internalVref;
}ADC1_rawDataType;

typedef enum
{
	ADC_CH_UNKNOWN = 0,
	ADC1_CH1 ,
	ADC1_CH4 ,		/* Analog mux , current u-v-w */
	ADC1_CH11 ,
	ADC1_CH12 ,
	ADC1_CH15 ,
	ADC1_INT_TEMP ,
	ADC1_INT_VBAT ,
	ADC1_INT_VREF ,
	ADC2_CH2 ,
	ADC2_CH3 ,
	ADC2_CH4 ,
	ADC2_CH12 ,
}ADC_channelType;

typedef struct{
  		 uint16_t channel2;
  		 uint16_t channel3;
  		 uint16_t channel4;
  		 uint16_t channel12;
}ADC2_rawDataType;


typedef struct
{
	ADC_PortType	 port;
	ADC_channelType currentChannel;
	ADC1_rawDataType adc1;
	ADC2_rawDataType adc2;
}ADC_StatusType;



#endif /* ANALOGCONFIGURATION_INC_ANALOGCONFIGURATION_MS_DEFINITION_H_ */
