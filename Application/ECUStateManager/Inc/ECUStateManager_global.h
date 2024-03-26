/*
 * ECUStateManager_global.h
 *
 *  Created on: Mar 20, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ECUSTATEMANAGER_INC_ECUSTATEMANAGER_GLOBAL_H_
#define ECUSTATEMANAGER_INC_ECUSTATEMANAGER_GLOBAL_H_

#include "PWMConfiguration_MS_definition.h"
#include "HALLSensorConfiguration_MS_definition.h"
#include "GateDriverController_MS_definition.h"
#include "BrakeAndDirectionManager_MS_definition.h"
#include "MotorDriveDcmProxy_MS_definition.h"

extern dtPwmConfiguration 		pwm;
extern dtHALLSensorState 	 	HALL_STATE;
extern dtGateDriverController 	gateDriver;
extern dtBdrConfiguration 		bdr;

/* Error Handling */
extern dtMotorDriveErrors		motorDriverError;

#endif /* ECUSTATEMANAGER_INC_ECUSTATEMANAGER_GLOBAL_H_ */
