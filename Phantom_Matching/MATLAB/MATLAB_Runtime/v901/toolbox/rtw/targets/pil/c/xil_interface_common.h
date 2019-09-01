/* Copyright 2006-2015 The MathWorks, Inc. */

/*
 * File: xil_interface_common.h
 *
 * SIL/PIL common definitions
 */

#ifndef __XIL_INTERFACE_COMMON_H__
#define __XIL_INTERFACE_COMMON_H__

#include "xil_common.h"

/* define some error codes */
typedef enum {XIL_INTERFACE_SUCCESS=0, 
              XIL_INTERFACE_UNKNOWN_TID,
              XIL_INTERFACE_UNKNOWN_FCNID,
              XIL_INTERFACE_COMMS_FAILURE,
              XIL_INTERFACE_MEMORY_ALLOCATION_ERROR} XIL_INTERFACE_ERROR_CODE;

typedef enum {XIL_INIT_COMMAND = 0, 
              XIL_INITIALIZE_COMMAND,
              XIL_SYSTEM_INITIALIZE_COMMAND,
              XIL_OUTPUT_COMMAND, 
              XIL_TERMINATE_COMMAND, 
              XIL_ENABLE_COMMAND,
              XIL_DISABLE_COMMAND, 
              XIL_CONST_OUTPUT_COMMAND, 
              XIL_PROCESS_PARAMS_COMMAND,
              XIL_CLIENT_SERVER_COMMAND,
              XIL_SHUTDOWN_COMMAND,
              XIL_UPDATE_COMMAND,
              XIL_SYSTEM_RESET_COMMAND} XIL_COMMAND_TYPE_ENUM;

/* define response ids */
typedef enum {XIL_RESPONSE_ERROR=0, 
              XIL_RESPONSE_OUTPUT_DATA,              
              XIL_RESPONSE_PRINTF,
              XIL_RESPONSE_FOPEN,
              XIL_RESPONSE_FPRINTF,
              XIL_RESPONSE_SIGNAL_RAISED,
              XIL_RESPONSE_TYPE_SIZE,
              XIL_RESPONSE_CS_REQUEST_SERVICE              
              } XIL_RESPONSE_ID;
                            
/* XILIOData is defined as a start address
 * and length in MemUnits */
typedef struct xilIOData {
   uint32_T memUnitLength;
   MemUnit_T * address;
} XILIOData;

#endif
