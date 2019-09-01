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
#ifndef __polyspace__hash_h
#define __polyspace__hash_h

// For size_t and ptrdiff_t
#include <__polyspace__stddef.h>
// For wchar_t
#include <__polyspace__wchar.h>
// For equal_to and less
#include <functional>
// For pair
#include <utility>
// For basic_string
#include <string>

#ifdef PST_VISUAL
#pragma pack(push,8)
#endif

#ifdef PST_VISUAL
namespace stdext
#else
namespace std 
#endif
{

#ifdef PST_VISUAL

  //
  // Visual defines a function hash_value()
  //

  template <class charT, class traits, class Allocator>
  size_t hash_value(const basic_string<charT, traits, Allocator>& str)
  {
    volatile size_t pst_random;
    return pst_random;
  }

  template <class Key>
  size_t hash_value(const Key& key)
  {
    volatile size_t pst_random;
    return pst_random;
  }
  
  inline size_t hash_value(const char *str)
  {
    volatile size_t pst_random;
    return pst_random;
  } 

  inline size_t hash_value(const wchar_t *str)
  {
    volatile size_t pst_random;
    return pst_random;
  }

  //
  // Visual defines a template class hash_compare which is used as one of the
  // template arguments of hash_set and hash_map.
  //

  template <class Key, class Predicate = less<Key> >
  class hash_compare {
  protected:
    Predicate comp;
  public:
    enum {
      bucket_size = 4,
      min_buckets = 8
    };
    hash_compare() : comp() {}
    hash_compare(Predicate _comp) : comp(_comp) { }
    size_t operator() (const Key& key) const {
      return (size_t) hash_value(key);
    }
    __ps_bool operator() (const Key& key1, const Key& key2) const {
      return comp(key1, key2);
    }
  };
#else

  //
  // Other platforms define a template class hash which is used as one of the
  // template arguments of hash_map and hash_set.
  //
  
  template <class Key> struct hash {
    size_t operator() (const Key& key) const {
      volatile size_t pst_random;
      return pst_random;
    }
  };

#endif 

}

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
#ifdef PST_VISUAL
using namespace stdext ;
#else
using namespace std ;
#endif

#endif /* ifdef __PST_IMPLICIT_USING_STD */


#ifdef PST_VISUAL
#pragma pack(pop)
#endif

#endif
