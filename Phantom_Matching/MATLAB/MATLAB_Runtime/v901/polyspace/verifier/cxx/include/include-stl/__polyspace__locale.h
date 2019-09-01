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
#ifndef __polyspace__locale_h
#define __polyspace__locale_h

#include <__polyspace__stddef.h>
#include <__polyspace__stdlib.h>
#include <string>

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

namespace std {

class locale {
public:
  typedef int category;
  
  static const category 
    none = 0,
    collate = 0x010, ctype = 0x020,
    monetary = 0x040, numeric = 0x080,
    time = 0x100, messages = 0x200,
    all = collate | ctype | monetary | numeric | time | messages;

  // class locale::id //
  class id {
  public:
    id(size_t _Val = 0) { }	
#ifdef PST_VISUAL    
    operator size_t() {
      volatile size_t	ret = 0;
      return ret;
    }
#endif
  private:
    void operator= (const id&);
    id(const id&);
  };
  
  // class locale::facet //
  class facet {
  protected:
    __ps_explicit facet(size_t refs = 0) { }
    virtual ~facet() { }
  private:
    facet(const facet&);
    void operator= (const facet&);
  };
  
  PST_TEMPLATE_DECL_FOR_CONTAINER2(class _Elem, class _Traits)
  __ps_bool  operator() (const PST_TEMPLATE_CONTAINER_NAME2(basic_string, _Elem, _Traits)& _Left,
		    const PST_TEMPLATE_CONTAINER_NAME2(basic_string, _Elem, _Traits) & _Right) const
  {
    volatile __ps_bool ret = false;
    return ret;
  }
  
  template<class _Facet>
  locale combine(const locale& _Loc) const { 
    volatile locale ret; 
    return (*((locale *)&ret));
  }

  template<class _Facet>
  locale(const locale& _Loc, _Facet * _Facptr) { }

  locale() throw() { }

  locale(const locale& _Right) throw() { }
  
  locale(const locale& _loc, const locale& _loc2, category _cat) { }

  __ps_explicit locale(const char *str, category _cat) { }
  
  __ps_explicit locale(const char *str) { }
  
  locale(const locale& _loc, const char*str, category _cat) { }
  
  locale(const locale& _loc, const char*str) { }
  
  ~locale() throw() { }
  
  locale& operator= (const locale & _Right) throw() {
    return *this;
  }
  
  string name() const {
    string * volatile ret;
    return *((string *) ret);
  }
  
  __ps_bool operator== (const locale &) const { 
    volatile __ps_bool ret = false; 
    return ret;
  }

  __ps_bool operator!= (const locale & _Right) const { 
    volatile __ps_bool ret = false; 
    return ret;
  }

  static const locale& classic() {
    locale * volatile ret;
    return *((locale *) ret);	
  }
  
  static locale global(const locale &_loc) { 
    locale * volatile ret; 
    return *((locale *) ret); 
  }
#ifdef PST_VISUAL
  static locale empty() { 
    locale * volatile ret; 
    return *((locale *) ret); 
  }
#endif
};

}

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

#endif /* __polyspace__locale_h */


