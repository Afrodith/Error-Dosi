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
#ifndef __polyspace__math_h
#define __polyspace__math_h

#ifdef PST_HAS_MATH_H
#include <math.h>
#endif

#ifndef PST_NO_MATH_NAMESPACE
namespace std
{
  using ::cos ;
  using ::cosh ;
  using ::sin ;
  using ::sinh ;
  using ::exp ;
  using ::log ;
  using ::sqrt ;
  using ::pow ;
}

#endif /* PST_NO_MATH_NAMESPACE */
#endif /* __polyspace__math_h */

