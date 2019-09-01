/* Copyright 2012 The MathWorks, Inc. */

#ifndef _LINUX_TYPES_H
#define _LINUX_TYPES_H

#include <asm/types.h>

#ifndef __ASSEMBLY__

#include <linux/posix_types.h>

typedef __u16  __le16;
typedef __u16  __be16;
typedef __u32  __le32;
typedef __u32  __be32;
#if defined(__GNUC__)
typedef __u64  __le64;
typedef __u64  __be64;
#endif
typedef __u16  __sum16;
typedef __u32  __wsum;

#endif /* __ASSEMBLY__ */
#endif /* _LINUX_TYPES_H */
