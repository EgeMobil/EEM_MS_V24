/*
 * InterruptHandlerManager_MS.c
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

/* Global Variables can have use here this runnable */
#include "ECUStateManager_global.h"

#include "InterruptHandlerManager_MS_private.h"


void EXTI9_5_IRQHandler(void)
{
	if( ECUSTATE_INIT == ECU_STATE ) return;

	dtIrqStatus irqStatus = {PortName_NULL , PinName_NULL, TriggerType_Unknown};

	if ( IS_IRQ_TRIGGERED_GPIOB6 )
	{
		irqStatus.pinName 	  = PinName_6;
		irqStatus.portName 	  = PortName_GPIOB;

		if ( GPIOB6_IS_RISINGEDGE_TRIGGERED ) // Yükselen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_RisingEdge;
		}
		else // Düşen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_FallingEdge;
		}

		/* Fire ExternalTrigger Manager */
		InterruptHandlerManager_MS_ruExternalTrigger(&irqStatus);

		/* Clear IRQ */
		CLEAR_IRQ_GPIOB6();
	}
	else
	{
		/* Defensive Coding */
	}

	if ( IS_IRQ_TRIGGERED_GPIOB7 )
	{
		irqStatus.pinName 	  = PinName_7;
		irqStatus.portName 	  = PortName_GPIOB;

		if ( GPIOB7_IS_RISINGEDGE_TRIGGERED ) // Yükselen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_RisingEdge;
		}
		else // Düşen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_FallingEdge;
		}

		/* Fire ExternalTrigger Manager */
		InterruptHandlerManager_MS_ruExternalTrigger(&irqStatus);

		/* Clear IRQ */
		 CLEAR_IRQ_GPIOB7();
	}
	else
	{
		/* Defensive Coding */
	}

	if ( IS_IRQ_TRIGGERED_GPIOA5 )
	{
		irqStatus.pinName 	  = PinName_5;
		irqStatus.portName 	  = PortName_GPIOA;

		if ( GPIOA5_IS_RISINGEDGE_TRIGGERED ) // Yükselen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_RisingEdge;
		}
		else // Düşen kenar tetiklendi
		{
			irqStatus.triggerType = TriggerType_FallingEdge;
		}

		/* Fire ExternalTrigger Manager */
		InterruptHandlerManager_MS_ruExternalTrigger(&irqStatus);

		/* Clear IRQ */
		CLEAR_IRQ_GPIOA5();
    }
	else
	{
		/* Defensive Coding */
	}



  /* USER CODE END EXTI9_5_IRQn 1 */
}


void TIM2_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&htim2);

	if( ECUSTATE_INIT == ECU_STATE ) return;

	static dtTimeStatus timeStatus = {
			{ 0u , 0u , 0u , 0u , 0u } ,
			RefreshFlag_Unknown
	};

	timeStatus.time.miliSecond++;

	if( 0u == timeStatus.time.miliSecond % 100 )
	{
		timeStatus.time.miliSecond = 0;
		timeStatus.time.second++;

		if( 0u == timeStatus.time.second % 60 )
		{
			timeStatus.time.second = 0;
			timeStatus.time.minutes++;

			if( 0u == timeStatus.time.minutes % 60 )
			{
				timeStatus.time.minutes = 0;
				timeStatus.time.hour++;

				if( 0u == timeStatus.time.hour % 24 )
				{
					timeStatus.time.hour = 0;
					timeStatus.time.day++;
				}
				else
				{
					timeStatus.refreshFlag = RefreshFlag_hour;
					/* trigger hour based events */
				}

			}
			else
			{
				timeStatus.refreshFlag = RefreshFlag_minutes;
				/* trigger minutes based events */
			}

		}
		else
		{
			timeStatus.refreshFlag = RefreshFlag_second;
			/* trigger second based events */
		}
	}
	else
	{
		/* trigger ms based events */
		timeStatus.refreshFlag = RefreshFlag_miliSecond;
	}


	InterruptHandlerManager_MS_ruTimerTrigger(&timeStatus);


}




