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
#ifndef __polyspace__wchar_h
#define __polyspace__wchar_h

// Include string.h before wchar.h when available in order to avoid
// #pragma pack inconsistency in -OS-target visual as both headers define the
// same functions but wchar.h forces a pack level of 8 whereas string.h does
// nothing.
#include <__polyspace__string.h>

#ifdef PST_HAS_WCHAR_H
# ifdef __OS_LINUX
/* Avoid error when using some broken GLibc headers in which wctype.h does not include bits/types.h
   when __need_iswxxx is defined (which is the case when it is included by wchar.h) */
typedef signed int __int32_t;
# endif
# include <wchar.h>
#else
// wchar.h should be present in most versions ...

#ifdef PST_VISUAL

#if (!defined _WCHAR_T_DEFINED) && (!defined _WCHAR_T)
typedef __WCHAR_TYPE__ wchar_t;
#define _WCHAR_T_DEFINED
#endif

#endif

typedef int mbstate_t;

#endif

/***************************
 * WEOF definition problem *
 ***************************/

//   C90 normalized !
//   http://www.opengroup.org/onlinepubs/007904975/basedefs/wchar.h.html
//   yet included before
#ifndef WEOF
#define WEOF (__INT_MAX__* 2u + 1u)
typedef unsigned int wint_t;
#endif

#ifndef WCHAR_MAX
#define WCHAR_MAX       __WCHAR_MAX__
#endif

#ifndef WCHAR_MIN
#ifdef __WCHAR_UNSIGNED__
#define WCHAR_MIN 0
#else
#define WCHAR_MIN       (-WCHAR_MAX-1)
#endif
#endif


#endif /* __polyspace__wchar_h */

