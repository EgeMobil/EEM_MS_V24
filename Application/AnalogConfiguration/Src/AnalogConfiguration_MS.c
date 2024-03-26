/*
 * AnalogConfiguration_MS.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogConfiguration_MS_private.h"


ADC_ReturnType AnalogConfiguration_MS_channelSelect(ADC_PortType port , ADC_channelType channel )
{
	ADC_ReturnType status = ADC_RETURN_UNKNOWN;

	ADC_ChannelConfTypeDef sConfig = {0};
	sConfig.Rank = ADC_REGULAR_RANK_1;
	sConfig.SamplingTime = ADC_SAMPLETIME_47CYCLES_5;
	sConfig.SingleDiff = ADC_SINGLE_ENDED;
	sConfig.OffsetNumber = ADC_OFFSET_NONE;

	if( ADC_PORT_1 == port )
	{
		switch(channel)
		{
			case ADC1_CH1:
			{
				sConfig.Channel = ADC_CHANNEL_1;
				break;
			}
			case ADC1_CH4:
			{
				sConfig.Channel = ADC_CHANNEL_4;
				break;
			}
			case ADC1_CH11:
			{
				sConfig.Channel = ADC_CHANNEL_11;
				break;
			}
			case ADC1_CH12:
			{
				sConfig.Channel = ADC_CHANNEL_12;
				break;
			}
			case ADC1_CH15:
			{
				sConfig.Channel = ADC_CHANNEL_15;
				break;
			}
			case ADC1_INT_TEMP:
			{
				sConfig.Channel = ADC_CHANNEL_TEMPSENSOR_ADC1;
				break;
			}
			case ADC1_INT_VBAT:
			{
				sConfig.Channel = ADC_CHANNEL_VBAT;
				break;
			}
			case ADC1_INT_VREF:
			{
				sConfig.Channel = ADC_CHANNEL_VREFINT;
				break;
			}

			default:
			{
				status = ADC_ERR;
				break;
			}
		}

		if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
		{
			status = ADC_ERR;
		}
		else
		{
			status = ADC_EOK;
		}

	}
	else if( ADC_PORT_2 == port )
	{
		switch(channel)
		{
			case ADC2_CH2:
			{
				sConfig.Channel = ADC_CHANNEL_2 ;
				break;
			}
			case ADC2_CH3:
			{
				sConfig.Channel = ADC_CHANNEL_3;
				break;
			}
			case ADC2_CH4:
			{
				sConfig.Channel = ADC_CHANNEL_4;
				break;
			}
			case ADC2_CH12:
			{
				sConfig.Channel = ADC_CHANNEL_12;
				break;
			}

			default:
			{
				status = ADC_ERR;
				break;
			}
		}

		if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
		{
			status = ADC_ERR;
		}
		else
		{
			status = ADC_EOK;
		}
	}
	else
	{
		status = ADC_ERR;
	}

	return status;

}
