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
#ifndef __polyspace__allocator_def_h
#define __polyspace__allocator_def_h

#include <__polyspace__stddef.h>
#include <new>

#ifdef PST_VISUAL
#pragma pack(push, 8) 
#endif

namespace std 
{
  template<class T> class allocator ;

  // 20.4.1

  template<> class allocator<void>
  {
  public:
    typedef void *       pointer ;
    typedef const void * const_pointer ;
    typedef void value_type ;

    template <class U>
    struct rebind
    {
      typedef allocator<U> other ;
    } ;
  };

  template<class T> class allocator
  {
  public:
    typedef size_t    size_type ;
    typedef ptrdiff_t difference_type ;
    typedef T*        pointer ;
    typedef const T*  const_pointer ;
    typedef T&        reference ;
    typedef const T&  const_reference ;
    typedef T         value_type ;

    template <class U>
    struct rebind
    {
      typedef allocator<U> other ;
    } ;

    allocator() throw() { ; }
    allocator(const allocator& other) throw() { ; }
    template<class U> 
    allocator(const allocator<U>& other) throw() { ; }
    ~allocator() throw() { ; }

    // 20.4.1.1

    pointer address(reference x) const { return &x ; }
    const_pointer address(const_reference x) const { return &x ; }

    pointer allocate(size_type n, allocator<void>::const_pointer hint=0)
    {
      return (pointer) ::operator new(n * sizeof(T)) ;
    }

    void deallocate(pointer p, size_type n)
    {
      // no check about n

      ::operator delete(p) ;
    }

    size_type max_size() const throw() { return PST_CONTAINER_MAX_SIZE ; }

    void construct(pointer p, const_reference val)
    {
      new ((void *)p) T(val) ;
    }

    void destroy(pointer p)
    {
      ((T*)p)->~T() ;
    }
  };

  // 20.4.1.2

  template<class T1, class T2>
  __ps_bool operator==(const allocator<T1>&, const allocator<T2>&) throw() { return __ps_true ; } 

  template<class T1, class T2>
  __ps_bool operator!=(const allocator<T1>&, const allocator<T2>&) throw() { return __ps_false ; } 


} // namespace std

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif


#endif /* __polyspace__allocator_def_h */
