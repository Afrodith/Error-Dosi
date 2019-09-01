/* Copyright 2013-2015 The MathWorks, Inc. */
#ifndef xilcomms_rtiostream_h
#define xilcomms_rtiostream_h

#include "rtwtypes.h"

#if defined (USING_CS_API)
    #error "xilcomms_rtiostream.h should not be compiled with Comm Service!"
#else 
    #ifdef HOST_WORD_ADDRESSABLE_TESTING
        /* rtIOStream will handle data in single byte chunks
        *
        * uint8_T can be > 8-bits for certain portable word sizes
        * cases (e.g. C2000) so use native type instead */
        typedef unsigned char IOUnit_T;
    #else /* HOST_WORD_ADDRESSABLE_TESTING */
        /* rtIOStream will handle data in MemUnit_T size chunks */
        typedef MemUnit_T IOUnit_T;
    #endif
#endif

extern void* getCommsInstance(void);

extern int commsRun(void);

extern int commsEnqueueBuffer(
        void* const pBufVoid,
        const uint8_T appId,
        const uint16_T payloadSize);

extern void commsWaitUntilConnected(void);

extern uint16_T commsGetMaxPayloadSize(void);

#endif
