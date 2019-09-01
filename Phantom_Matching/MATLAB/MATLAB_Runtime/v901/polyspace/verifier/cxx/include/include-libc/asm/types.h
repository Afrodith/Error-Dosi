/* Copyright 2012 The MathWorks, Inc. */

#ifndef _ASM_X86_TYPES_H
#define _ASM_X86_TYPES_H

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#ifdef __GNUC__
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif

#endif /* _ASM_X86_TYPES_H */
