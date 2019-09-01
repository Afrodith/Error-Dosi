/* Copyright 2012 The MathWorks, Inc. */

#ifndef __polyspace__compat_h
#define __polyspace__compat_h

#ifndef _BOOL
#  define __ps_bool  int
#  define __ps_true  1
#  define __ps_false 0
#else
#  define __ps_bool  bool
#  define __ps_true  true
#  define __ps_false false
#endif

#ifdef PST_CFRONT

#define __ps_explicit
#define __ps_typename
#define __ps_class class

#else

#define __ps_explicit explicit
#define __ps_typename typename
#define __ps_class    typename

#endif /* PST_CFRONT */

#endif /* __polyspace__compat_h */
