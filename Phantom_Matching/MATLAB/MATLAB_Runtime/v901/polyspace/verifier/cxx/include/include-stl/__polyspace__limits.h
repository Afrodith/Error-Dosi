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
#ifndef __polyspace__limits_h
#define __polyspace__limits_h

#include <__polyspace__compat.h>

#ifdef PST_HAS_LIMITS_H
#include <limits.h>
#endif

/*********************************************************
 * CHAR_MIN / CHAR_MAX (used for char <=> int conversion *
 *********************************************************/


#ifndef	CHAR_BIT
#define CHAR_BIT	__CHAR_BIT__
#endif

#ifndef SCHAR_MAX
#define SCHAR_MAX	__SCHAR_MAX__
#endif

#ifndef SCHAR_MIN
#define SCHAR_MIN	(-SCHAR_MAX-1)
#endif

#ifndef UCHAR_MAX
#define UCHAR_MAX       (SCHAR_MAX * 2u + 1u)
#endif

#ifndef UCHAR_MIN
#define UCHAR_MIN	0
#endif


#ifdef __CHAR_UNSIGNED__

#ifndef CHAR_MIN
#define	CHAR_MIN        UCHAR_MIN
#endif

#ifndef CHAR_MAX
#define	CHAR_MAX	UCHAR_MAX
#endif

#else

#ifndef CHAR_MIN
#define	CHAR_MIN        SCHAR_MIN
#endif

#ifndef CHAR_MAX
#define	CHAR_MAX	SCHAR_MAX
#endif

#endif

#ifndef SHRT_MAX
#define SHRT_MAX	__SHRT_MAX__
#endif

#ifndef SHRT_MIN
#define SHRT_MIN        (-SHRT_MAX-1)
#endif

#ifndef USHRT_MAX
#define USHRT_MAX	(SHRT_MAX * 2u + 1u)
#endif

#ifndef INT_MAX
#define INT_MAX		__INT_MAX__
#endif

#ifndef INT_MIN
#define INT_MIN         (-INT_MAX-1) 
#endif

#ifndef UINT_MAX
#define UINT_MAX	(INT_MAX * 2u + 1u)
#endif

#ifndef LONG_MAX
#define LONG_MAX	__LONG_MAX__
#endif

#ifndef LONG_MIN
#define LONG_MIN        (-LONG_MAX-1L) 
#endif

#ifndef ULONG_MAX
#define ULONG_MAX	(LONG_MAX * 2uL + 1uL)
#endif

#ifndef LLONG_MAX
#define LLONG_MAX	__LONG_LONG_MAX__
#endif

#ifndef LLONG_MIN
#define LLONG_MIN       (-LLONG_MAX-1LL)  // 64 bits //
#endif

#ifndef ULLONG_MAX
#define ULLONG_MAX	 (LLONG_MAX * 2uLL + 1uLL)
#endif 

#ifndef MB_LEN_MAX
#define MB_LEN_MAX	6
#endif


#endif /* __polyspace__limits_h */
