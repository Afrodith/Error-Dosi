/* Copyright 2006-2014 The MathWorks, Inc. */

/* 
 * File: xil_interface_lib.h
 *
 * SIL/PIL support library
 */

#ifndef __XIL_INTERFACE_LIB_PRIVATE_H__
#define __XIL_INTERFACE_LIB_PRIVATE_H__

#include "xil_interface_common.h"

/* Enumeration to denote UDATA or YDATA processing */
typedef enum {XIL_UDATA_IO = 0, XIL_YDATA_IO} XIL_IO_TYPE;

/* define some error codes */
typedef enum {XIL_PROCESSDATA_SUCCESS=0, 
              XIL_PROCESSDATA_DATA_STREAM_ERROR, 
              XIL_PROCESSDATA_IO_TYPE_ERROR} XIL_PROCESSDATA_ERROR_CODE;

/* define error response error ids */
typedef enum {XIL_RESPONSE_ERROR_SUCCESS=0,
              XIL_RESPONSE_ERROR_PROCESS_UDATA,
              XIL_RESPONSE_ERROR_PROCESS_YDATA, 
              XIL_RESPONSE_ERROR_PROCESS_PARAMS, 
              XIL_RESPONSE_ERROR_INITIALIZE,
              XIL_RESPONSE_ERROR_SYSTEM_INITIALIZE, 
              XIL_RESPONSE_ERROR_OUTPUT, 
              XIL_RESPONSE_ERROR_UPDATE,
              XIL_RESPONSE_ERROR_TERMINATE,
              XIL_RESPONSE_ERROR_ENABLE, 
              XIL_RESPONSE_ERROR_DISABLE, 
              XIL_RESPONSE_ERROR_SYSTEM_RESET} XIL_RESPONSE_ERROR_ID;


typedef enum {XIL_INVALID_STATE=-1,
              XIL_READ_COMMAND_CODE,
              XIL_READ_FCNID,
              XIL_READ_XILTID,
              XIL_PROCESS_HOST_TO_TARGET_DATA,
              XIL_CALL_XILINTERFACE,
              XIL_PROCESS_TARGET_TO_HOST_DATA,
              XIL_COMPLETE} XIL_HANDLE_RECV_STATE;              
              
/* static functions */
static void getNextXILIOData(void);
  
static XIL_HANDLE_RECV_STATE computeNextState(
        XIL_HANDLE_RECV_STATE currentState,
        XIL_COMMAND_TYPE_ENUM command);

/* Defines what states we need to save to make xilProcessMsg re-entrant. 
 * This is used by client/server commands which could happen in the middle 
 * of a step */
typedef struct processMsgContextSwitch {
	XIL_HANDLE_RECV_STATE state;
	XIL_COMMAND_TYPE_ENUM command;
	uint32_T commandIdx;
	uint32_T fcnId;
} ProcessMsgContextSwitch;

#endif
