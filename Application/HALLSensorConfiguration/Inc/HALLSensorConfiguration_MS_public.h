/*
 * HALLSensorConfiguration_MS_public.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PUBLIC_H_
#define HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PUBLIC_H_

#include "HALLSensorConfiguration_MS_definition.h"

extern FUNC(void, HALLSensorConfiguration_MS_ruHALLManager)(dtHALLStatus* HALL_status);
extern FUNC(dtHALLReturn, HALLSensorConfiguration_MS_ruHALLInitialisation)(void);

extern dtHALLRisingEdgeCount 	_HALL_A_risingEdgeCount  ;
extern dtHALLFallingEdgeCount	_HALL_A_fallingEdgeCount ;
extern dtHALLRisingEdgeCount 	_HALL_B_risingEdgeCount  ;
extern dtHALLFallingEdgeCount	_HALL_B_fallingEdgeCount ;
extern dtHALLRisingEdgeCount 	_HALL_C_risingEdgeCount  ;
extern dtHALLFallingEdgeCount	_HALL_C_fallingEdgeCount ;

#endif /* HALLSENSORCONFIGURATION_INC_HALLSENSORCONFIGURATION_MS_PUBLIC_H_ */
