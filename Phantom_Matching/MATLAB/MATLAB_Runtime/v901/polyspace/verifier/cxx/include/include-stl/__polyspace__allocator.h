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
  This header produce some macro definition that will control use of allocator in container
  user can force PST_STL_USE_ALLOCATOR to 0/1 in command line
*/


#ifndef __polyspace__allocator_h
#define __polyspace__allocator_h

#ifndef PST_STL_USE_ALLOCATOR
  #ifdef PST_VISUAL
    /* validation : visual includes has conformant allocator<> class, we can use it */
    #if PST_HAS_MEMORY
      #define PST_STL_USE_ALLOCATOR 1
    #endif
  #else 
    #define PST_STL_USE_ALLOCATOR 0
  #endif
#endif



#if PST_STL_USE_ALLOCATOR

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

namespace std {

template<class T> class allocator ;

} //namepsace std

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back */
#endif

#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER(T)                       template<class T,                         class Allocator = allocator<T> >
#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER_SET(T, C, C_DEF)         template<class T,          class C=C_DEF, class Allocator = allocator<T> >
#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER_MAP(K, T, C, C_DEF)      template<class K, class T, class C=C_DEF, class Allocator = allocator< pair<const K,T> > >
#define PST_TEMPLATE_DECL_DEF_FOR_BASIC_STRING_CLASSES(C, T, T_DEF)  template<class C, class T=T_DEF, class Allocator = allocator<C> >

#define PST_TEMPLATE_DECL_FOR_CONTAINER1(T)           template<T, class Allocator >
#define PST_TEMPLATE_CONTAINER_NAME1(name, T)         name<T, Allocator>

#define PST_TEMPLATE_DECL_FOR_CONTAINER2(T, C)        template<T, C, class Allocator >
#define PST_TEMPLATE_CONTAINER_NAME2(name, T, C)      name<T, C, Allocator>

#define PST_TEMPLATE_DECL_FOR_CONTAINER3(K, T, C)     template<K, T, C, class Allocator >
#define PST_TEMPLATE_CONTAINER_NAME3(name, K, T, C)   name<K, T, C, Allocator>


#define PST_ALLOCATOR                           Allocator
#define PST_RETURN_STAT_FOR_GET_ALLOCATOR       allocator_type *volatile ret ;  return *ret ;
#define PST_ALLOCATOR_DECL1                     const Allocator& = Allocator()
#define PST_ALLOCATOR_DECL_LAST                 ,const Allocator& = Allocator()

#else /* PST_STL_USE_ALLOCATOR */


/* no allocator */


#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER(T)                      template<class T                         >
#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER_SET(T, C, C_DEF)        template<class T,          class C=C_DEF >
#define PST_TEMPLATE_DECL_DEF_FOR_CONTAINER_MAP(K, T, C, C_DEF)     template<class K, class T, class C=C_DEF >
#define PST_TEMPLATE_DECL_DEF_FOR_BASIC_STRING_CLASSES(C, T, T_DEF) template<class C, class T=T_DEF          >

#define PST_TEMPLATE_DECL_FOR_CONTAINER1(T)           template<T>
#define PST_TEMPLATE_CONTAINER_NAME1(name, T)         name<T>

#define PST_TEMPLATE_DECL_FOR_CONTAINER2(T, C)        template<T, C>
#define PST_TEMPLATE_CONTAINER_NAME2(name, T, C)      name<T, C>

#define PST_TEMPLATE_DECL_FOR_CONTAINER3(K, T, C)     template<K, T, C>
#define PST_TEMPLATE_CONTAINER_NAME3(name, K, T, C)   name<K, T, C>


#define PST_ALLOCATOR                           void *
#define PST_RETURN_STAT_FOR_GET_ALLOCATOR       return (allocator_type) 0 ;
#define PST_ALLOCATOR_DECL1                     
#define PST_ALLOCATOR_DECL_LAST                 

#endif /* PST_STL_USE_ALLOCATOR */



#endif /* __polyspace__allocator_h */
