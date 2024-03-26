/*
 * ECUStateManager_public.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PUBLIC_H_
#define ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PUBLIC_H_

#include "ECUStateManager_definition.h"

extern dtEcuState 		ECU_STATE;
extern dtStartUp  		systemStartUp;
extern dtRefreshState	REFRESH_STATE;

extern FUNC(void, ECUStateManager)(void);

#endif /* ECUSTATEMANAGER_INC_ECUSTATEMANAGER_PUBLIC_H_ */

