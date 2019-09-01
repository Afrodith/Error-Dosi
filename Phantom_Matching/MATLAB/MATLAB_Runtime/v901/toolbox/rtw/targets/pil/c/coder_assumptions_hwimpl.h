/* Copyright 2015 The MathWorks, Inc. */
#ifndef __CODER_ASSUMPTIONS_HWIMPL_H__
#define __CODER_ASSUMPTIONS_HWIMPL_H__

typedef enum {
   CA_NOT_RUN = 0,
   CA_FAIL,
   CA_PASS,
   CA_WARN
} CA_TestResultStatus;

typedef enum {
   CA_NO_MSG = 0,
   CA_WARN_INT_DIV_UNDEFINED,
   CA_WARN_BYTE_ORDER_UNSPECIFIED,
   CA_ERROR_PWS_CONFIG_SETTING
} CA_TestResultMsgId;

typedef struct {
   CA_TestResultStatus status;
   CA_TestResultMsgId msg;
} CA_TestResult;

typedef enum {
   CA_LITTLE_ENDIAN = 0,
   CA_BIG_ENDIAN,
   CA_UNSPECIFIED,
   CA_UNABLE_TO_DETERMINE_ON_TARGET
} CA_EndianessValue;

typedef enum {
   CA_FLOOR = 0,
   CA_ZERO,
   CA_UNDEFINED
} CA_IntDivRoundToValue;

typedef struct {
   int bitsPerChar;
   int bitsPerShort;
   int bitsPerInt;
   int bitsPerLong;
   int bitsPerLongLong;
   int bitsPerFloat;
   int bitsPerDouble;
   int bitsPerPointer;
   CA_EndianessValue byteOrder;
   CA_IntDivRoundToValue intDivRoundTo;
   int shiftRightBehavior;
   int supportLongLong;
   int portableWordSizes;
   const char * hwDeviceType;
} CA_HWImpl;

typedef struct {
   CA_TestResult bitsPerChar;
   CA_TestResult bitsPerShort;
   CA_TestResult bitsPerInt;
   CA_TestResult bitsPerLong;
   CA_TestResult bitsPerLongLong;
   CA_TestResult bitsPerFloat;
   CA_TestResult bitsPerDouble;
   CA_TestResult bitsPerPointer;
   CA_TestResult byteOrder;
   CA_TestResult intDivRoundTo;
   CA_TestResult shiftRightBehavior;
   CA_TestResult supportLongLong;
} CA_HWImpl_TestResults;

typedef struct {
   CA_TestResult configSetting;
} CA_PWS_TestResults;

extern void caVerifyHWImpl(CA_HWImpl *, const CA_HWImpl *, CA_HWImpl_TestResults *);
extern void caVerifyPortableWordSizes(CA_HWImpl *, const CA_HWImpl *, CA_PWS_TestResults *);


#endif
