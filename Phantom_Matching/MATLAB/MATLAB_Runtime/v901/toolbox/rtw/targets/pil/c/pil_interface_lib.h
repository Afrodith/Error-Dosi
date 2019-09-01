/* Copyright 2006-2011 The MathWorks, Inc. */

/* 
 * File: pil_interface_lib.h
 *
 * Processor-in-the-Loop (PIL) support library
 */

#ifndef __PIL_INTERFACE_LIB_H__
#define __PIL_INTERFACE_LIB_H__

/* This file is maintaining backwards compatibility for the 
 * undocumented legacy PIL interface functions which have 
 * been replaced by the XIL interface functions. */

#include "xil_interface_lib.h"

/* map to XIL error codes */
#define PIL_INTERFACE_LIB_ERROR_CODE XIL_INTERFACE_LIB_ERROR_CODE
#define PIL_INTERFACE_LIB_SUCCESS XIL_INTERFACE_LIB_SUCCESS
#define PIL_INTERFACE_LIB_ERROR XIL_INTERFACE_LIB_ERROR
#define PIL_INTERFACE_LIB_TERMINATE XIL_INTERFACE_LIB_TERMINATE

/* map to XIL functions */
#define pilInit xilInit
#define pilRun xilRun
#define pilTerminateComms xilTerminateComms

#endif
