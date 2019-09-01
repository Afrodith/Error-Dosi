/* Copyright (C) 1991, 1992, 1996, 1997, 1998, 1999, 2000, 2005
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types	<limits.h>
 */

#ifndef _LIBC_LIMITS_H_
#define _LIBC_LIMITS_H_	1

#include <features.h>


/* Maximum length of any multibyte character in any locale.
   We define this value here since the gcc header does not define
   the correct value.  */
#define MB_LEN_MAX	16


/* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */
/* Polyspace: [2011-08-17] We don't have another limits.h file */
/*#if !defined __GNUC__ || __GNUC__ < 2*/

/* We only protect from multiple inclusion here, because all the other
   #include's protect themselves, and in GCC 2 we may #include_next through
   multiple copies of this file before we get to GCC's.  */
# ifndef _LIMITS_H
#  define _LIMITS_H	1

#include <bits/wordsize.h>

/* We don't have #include_next.
   Define ANSI <limits.h> for standard 32-bit words.  */

/* These assume 8-bit `char's, 16-bit `short int's,
   and 32-bit `int's and `long int's.  */

/* Number of bits in a `char'.	*/
/* Polyspace: [2011-08-23] Use the same builtin names than 'gcc'. */
#  define CHAR_BIT	__CHAR_BIT__

/* Minimum and maximum values a `signed char' can hold.  */
#  define SCHAR_MIN	(-SCHAR_MAX - 1)
#  define SCHAR_MAX	__SCHAR_MAX__

/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */
#if __SCHAR_MAX__ == __INT_MAX__
# define UCHAR_MAX (SCHAR_MAX * 2U + 1U)
#else
# define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#endif

/* Minimum and maximum values a `char' can hold.  */
#  ifdef __CHAR_UNSIGNED__
#   if __SCHAR_MAX__ == __INT_MAX__
#    define CHAR_MIN  0U
#   else
#    define CHAR_MIN    0
#   endif
#   define CHAR_MAX	UCHAR_MAX
#  else
#   define CHAR_MIN	SCHAR_MIN
#   define CHAR_MAX	SCHAR_MAX
#  endif

/* Minimum and maximum values a `signed short int' can hold.  */
#  define SHRT_MIN	(-SHRT_MAX - 1)
#  define SHRT_MAX	__SHRT_MAX__

/* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */
#  if __SHRT_MAX__ == __INT_MAX__
#   define USHRT_MAX (SHRT_MAX * 2U + 1U)
#  else
#   define USHRT_MAX (SHRT_MAX * 2 + 1)
#  endif

/* Minimum and maximum values a `signed int' can hold.  */
#  define INT_MIN	(-INT_MAX - 1)
#  define INT_MAX       __INT_MAX__

/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */
#  define UINT_MAX	(INT_MAX * 2U + 1U)

/* Minimum and maximum values a `signed long int' can hold.  */
#  define LONG_MAX	__LONG_MAX__
#  define LONG_MIN	(-LONG_MAX - 1L)

/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
#  define ULONG_MAX	(LONG_MAX * 2UL + 1UL)

/* Polyspace: [2012-02-21] The front-end defines __NO_LONG_LONG when 'long long' is disabled. */
#  if defined(__USE_ISOC99) && (! defined(__NO_LONG_LONG))

/* Minimum and maximum values a `signed long long int' can hold.  */
#   define LLONG_MAX	__LONG_LONG_MAX__
#   define LLONG_MIN	(-LLONG_MAX - 1LL)

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
#   define ULLONG_MAX	(LLONG_MAX * 2ULL + 1ULL)

#  endif /* ISO C99 */

# endif	/* limits.h  */
/*#endif	/ * GCC 2.  */

#endif	/* !_LIBC_LIMITS_H_ */

 /* Get the compiler's limits.h, which defines almost all the ISO constants.

    We put this #include_next outside the double inclusion check because
    it should be possible to include this file more than once and still get
    the definitions from gcc's header.  */
/*#if defined __GNUC__ && !defined _GCC_LIMITS_H_*/
/* `_GCC_LIMITS_H_' is what GCC's file defines.  */
/*# include_next <limits.h>*/
/*#endif*/

#if (defined (__GNU_LIBRARY__) ? defined (__USE_GNU) : !defined (__STRICT_ANSI__)) && (! defined(__NO_LONG_LONG))
# define LONG_LONG_MIN  (-LONG_LONG_MAX - 1LL)
# define LONG_LONG_MAX  __LONG_LONG_MAX__
# define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#endif

/* The <limits.h> files in some gcc versions don't define LLONG_MIN,
   LLONG_MAX, and ULLONG_MAX.  Instead only the values gcc defined for
   ages are available.  */
#if defined __USE_ISOC99 && defined __GNUC__ && (! defined(__NO_LONG_LONG))
# ifndef LLONG_MIN
#  define LLONG_MIN	(-LLONG_MAX-1)
# endif
# ifndef LLONG_MAX
#  define LLONG_MAX	__LONG_LONG_MAX__
# endif
# ifndef ULLONG_MAX
#  define ULLONG_MAX	(LLONG_MAX * 2ULL + 1)
# endif
#endif

#ifdef	__USE_POSIX
/* POSIX adds things to <limits.h>.  */
# include <bits/posix1_lim.h>
#endif

#ifdef	__USE_POSIX2
# include <bits/posix2_lim.h>
#endif

#ifdef	__USE_XOPEN
# include <bits/xopen_lim.h>
#endif
