/*
 * GateDriverController_MS_definition.h
 *
 *  Created on: Mar 17, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef GATEDRIVERCONTROLLER_INC_GATEDRIVERCONTROLLER_MS_DEFINITION_H_
#define GATEDRIVERCONTROLLER_INC_GATEDRIVERCONTROLLER_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

typedef enum
{
	GATEDRIVER_ERR = 0,
	GATEDRIVER_EOK ,
	GATEDRIVER_RETURN_UNKNOWN
}dtGateDriverReturn;


typedef union
{
	uint16_t word; // 2 byte'lık bir alan
	struct {
	    uint8_t dontCareBits : 5;
	    uint8_t FAULT 	: 1 ;
	    uint8_t VDS_OCP : 1 ;
	    uint8_t GDF		: 1 ;
	    uint8_t UVLO	: 1 ;
	    uint8_t OTSD	: 1 ;
	    uint8_t VDS_HA	: 1 ;
	    uint8_t VDS_LA	: 1 ;
	    uint8_t VDS_HB	: 1 ;
	    uint8_t VDS_LB	: 1 ;
	    uint8_t VDS_HC	: 1 ;
	    uint8_t VDS_LC	: 1 ;
	}status_bits;
}dtGateDriverFaultReg0;

typedef union
{
	uint16_t word; // 2 byte'lık bir alan
	struct {
	    uint8_t dontCareBits : 5;
	    uint8_t SA_OC 	: 1 ;
	    uint8_t SB_OC   : 1 ;
	    uint8_t SC_OC	: 1 ;
	    uint8_t OTW		: 1 ;
	    uint8_t GDUV	: 1 ;
	    uint8_t VGS_HA	: 1 ;
	    uint8_t VGS_LA	: 1 ;
	    uint8_t VGS_HB	: 1 ;
	    uint8_t VGS_LB	: 1 ;
	    uint8_t VGS_HC	: 1 ;
	    uint8_t VGS_LC	: 1 ;
	}status_bits;
}dtGateDriverFaultReg1;

typedef struct
{
	dtGateDriverFaultReg0  reg0;
	dtGateDriverFaultReg1  reg1;
}dtGateDriverFaultRegStatus;

typedef enum
{
	GATEDRIVER_STATUS_DISABLE = 0,
	GATEDRIVER_STATUS_ENABLE  ,
	GATEDRIVER_STATUS_UNKNOWN
}dtGateDriverEnableStatus;

typedef enum
{
	GATEDRIVER_PWMMODE_1X = 0,
	GATEDRIVER_PWMMODE_3X 	 ,
	GATEDRIVER_PWMMODE_6X 	 ,
	GATEDRIVER_PWMMODE_IND   ,
	GATEDRIVER_PWMMODE_UNKNOWN
}dtGateDriverPwmModes;

typedef enum
{
	GATEDRIVER_N_SINK_100MA 	= 0 ,
	GATEDRIVER_N_SINK_200MA	 ,
	GATEDRIVER_N_SINK_300MA    ,
	GATEDRIVER_N_SINK_600MA    ,
	GATEDRIVER_N_SINK_700MA    ,
	GATEDRIVER_N_SINK_800MA    ,
	GATEDRIVER_N_SINK_900MA    ,
	GATEDRIVER_N_SINK_1100MA   ,
	GATEDRIVER_N_SINK_1200MA   ,
	GATEDRIVER_N_SINK_1300MA   ,
	GATEDRIVER_N_SINK_1400MA   ,
	GATEDRIVER_N_SINK_1700MA   ,
	GATEDRIVER_N_SINK_1800MA   ,
	GATEDRIVER_N_SINK_1900MA   ,
	GATEDRIVER_N_SINK_2000MA   ,
	GATEDRIVER_N_SINK_UNKNOWN
}dtGateDriverCurrentNSink;

typedef enum
{
	GATEDRIVER_P_SINK_50MA 	= 0 ,
	GATEDRIVER_P_SINK_100MA	 ,
	GATEDRIVER_P_SINK_150MA    ,
	GATEDRIVER_P_SINK_300MA    ,
	GATEDRIVER_P_SINK_350MA    ,
	GATEDRIVER_P_SINK_400MA    ,
	GATEDRIVER_P_SINK_450MA    ,
	GATEDRIVER_P_SINK_550MA   ,
	GATEDRIVER_P_SINK_600MA   ,
	GATEDRIVER_P_SINK_650MA   ,
	GATEDRIVER_P_SINK_700MA   ,
	GATEDRIVER_P_SINK_850MA   ,
	GATEDRIVER_P_SINK_900MA   ,
	GATEDRIVER_P_SINK_950MA   ,
	GATEDRIVER_P_SINK_1000MA   ,
	GATEDRIVER_P_SINK_UNKNOWN
}dtGateDriverCurrentPSink;


typedef enum
{
	GATEDRIVER_TDRIVE_500NS	  = 0 ,
	GATEDRIVER_TDRIVE_1000NS	  ,
	GATEDRIVER_TDRIVE_2000NS      ,
	GATEDRIVER_TDRIVE_4000NS      ,
	GATEDRIVER_TDRIVE_UNKNOWN
}dtGateDriverTdrive;

typedef enum
{
	GATEDRIVER_DEADTIME_50NS    = 0 ,
	GATEDRIVER_DEADTIME_100NS	    ,
	GATEDRIVER_DEADTIME_200NS       ,
	GATEDRIVER_DEADTIME_400NS  		,
	GATEDRIVER_DEADTIME_UNKNOWN
}dtGateDriverDeadTime;


typedef enum
{
	GATEDRIVER_DEGLITCHTIME_1US  = 0 ,
	GATEDRIVER_DEGLITCHTIME_2US	     ,
	GATEDRIVER_DEGLITCHTIME_4US      ,
	GATEDRIVER_DEGLITCHTIME_8US  	 ,
	GATEDRIVER_DEGLITCHTIME_UNKNOWN
}dtGateDriverDeGlitchTime;

typedef enum
{
	GATEDRIVER_VDSLEVEL_0_06V	= 0 ,
	GATEDRIVER_VDSLEVEL_0_07V	,
	GATEDRIVER_VDSLEVEL_0_08V   ,
	GATEDRIVER_VDSLEVEL_0_09V   ,
	GATEDRIVER_VDSLEVEL_0_1V    ,
	GATEDRIVER_VDSLEVEL_0_2V    ,
	GATEDRIVER_VDSLEVEL_0_3V    ,
	GATEDRIVER_VDSLEVEL_0_4V    ,
	GATEDRIVER_VDSLEVEL_0_5V    ,
	GATEDRIVER_VDSLEVEL_0_6V    ,
	GATEDRIVER_VDSLEVEL_0_7V    ,
	GATEDRIVER_VDSLEVEL_0_8V    ,
	GATEDRIVER_VDSLEVEL_0_9V    ,
	GATEDRIVER_VDSLEVEL_1V      ,
	GATEDRIVER_VDSLEVEL_1_5V    ,
	GATEDRIVER_VDSLEVEL_2V      ,
	GATEDRIVER_VDSLEVEL_UNKNOWN
}dtGateDriverVdsLevel;

typedef struct
{
	dtGateDriverFaultRegStatus		fault;
	dtGateDriverEnableStatus 	    enableStatus;
	dtGateDriverPwmModes	   	    pwmMode;
	dtGateDriverCurrentNSink	    currentSinkNHs;
	dtGateDriverCurrentPSink	    currentSinkPHs;
	dtGateDriverCurrentNSink	    currenkSinkNLs;
	dtGateDriverCurrentPSink	    currentSinkPLs;
	dtGateDriverTdrive		    	tDriveTime;
	dtGateDriverDeadTime			deadtime;
	dtGateDriverDeadTime		    deGlitchTime;
	dtGateDriverVdsLevel			 vdsLevel;
}dtGateDriverController;


#endif /* GATEDRIVERCONTROLLER_INC_GATEDRIVERCONTROLLER_MS_DEFINITION_H_ */
