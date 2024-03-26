/*
 * BrakeAndDirectionManager_MS_ruInitialisation.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#include "BrakeAndDirectionManager_MS_private.h"
#include "ECUStateManager_global.h"

dtBdrConfiguration bdr = {
		DIRECTION_UNKNOWN ,
		BRAKE_UNKNOWN
};


FUNC(dtBdrReturn, BrakeAndDirectionManager_MS_ruInitialistaion)(dtBdrConfiguration* bdrStatus)
{
	dtBdrReturn status = BDR_UNKNOWN;

	/* Direction Settings */
	if( DIRECTION_FORWARD == bdrStatus->direction )
	{
		SET_FORWARD_DIRECTION();
		status = BDR_EOK;
	}
	else if( DIRECTION_BACKWARD == bdrStatus->direction )
	{
		SET_BACKWARD_DIRECTION();
		status = BDR_EOK;
	}
	else
	{
		status = BDR_ERR;
		/* Error Reporting for wrong direction command */
	}

	/* Brake Settings */
	if( BRAKE_DISABLE == bdrStatus->brake )
	{
		BRAKE_DISABLE();
		status = BDR_EOK;
	}
	else if( BRAKE_ENABLE == bdrStatus->brake )
	{
		BRAKE_ENABLE();
		status = BDR_EOK;
	}
	else
	{
		status = BDR_ERR;
		/* Error Reporting for wrong brake command */
	}

	return status;

}
