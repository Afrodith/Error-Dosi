/* Copyright 2013-2015 The MathWorks, Inc. */

/* 
 * File: codeInstr_data_stream.h
 *
 */					 

/* need error codes */
#include "xil_interface_lib.h"

/* initialize code instrumentation service */
extern XIL_INTERFACE_LIB_ERROR_CODE codeInstrInit(void);
/* terminate code instrumentation service */
extern void codeInstrTerminate(void);
/* copy specified amount of data from the address specified to the output stream */
extern XIL_DATA_STREAM_ERROR_CODE codeInstrWriteData(const MemUnit_T *, uint32_T);
/* flush any buffered writes */
extern XIL_DATA_STREAM_ERROR_CODE codeInstrDataFlush(void);
