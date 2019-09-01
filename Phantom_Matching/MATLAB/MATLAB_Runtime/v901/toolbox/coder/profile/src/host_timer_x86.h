/* Copyright 2012 The MathWorks, Inc. */

#ifndef _HOST_TIMER_X86_H_
#define _HOST_TIMER_X86_H_

#include "rtwtypes.h"

/* rtwtypes.h may not provide a typedef for uint64_T. We must detect this case
 * and provide the typedef. */
#ifndef MAX_uint64_T
# if defined(__x86_64__) || defined(__LP64__)
/* use long long to support MinGW on Win64
 * long long is also 64-bit on Linux / Mac */
#  define UINT64_T unsigned long long
# elif defined(_MSC_VER) || (defined(__BORLANDC__) && __BORLANDC__ >= 0x530) \
                         || (defined(__WATCOMC__)  && __WATCOMC__  >= 1100) \
                         || defined(__int64)
#  define UINT64_T unsigned __int64
# else
#  error There is no 64-bit unsigned type available for this platform.
# endif

# if defined(__GNUC__) && \
    ((__GNUC__ > 2) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >=9)))
  __extension__
# endif
 typedef UINT64_T uint64_T;
#endif



uint64_T timestamp_x86(void);

#endif /* _HOST_TIMER_X86_H_ */
