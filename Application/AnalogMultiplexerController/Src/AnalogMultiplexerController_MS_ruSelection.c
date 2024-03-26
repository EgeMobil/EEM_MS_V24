/*
 * AnalogMultiplexerController_MS_ruSelection.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#include "AnalogMultiplexerController_MS_private.h"

FUNC(MUX_ReturnType, AnalogMultiplexerController_MS_ruSelection)(MUX_SelectionType mux)
{
	MUX_ReturnType status = MUX_RETURN_UNKNOWN;

	switch(mux)
	{
	    case MUX_SELECT_A0 : /* 0 - 0 - 0 */
	    {
	    	MUX_S2_RESET(); MUX_S1_RESET(); MUX_S0_RESET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A1 : /* 0 - 0 - 1 */
	    {
	    	MUX_S2_RESET(); MUX_S1_RESET(); MUX_S0_SET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A2 : /* 0 - 1 - 0 */
	    {
	    	MUX_S2_RESET(); MUX_S1_SET(); 	MUX_S0_RESET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A3 : /* 0 - 1 - 1 */
	    {
	    	MUX_S2_RESET(); MUX_S1_SET(); 	MUX_S0_SET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A4 : /* 1 - 0 - 0 */
	    {
	    	MUX_S2_SET(); 	MUX_S1_RESET(); MUX_S0_RESET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A5 : /* 1 - 0 - 1 */
	    {
	    	MUX_S2_SET(); 	MUX_S1_RESET(); MUX_S0_SET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A6 : /* 1 - 1 - 0 */
	    {
	    	MUX_S2_SET(); 	MUX_S1_SET(); 	MUX_S0_RESET();
	    	status = MUX_EOK;
	    	break;
	    }
	    case MUX_SELECT_A7 : /* 1 - 1 - 1 */
	    {
	    	MUX_S2_SET(); 	MUX_S1_SET(); 	MUX_S0_SET();
	    	status = MUX_EOK;
	    	break;
	    }
	    /* Error Case */
	    default:
	    {
	    	status = MUX_ERR;
	    	break;
	    }

	}

	return status;
}
