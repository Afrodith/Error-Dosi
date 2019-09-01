/* Copyright 2013 The MathWorks, Inc. */
#ifndef __CODERINSTRUMENTATION_H__
#define __CODERINSTRUMENTATION_H__

/* Shipping C interface to coder profiling shared library */

#include "tmwtypes.h"
#include "mex.h"

#ifndef EXTERN_C
#ifdef __cplusplus
/* support C++ call sites */
#define EXTERN_C extern "C"
#else
/* support C call sites */
#define EXTERN_C extern
#endif
#endif

#ifndef LIBMWCODERPROFILE_API
/* default definition */
#define LIBMWCODERPROFILE_API
#endif

#define TYPE_SIZES_1 X(8) X(16) X(32) X(64)

/* Initialize probe dispatched shared library */
EXTERN_C LIBMWCODERPROFILE_API boolean_T probeDispatcherInit(
        void ** const ppDispatcher,
        const char* const MATInfoPath,
        const size_t memUnitSize);

/* Parse the message received from the target */
#define X(a) EXTERN_C LIBMWCODERPROFILE_API size_t probeDispatcherProcessMsg##a( \
        void * const ppDispatcher,                                      \
        void * const data,                                              \
        const size_t length,                                            \
        const void * const pMemUnitTransformer,                         \
        const time_T time);                                                   
TYPE_SIZES_1
#undef X

/* Perform the clean up after the end of the execution */
EXTERN_C LIBMWCODERPROFILE_API uint32_T probeDispatcherFinish(
    void * const ppDispatcher,
    mxArray** args[],
    char** cbs[]);

/* Destroy dispatcher */
EXTERN_C LIBMWCODERPROFILE_API void probeDispatcherDestroy(
    void * const pDispatcherVoid);


#endif
