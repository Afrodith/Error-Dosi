/*
 *
 * This file and its contents are the property of The MathWorks, Inc.
 * 
 * This file contains confidential proprietary information.
 * The reproduction, distribution, utilization or the communication
 * of this file or any part thereof is strictly prohibited.
 * Offenders will be held liable for the payment of damages.
 *
 * Copyright 1999-2012 The MathWorks, Inc.
 *
 */
#ifndef __polyspace__cstring_h
#define __polyspace__cstring_h

#ifdef PST_HAS_CSTRING
#include <cstring>
#else

#include <__polyspace__string.h>
#undef strlen

namespace std {
  using ::strlen;
}

#endif /* PST_HAS_CSTRING */

#endif /* __polyspace__cstring_h */

