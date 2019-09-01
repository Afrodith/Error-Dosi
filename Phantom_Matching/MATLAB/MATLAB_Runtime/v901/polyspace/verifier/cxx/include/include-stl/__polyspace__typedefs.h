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
#ifndef __polyspace__typedefs_h
#define __polyspace__typedefs_h

// for size_t and ptrdiff_t definition
#include <__polyspace__stddef.h>

namespace std
{
#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif


  typedef int    streamoff ;
  typedef int    streamsize ;

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

} /* namespace std */

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#endif /* __polyspace__typedefs_h */
