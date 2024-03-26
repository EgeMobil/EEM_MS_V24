/*
 * PWMConfiguration.c
 *
 *  Created on: Mar 19, 2024
 *      Author: Atakan.Ertekin
 */

#include <PWMConfiguration_MS_private.h>

dtPwmReturn PWMConfiguration_StartTimer(dtPwmConfiguration* pwm)
{
	HAL_StatusTypeDef  status = HAL_OK;
	dtPwmReturn		pwmStatus = PWM_RETURN_UNKNOWN;
	pwm->regLevel.pwmStatus   = PWM_STATUS_UNKNOWN;
	pwm->regLevel.pwmChStatus = PWMCH_STATUS_UNKNOWN;

	status = HAL_TIM_Base_Start(&htim1);
	if(status != HAL_OK)
	{
		pwm->regLevel.pwmStatus = PWM_DISABLE;
		pwmStatus = PWM_ERR;
	}
	else
	{
		pwm->regLevel.pwmStatus = PWM_ENABLE;
		pwmStatus = PWM_EOK;
	}

	status = HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
	if(status != HAL_OK)
	{
		pwm->regLevel.pwmChStatus = PWMCH_DISABLE;
		pwmStatus = PWM_ERR;
	}
	else
	{
		pwm->regLevel.pwmChStatus = PWM_ENABLE;
		pwmStatus = PWM_EOK;
	}

	return pwmStatus;
}


dtPwmReturn PWMConfiguration_SetFrequency(dtPwmConfiguration* pwm , dtPwmDefinedFreq freq)
{
	dtPwmReturn	pwmStatus = PWM_RETURN_UNKNOWN;

	switch(freq)
	{
		/* Set Pwm frequency 5kHz */
		case PWM_FREQ_5KHZ:
		{

		}
		break;
		/* Set Pwm frequency 10kHz */
		case PWM_FREQ_10KHZ:
		{

		}
		break;
		/* Set Pwm frequency 10kHz */
		case PWM_FREQ_15KHZ:
		{
			pwm->frequency = 15000;
			PWM_TIM->ARR = pwm->regLevel.arrVal = 11119;
			PWM_TIM->PSC = pwm->regLevel.pscVal = 0;
			pwmStatus = PWM_EOK;
		}
		break;
		/* Set Pwm frequency 20kHz */
		case PWM_FREQ_20KHZ:
		{

		}
		break;
		/* Set Pwm frequency 25kHz */
		case PWM_FREQ_25KHZ:
		{

		}
		break;
		/* Error case close pwm */
		default:
		{
			pwmStatus = PWM_ERR;
		}
		break;
	}


	return pwmStatus;
}


dtPwmReturn PWMConfiguration_SetDutyCycle(dtPwmConfiguration* pwm, dtDutyCycle duty)
{
	dtPwmReturn	pwmStatus = PWM_RETURN_UNKNOWN;

	if( duty < 0 && duty > 100)
	{
		/* Duty Cycle hata durumu */
		duty = 0;
		pwmStatus = PWM_ERR;
	}
	else
	{
		/* duty doğru aralıkta */
		pwm->dutyCycle = duty;
	}

	pwm->regLevel.dtyArrVal = (uint32_t)(( pwm->regLevel.arrVal * pwm->dutyCycle ) / 100 );

	if( pwm->regLevel.dtyArrVal >= 0 && pwm->regLevel.dtyArrVal < pwm->regLevel.arrVal )
	{
		/* hesaplanan duty cycle dogru aralıkta ise */
		PWM_TIM->CCR3 = pwm->regLevel.dtyArrVal;
		pwmStatus = PWM_EOK;
	}
	else
	{
		PWM_TIM->CCR3 = pwm->regLevel.dtyArrVal = 0;
		pwmStatus = PWM_ERR;
	}

	return pwmStatus;
}

