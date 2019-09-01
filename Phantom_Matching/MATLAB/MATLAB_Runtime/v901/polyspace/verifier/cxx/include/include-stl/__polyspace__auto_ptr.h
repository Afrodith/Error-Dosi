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
#ifndef __polyspace__auto_ptr_h
#define __polyspace__auto_ptr_h

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif


namespace std
{

  template<class X> class auto_ptr ;

  template <class Y> struct auto_ptr_ref 
  {
    auto_ptr_ref(auto_ptr<Y>& rap) : ref(rap) { ; }
    auto_ptr<Y>& ref ;
  } ;
    

  template<class X> class auto_ptr
  {
  public:
    typedef X element_type;

    template <class Y> friend class auto_ptr ;

    // 20.4.5.1
    __ps_explicit auto_ptr(X* p = 0) throw()
    {
      ptr = p ;
    }

    auto_ptr(auto_ptr& src) throw()
    {
      ptr = src.ptr ;
      src.ptr = 0 ;
    }

    template<class Y>
    auto_ptr(auto_ptr<Y>& src) throw()
    {
      ptr = (X*) src.ptr ; /* The cast is not required according to the 
			      standard */
      src.ptr = 0 ;
    }

    auto_ptr& operator=(auto_ptr& src) throw()
    {
      delete ptr ; // ptr = 0 or valid
      ptr = src.ptr ;
      src.ptr = 0 ;
      return *this ;
    }

    template<class Y>
    auto_ptr& operator=(auto_ptr<Y>& src) throw()
    {
      delete ptr ; // ptr = 0 or valid
      ptr = (X*) src.ptr ; /* The cast is not required according to the
                              standard */
      src.ptr = 0 ;
      return *this ;
    }
    
    ~auto_ptr() throw()
    {
      delete ptr ; // ptr = null or valid
    }


    // 20.4.5.2 members

    X& operator*() const throw()
    {
      assert(ptr!=0) ; // REQUIRE
      return *ptr ;
    }

    X* operator->() const throw()
    {
      return ptr ;
    }
    
    X* get() const throw()
    {
      return ptr ;
    }
    
    X* release()  throw()
    {
      X* tmp = ptr ;
      ptr = 0 ;
      return tmp ;
    }
    
    void reset(X* p=0) throw() 
    {
      if (p != ptr) delete ptr ;
      ptr = p ;
    }

    // 20.4.5.3 conversions

    auto_ptr(auto_ptr_ref<X> ref) throw()
    {
      ptr = ref.ref.ptr ;
      ref.ref.ptr = 0 ;
    }

    template<class Y> operator auto_ptr_ref<Y>() throw()
    {
      return auto_ptr_ref<Y>(*this) ;
    }

    template<class Y> operator auto_ptr<Y>() throw()
    {
      Y* tmp = (Y*) ptr ;
      ptr = 0 ;
      return auto_ptr<Y>(tmp) ;
    }

  private:
    element_type * ptr ;
  } ;
}

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

#endif /* __polyspace__auto_ptr_h */
