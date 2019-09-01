/* Copyright 2013 The MathWorks, Inc. */

#ifndef __XILUTILS_H__
#define __XILUTILS_H__

/* Shipping C interface to the libmwxilutils library */

#include "mex.h"  /* mxArray, mexCallMATLAB */

#ifndef EXTERN_C
    #ifdef __cplusplus
        /* support C++ call sites */
        #define EXTERN_C extern "C"
    #else
        /* support C call sites */
        #define EXTERN_C extern
    #endif
#endif

#ifndef LIBMWXILUTILS_API
    /* default definition */
    #define LIBMWXILUTILS_API
#endif

/* error codes */
const int XIL_UTILS_SUCCESS = 0;
const int XIL_UTILS_ERROR = 1;

/* Create an XILMATLABUtils object and return pointer the XILUtils base 
 * class via ppXILUtils 
 */
EXTERN_C LIBMWXILUTILS_API int xilMATLABUtilsCreate(void** const ppXILUtils);

/* Given an XILUtils base class pointer to an XILMATLABUtils object, 
 * retrieve any MATLAB Exception that may have been stored on the object.
 *
 * Returns NULL (no exception) or an mxArray pointer to an MException object. 
 */
EXTERN_C LIBMWXILUTILS_API mxArray* xilMATLABUtilsGetException(void* const pXILUtils);

/* Given an XILUtils base class pointer, destroy the object. */
EXTERN_C LIBMWXILUTILS_API void xilUtilsDestroy(void* const ppXILUtils);

/* Given an XILUtils base class pointer, call its callMATLAB method */
EXTERN_C LIBMWXILUTILS_API int xilUtilsCallMATLAB(void* const
                                                  pXILUtils,
                                                  const uint8_T nlhs,
                                                  mxArray* plhs[],
                                                  const uint8_T nrhs,
                                                  mxArray* prhs[],
                                                  const char* functionName);

#endif 


