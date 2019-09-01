/*
 * PUBLISHED header for C cgxert, the runtime library for CGXE C file
 *
 * Copyright 2014-2015 The MathWorks, Inc.
 *
 */

#ifndef cgxert_h
#define cgxert_h

#if defined(_MSC_VER)
# pragma once
#endif
#if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
#endif

/*
 * Only define EXTERN_C if it hasn't been defined already. This allows
 * individual modules to have more control over managing their exports.
 */
#ifndef EXTERN_C

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C extern
#endif

#endif

#ifndef LIBCGXERT_API
#define LIBCGXERT_API
#endif

#if defined(BUILDING_LIBMWCGXERT) || defined(DLL_IMPORT_SYM)
/* internal use */
# include "simstruct/simstruc.h"
#else
/* external use */
# include "simstruc.h"
#endif

typedef struct covrtInstance covrtInstance;

/*
 *  MATLAB INTERNAL USE ONLY :: macro wrappers for jit mode
 */ 
EXTERN_C LIBCGXERT_API const void* cgxertGetInputPortSignal(SimStruct *S, int32_T/*Sint32*/index);
EXTERN_C LIBCGXERT_API const void* const * cgxertGetInputPortSignalPtrs(SimStruct *S, int32_T ip);
EXTERN_C LIBCGXERT_API void* cgxertGetOutputPortSignal(SimStruct *S, int32_T index);
EXTERN_C LIBCGXERT_API void* cgxertGetDWork(SimStruct *S, int32_T index);
EXTERN_C LIBCGXERT_API void* cgxertGetRunTimeParamInfoData(SimStruct *S, int32_T index);
/* Get varsize input port dimensions array address */
EXTERN_C LIBCGXERT_API int* cgxertGetCurrentInputPortDimensions(SimStruct *S, int32_T portNumber);
/* Get varsize output port dimensions array address */
EXTERN_C LIBCGXERT_API int* cgxertGetCurrentOutputPortDimensions(SimStruct *S, int32_T portNumber);
EXTERN_C LIBCGXERT_API void cgxertSetCurrentOutputPortDimensions(SimStruct *S, int32_T pIdx, int32_T dIdx, int32_T val);
EXTERN_C LIBCGXERT_API bool cgxertIsMajorTimeStep(SimStruct *S);
EXTERN_C LIBCGXERT_API void cgxertSetSolverNeedsReset(SimStruct *S);
EXTERN_C LIBCGXERT_API double cgxertGetT(SimStruct *S);
EXTERN_C LIBCGXERT_API double cgxertGetTaskTime(SimStruct *S, int32_T sti);
EXTERN_C LIBCGXERT_API bool cgxertIsSampleHit(SimStruct *S, int32_T sti, int32_T tid);
EXTERN_C LIBCGXERT_API void* cgxertGetPrevZCSigState(SimStruct *S);
EXTERN_C LIBCGXERT_API void cgxertCallAccelRunBlock(SimStruct *S, int32_T sysIdx, int32_T blkIdx, int32_T method);
EXTERN_C LIBCGXERT_API int32_T cgxertGetSubsysIdx(SimStruct *S);
EXTERN_C LIBCGXERT_API void cgxertSetDisallowSimState(SimStruct *S);

/*
 * MATLAB INTERNAL USE ONLY :: Runtime info access functions
 */
EXTERN_C LIBCGXERT_API void* cgxertGetRuntimeInstance(SimStruct* S);
EXTERN_C LIBCGXERT_API void cgxertSetRuntimeInstance(SimStruct* S, void* instance);

EXTERN_C LIBCGXERT_API void* cgxertGetEMLRTCtx(SimStruct *S);
EXTERN_C LIBCGXERT_API covrtInstance* cgxertGetCovrtInstance(SimStruct *S);


/*
 * MATLAB INTERNAL USE ONLY :: macro wrappers for Data Store Memory functions
 */

EXTERN_C LIBCGXERT_API void ReadFromDataStoreElement_wrapper(SimStruct *S, int dsmIndex, void *dataAddr, int elementIndex);
EXTERN_C LIBCGXERT_API void WriteToDataStoreElement_wrapper(SimStruct *S, int dsmIndex, void *dataAddr, int elementIndex);
EXTERN_C LIBCGXERT_API void GetSFcnDataStoreNameAddrIdx_wrapper(SimStruct *S, const char *name, void **dsmAddress, int *dsmIndex);

/*
 * MATLAB INTERNAL USE ONLY :: Check for Ctrl+C interrupt from the command prompt
 */
EXTERN_C LIBCGXERT_API unsigned int cgxertListenForCtrlC(SimStruct *S);

/*
 * Call back functions into Simulink engine
 */
/*
 * Call Simulink Function server
 */
EXTERN_C LIBCGXERT_API void cgxertCallSLFcn(SimStruct* S,
                                            const char* fcnName,
                                            const char* fullPath,
                                            int numInputs,
                                            void* inArgs,
                                            void* inSizes,
                                            int numOutputs,
                                            void* outArgs,
                                            int* outSizes);
/*
 * MATLAB INTERNAL USE ONLY :: Get runtime error status
 */
EXTERN_C LIBCGXERT_API bool cgxertGetErrorStatus(SimStruct *S);

#endif /* cgxert_h */

