/* Copyright 2010-2012 The MathWorks, Inc. */

#ifndef _HOST_TIMER_MAC_H_
#define _HOST_TIMER_MAC_H_

#include "rtwtypes.h"

/* rtwtypes.h may not provide a typedef for uint64_T. We must detect this case
 * and provide the typedef. */
#ifndef MAX_uint64_T
typedef unsigned long uint64_T;
#endif

uint64_T timestamp_mac(void);

#endif /* _HOST_TIMER_MAC_H_ */
