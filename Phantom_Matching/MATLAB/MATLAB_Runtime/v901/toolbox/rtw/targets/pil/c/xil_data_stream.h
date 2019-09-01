/* Copyright 2007-2015 The MathWorks, Inc. */

/* 
 * File: xil_data_stream.h
 */

#ifndef XIL_DATA_STREAM_H
#define XIL_DATA_STREAM_H

#include "xil_common.h"
#include "xil_error_codes.h"

/* reset the write buffer */
XIL_INTERFACE_LIB_ERROR_CODE resetXILWriteBuffer(void);
/* copy specified amount of data from the address specified to the output stream */
XIL_DATA_STREAM_ERROR_CODE xilWriteData(const MemUnit_T *, uint32_T);
/* flush any buffered writes */
XIL_DATA_STREAM_ERROR_CODE xilDataFlush(MemUnit_T isEndOfXILStep);
/* initialize SIL/PIL service */ 
XIL_INTERFACE_LIB_ERROR_CODE silpilInit(void);
/* terminate SIL/PIL service */
void silpilTerminate(void);

#endif
