/*
 * AnalogSignalQualifier_MS_definition.h
 *
 *  Created on: Mar 21, 2024
 *      Author: Atakan.Ertekin
 */

#ifndef ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_DEFINITION_H_
#define ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_DEFINITION_H_

#include "stm32g4xx.h"
#include "stdint.h"

#define FUNC(returnType, functionName) returnType functionName

typedef enum
{
	ASQ_ERR = 0	,
	ASQ_EOK		,
	ASQ_RETURN_UNKNOWN
}ASQ_ReturnType;



typedef enum
{
	SIGNAL_UNKNOWN = 0,
	SIGNAL_QUALIFIED,
	SIGNAL_NOT_QUALIFIED
}dtSignalQualifier;

typedef uint32_t dtRawCurrentA ;
typedef uint32_t dtRawCurrentB ;
typedef uint32_t dtRawCurrentC ;
typedef uint32_t dtRawCurrentDC	;
typedef uint32_t dtRawCurrentU	;
typedef uint32_t dtRawCurrentV	;
typedef uint32_t dtRawCurrentW 	;
typedef uint32_t dtRawFETSenseA	;
typedef uint32_t dtRawFETSenseB	;
typedef uint32_t dtRawFETSenseC	;
typedef uint32_t dtRawMotorTempSense ;
typedef uint32_t dtRawThrottleSignal ;
typedef uint32_t dtRawVsenseA ;
typedef uint32_t dtRawVsenseB ;
typedef uint32_t dtRawVsenseC ;
typedef uint32_t dtRawsenseDC ;


/*****************************************************************************/



/*****************************************************************************/

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentA	  value;
}CurrentAHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentB     value;
}CurrentBHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentC	  value;
}CurrentCHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentDC	  value;
}CurrentDCHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentU	  value;
}CurrentUHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentV	  value;
}CurrentVHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawCurrentW	  value;
}CurrentWHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawFETSenseA	  value;
}FETSenseAHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawFETSenseB	  value;
}FETSenseBHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawFETSenseC	  value;
}FETSenseCHandleType;

typedef struct
{
	dtSignalQualifier 	qualifier;
	dtRawMotorTempSense value;
}MotorTempSenseHandleType;

typedef struct
{
	dtSignalQualifier 	qualifier;
	dtRawThrottleSignal	value;
}ThrottleSignalHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawVsenseA	  value;
}VsenseAHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawVsenseB	  value;
}VsenseBHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawVsenseC	  value;
}VsenseCHandleType;

typedef struct
{
	dtSignalQualifier qualifier;
	dtRawsenseDC	  value;
}VsenseDCHandleType;

#endif /* ANALOGSIGNALQUALIFIER_INC_ANALOGSIGNALQUALIFIER_MS_DEFINITION_H_ */
