/* Copyright 2013 The MathWorks, Inc. */

#ifndef __XIL_ERROR_CODES_H__
#define __XIL_ERROR_CODES_H__

/* data stream error codes */
typedef enum {XIL_DATA_STREAM_SUCCESS=0,              
              XIL_READ_DATA_ERROR, 
              XIL_WRITE_DATA_ERROR, 
              XIL_DATA_FLUSH_ERROR} XIL_DATA_STREAM_ERROR_CODE;
              
/* interface lib error codes */
typedef enum {XIL_INTERFACE_LIB_SUCCESS=0, 
              XIL_INTERFACE_LIB_ERROR,
              XIL_INTERFACE_LIB_TERMINATE} XIL_INTERFACE_LIB_ERROR_CODE;

#endif
