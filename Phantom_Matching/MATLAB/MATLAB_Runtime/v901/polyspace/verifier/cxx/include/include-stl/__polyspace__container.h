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
  This header include all files mandatory for all STL containers type 
  and basic_string. this include :
    <memory> if allocator are used uin template declaration
    <iterator> if found in user includes
    <stdexcept> 
 */

#ifndef __polyspace__container_h
#define __polyspace__container_h

// decide or not to use allocator 
#include <__polyspace__allocator.h>

// necessary in visual mode
// for ptrdiff_t
#include <__polyspace__stddef.h>

// get full definition of std::allocator
// assume user include have <memory>

#if PST_STL_USE_ALLOCATOR
#include <memory>
#endif

// get iterator definitions stuff
#include <__polyspace__iterator.h>

// get exception stuff (length-error, out_of_range ...)
#include <stdexcept>


#endif /* __polyspace__container_h */
