/* Copyright 2012-2013 The MathWorks, Inc. */

#ifndef _STDDEF_H
#define _STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#  define NULL 0
#else
#  define NULL ((void *)0)
#endif
typedef __SIZE_TYPE__ size_t;

#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;
#endif

typedef __PTRDIFF_TYPE__ ptrdiff_t;
#if (! defined(__cplusplus)) || (! defined(PST_GNU))
# define offsetof(type, field) ((size_t) &((type *)0)->field)
#else
# define offsetof(type, field)                            \
  (__offsetof__(reinterpret_cast<size_t>                  \
		(&reinterpret_cast<const volatile char &> \
		 (static_cast<type *>(0)->field))))
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STDDEF_H */
