/*
 * Copyright 2013 The MathWorks, Inc.
 */

/* 
   Polyspace standard stdio.h umbrella.
*/
#ifndef PST_LIBC_DEFINES_IS_ALREADY_INCLUDED
#define PST_LIBC_DEFINES_IS_ALREADY_INCLUDED
#if (__GLIBC__ < 2) || ((__GLIBC__ == 2) && (__GLIBC_MINOR__ < 3))
# define __PST_THROW_OLD_LIBC __PST_THROW
# define __PST_THROW_NEW_LIBC
# define __PST_THROW_NEW_LIBC_UNDER_2_13
#else
# define __PST_THROW_OLD_LIBC
# define __PST_THROW_NEW_LIBC __PST_THROW
# if (__GLIBC__ < 2) || ((__GLIBC__ == 2) && (__GLIBC_MINOR__ < 13))
# define __PST_THROW_NEW_LIBC_UNDER_2_13 __PST_THROW
# else
# define __PST_THROW_NEW_LIBC_UNDER_2_13
# endif
#endif

#endif // PST_LIBC_DEFINES_IS_ALREADY_INCLUDED
