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
#ifndef __polyspace__string_h
#define __polyspace__string_h

#ifdef PST_HAS_STRING_H
#include <string.h>
#else

#include <__polyspace__stddef.h>

extern "C" size_t strlen(const char *s);

#endif /* PST_HAS_STRING_H */

#endif /* __polyspace__string_h */

