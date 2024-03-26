/*
 * AnalogConfiguration_MS_ruRefresh.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "ECUStateManager_global.h"

#include "AnalogConfiguration_MS_private.h"


FUNC(ADC_ReturnType, AnalogConfiguration_MS_ruRefresh)(ADC_StatusType* adc)
{
	ADC_ReturnType status = ADC_RETURN_UNKNOWN;
	MUX_ReturnType mux_status = MUX_RETURN_UNKNOWN;
	ASQ_ReturnType asq_status = ASQ_RETURN_UNKNOWN;

	/* Set Current port read state  */
	adc->port = ADC_PORT_1;

	/***************** Read ADC1 Channel-1 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_CH1;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.channel1 = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

		/* J15 -> 2,3( ADC1_IN1 ,  ISEN_W ) */
		asq_status = AnalogSignalQualifier_MS_ruCurrentWHandle( adc->adc1.channel1 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC1 Channel-4 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_CH4;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Analog Mux Selection for A0 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A0);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* J16 ->  2,3( MUX_A0, ISEN_A ) */
			asq_status = AnalogSignalQualifier_MS_ruCurrentAHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}

		}

		/* Analog Mux Selection for A1 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A1);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* J17 ->  2,3( MUX_A1, ISEN_B  ) */
			asq_status = AnalogSignalQualifier_MS_ruCurrentBHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}
		}

		/* Analog Mux Selection for A2 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A2);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* J18 ->  2,3 ( MUX_A2, ISEN_C )  */
			asq_status = AnalogSignalQualifier_MS_ruCurrentCHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}

		}

		/* Analog Mux Selection for A3 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A3);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* ISEN_DC_IN */
			asq_status = AnalogSignalQualifier_MS_ruCurrentDCHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}

		}

		/* Analog Mux Selection for A4 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A4);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* MOTOR_TEMP_SENSE */
			asq_status = AnalogSignalQualifier_MS_ruMotorTempSenseHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}

		}

		/* Analog Mux Selection for A5 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A5);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* FET_SENSE_A */
			asq_status = AnalogSignalQualifier_MS_ruFETSenseAHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}
		}

		/* Analog Mux Selection for A6 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A6);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* FET_SENSE_B */
			asq_status = AnalogSignalQualifier_MS_ruFETSenseBHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}
		}

		/* Analog Mux Selection for A7 */
		mux_status = AnalogMultiplexerController_MS_ruSelection(MUX_SELECT_A7);
		if( MUX_EOK != mux_status )
		{
			/* If mux can not select - Report error */
		}
		else
		{
			/* Channel selected read analog port and attach related variable */
			HAL_ADC_Start(&hadc1);
			adc->adc1.channel4 = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);

			/* FET_SENSE_B */
			asq_status = AnalogSignalQualifier_MS_ruFETSenseBHandle( adc->adc1.channel4 );
			if( ASQ_EOK != asq_status )
			{
				/* Report error if signal is not qualified */
			}

		}



	}
	/********************************************************************************/

	/***************** Read ADC1 Channel-11 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_CH11;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.channel11 = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

		/* ADC1_IN11 , VBUS */
		asq_status = AnalogSignalQualifier_MS_ruVsenseDCHandle ( adc->adc1.channel11 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC1 Channel-12 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_CH12;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.channel12 = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

		/* ADC1_IN12 , V_C */
		asq_status = AnalogSignalQualifier_MS_ruVsenseCHandle ( adc->adc1.channel12 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC1 Channel-15 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_CH15;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.channel15 = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

		/* J13 -> 2(ADC1_I15) , J17 -> 1( ISEN_V ) : atlama olacak! */
		asq_status = AnalogSignalQualifier_MS_ruCurrentVHandle( adc->adc1.channel15 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC1 Internal Temperature *******************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_INT_TEMP;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.internalTemp = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

	}
	/********************************************************************************/

	/***************** Read ADC1 Internal V battery *********************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_INT_VBAT;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.internalVbat = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

	}
	/********************************************************************************/

	/***************** Read ADC1 Internal V reference *******************************/

	/* Set current channel state */
	adc->currentChannel = ADC1_INT_VREF;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc1);
		adc->adc1.internalVref = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);

	}
	/********************************************************************************/

	/* Set Current port read state  */
	adc->port = ADC_PORT_2;

	/***************** Read ADC2 Channel-2 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC2_CH2;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel  );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc2);
		adc->adc2.channel2 = HAL_ADC_GetValue(&hadc2);
		HAL_ADC_Stop(&hadc2);

		/* J14 -> 2,3( ADC2_IN2 ,  ISEN_U  ) */
		asq_status = AnalogSignalQualifier_MS_ruCurrentUHandle( adc->adc2.channel2 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC2 Channel-2 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC2_CH3;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc2);
		adc->adc2.channel3 = HAL_ADC_GetValue(&hadc2);
		HAL_ADC_Stop(&hadc2);

		/* V_SENSE_A */
		asq_status = AnalogSignalQualifier_MS_ruVsenseAHandle( adc->adc2.channel3 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC2 Channel-4 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC2_CH4;

	status = AnalogConfiguration_MS_channelSelect( adc->port , adc->currentChannel );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc2);
		adc->adc2.channel4 = HAL_ADC_GetValue(&hadc2);
		HAL_ADC_Stop(&hadc2);

		/* V_SENSE_B */
		asq_status = AnalogSignalQualifier_MS_ruVsenseBHandle( adc->adc2.channel4 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/

	/***************** Read ADC2 Channel-4 *****************************************/

	/* Set current channel state */
	adc->currentChannel = ADC2_CH12;

	status = AnalogConfiguration_MS_channelSelect( adc->port , ADC2_CH12 );
	if( ADC_EOK != status )
	{
		/* If channel can not select - Report error */
	}
	else
	{
		/* Channel selected read analog port and attach related variable */
		HAL_ADC_Start(&hadc2);
		adc->adc2.channel12 = HAL_ADC_GetValue(&hadc2);
		HAL_ADC_Stop(&hadc2);

		/* Throttle */
		asq_status = AnalogSignalQualifier_MS_ruThrottleSignalHandle( adc->adc2.channel12 );
		if( ASQ_EOK != asq_status )
		{
			/* Report error if signal is not qualified */
		}

	}
	/********************************************************************************/



	return status;
}
