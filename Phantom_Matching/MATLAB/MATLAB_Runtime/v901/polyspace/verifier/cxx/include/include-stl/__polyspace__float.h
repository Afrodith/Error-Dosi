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
#ifndef __polyspace__float_h
#define __polyspace__float_h

#ifdef PST_HAS_FLOAT_H
#include <float.h>
#endif

#ifndef FLT_RADIX
#define FLT_RADIX 2
#endif

#ifndef FLT_MANT_DIG
#define FLT_MANT_DIG 24
#endif

#ifndef FLT_DIG
#define FLT_DIG 6
#endif

#ifndef FLT_MAX_EXP
#define FLT_MAX_EXP 128
#endif

#ifndef FLT_MAX_10_EXP
#define FLT_MAX_10_EXP 38
#endif

#ifndef FLT_MIN_EXP
#define FLT_MIN_EXP (-125)
#endif

#ifndef FLT_MIN_10_EXP
#define FLT_MIN_10_EXP (-37)
#endif

#ifndef FLT_MIN
#define FLT_MIN 1.17549435e-38F
#endif

#ifndef FLT_MAX
#define FLT_MAX 3.40282347e+38F
#endif

#ifndef FLT_EPSILON
#define FLT_EPSILON 1.19209290e-07F
#endif

#ifndef DBL_MANT_DIG
#define DBL_MANT_DIG 53
#endif

#ifndef DBL_DIG
#define DBL_DIG 15
#endif

#ifndef DBL_MAX_EXP
#define DBL_MAX_EXP 1024
#endif

#ifndef DBL_MAX_10_EXP
#define DBL_MAX_10_EXP 308
#endif

#ifndef DBL_MIN_EXP
#define DBL_MIN_EXP (-1021)
#endif

#ifndef DBL_MIN_10_EXP
#define DBL_MIN_10_EXP (-307)
#endif

#ifndef DBL_MIN
#define DBL_MIN 2.2250738585072014e-308
#endif

#ifndef DBL_MAX
#define DBL_MAX 1.7976931348623157e+308
#endif

#ifndef DBL_EPSILON
#define DBL_EPSILON 2.2204460492503131e-16
#endif

#ifndef LDBL_MANT_DIG
#define LDBL_MANT_DIG 64
#endif

#ifndef LDBL_DIG
#define LDBL_DIG 18
#endif

#ifndef LDBL_MAX_EXP
#define LDBL_MAX_EXP 16384
#endif

#ifndef LDBL_MAX_10_EXP
#define LDBL_MAX_10_EXP 4932
#endif

#ifndef LDBL_MIN_10_EXP
#define LDBL_MIN_10_EXP (-4931)
#endif

#ifndef LDBL_MIN_EXP
#define LDBL_MIN_EXP (-16381)
#endif

#endif /* __polyspace__float_h */

