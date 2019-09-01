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
/* 
   Polyspace Visual includes problems solver.
   
   pst-visual.h
   
   This include aims at doing the necessary defines or typedef to
   prevent most compilation problems with visual includes.
   
   It is meant to be upgraded when facing with new troubles.

   This file is automaticaly included in top of each C++ file by option -OS-target visual.
*/

#define _WIN32

#ifndef _WIN64
#define _M_IX86 300
#else
#define _M_AMD64 
#define _M_X64 
#endif

#if ! defined __cplusplus || ! defined PST_VISUAL
# define __inline inline
# define _inline inline
# define __cdecl
# define _cdecl
# define __stdcall
# define _stdcall
# define __fastcall
# define __int64 long long
#endif
#define STRICT
#define _STDCALL_SUPPORTED
#define _INTEGRAL_MAX_BITS 64

#ifdef  __cplusplus

/* C++/g610822 */
# ifndef _UNICODE
#  define _MBCS
# endif 

#if (!defined __PST_NO_SEH) && (!defined PST_BUG_FINDER)

namespace /* C++/4971 : need throw (int) somewhere */
{
  inline void __SEH_support()
  {
    throw ((int) 0) ;
  }
}
#endif

/*
  These macros are set when /GR and /GX command lines options
  are used. Because PST does not have options to desactivate RTTI and exception,
  macros are allways defined

  User is free to forbid it with -D __PST_NO_CPPRTTI or -D __PST_NO_CPPUNWIND
  command line option 
*/

# ifndef __PST_NO_CPPRTTI
#  define _CPPRTTI
# endif

# ifndef __PST_NO_CPPUNWIND
#  define _CPPUNWIND
# endif

/*
   These set of macro should be defined in top
   of each include by <stdafx.h> if is not link error can happen
   PST provide basic - extrem permissive values.

   User is free to override one these defines by setting them on command line
   but it is advised in this case to override all.
*/

# ifndef WINVER
#  define WINVER 0x0600
# endif

# ifndef _WIN32_WINNT
#  define _WIN32_WINNT 0x0600
# endif

# ifndef _WIN32_WINDOWS
#  define _WIN32_WINDOWS 0x0600
# endif

# ifndef _WIN32_IE
#  define _WIN32_IE 0x0600
# endif

/* Those are necessary to prevent problems at the link */

# if (!defined POLYSPACE_NO_STL_STUBS)
#  ifdef PST_HAS_XSTDDEF
#   include <xstddef>
#  else
    // In case xstddef is not there, provide _Uninitialized which is
    // needed in STL stubs for streams.
    enum _Uninitialized { _Noinit };
#  endif
# endif

/* wchar.h declares some functions and define inline for it ,
   ctype.h performs the declaration but not the definition, that may lead to a link error
   this defines prevent the inline definition.
   The other choice is to force inclusion of <cwchar>
*/

# define _WCTYPE_INLINE_DEFINED

#endif /* __cplusplus */
