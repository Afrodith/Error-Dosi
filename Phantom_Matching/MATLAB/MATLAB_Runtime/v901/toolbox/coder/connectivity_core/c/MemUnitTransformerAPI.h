/* Copyright 2011-2013 The MathWorks, Inc. */
#ifndef MemUnitTransformerAPI_h
#define MemUnitTransformerAPI_h

/* Shipping C interface to memory unit transformer in the libmwcoderprofilecore
 * shared library. */

#include "tmwtypes.h"

#ifndef EXTERN_C
#ifdef __cplusplus
/* support C++ call sites */
#define EXTERN_C extern "C"
#else
/* support C call sites */
#define EXTERN_C extern
#endif
#endif 

#ifndef CODER_CONNECTIVITY_MEMUNIT_API
/* default definition */
#define CODER_CONNECTIVITY_MEMUNIT_API
#endif

typedef enum MEM_UNIT_TYPE_VALS {
    MEM_UNIT_BOOLEAN_TYPE=0,
    MEM_UNIT_UINT8_TYPE,
    MEM_UNIT_UINT16_TYPE,
    MEM_UNIT_UINT32_TYPE,
    MEM_UNIT_UINT64_TYPE,
    MEM_UNIT_INT8_TYPE,
    MEM_UNIT_INT16_TYPE,
    MEM_UNIT_INT32_TYPE,
    MEM_UNIT_INT64_TYPE,
    MEM_UNIT_SINGLE_TYPE,
    MEM_UNIT_DOUBLE_TYPE
} mem_unit_type_T;

typedef enum MEM_UNIT_TRANSFORM_DIRECTION {
    MEM_UNIT_XFORM_OUTBOUND=0,
    MEM_UNIT_XFORM_INBOUND
} mem_unit_xform_direction_T;

#define MEM_UNIT_XFORM_ID(mem_unit_type_val, isInbound) (mem_unit_type_val*2+isInbound)

EXTERN_C CODER_CONNECTIVITY_MEMUNIT_API boolean_T memUnitXformer_Init(
    void ** const ppData, 
    const uint_T wordLen, const boolean_T isByteAddressable, 
    const boolean_T isLittleEndian, const size_t numTypesWithDiffEndian,
    const mem_unit_type_T * const typesWithDiffEndian);

EXTERN_C CODER_CONNECTIVITY_MEMUNIT_API void memUnitXformer_DoXform(
    const void* const pDataVoid, const unsigned int typeId, void ** pIn, 
    void ** pOut, const size_t length);

/* Free all memory in use for this instance of the execution profiling shared
 * library */
EXTERN_C CODER_CONNECTIVITY_MEMUNIT_API void memUnitXformer_Destroy(void * const pData);

#endif
