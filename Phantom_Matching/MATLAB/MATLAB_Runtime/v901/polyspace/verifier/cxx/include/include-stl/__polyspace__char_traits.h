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
 * Polyspace internal header :
 *  definition/implemetation of char_traits<char>, char_traits<wchar_t>
 *
 * Norm restriction :
 *  - some typedef do not refer to real type (off_type, pos_type, state_type)
 *  - random return for :
 *    + compare
 *    + find
 *    + not_eof
 *  - unspecified behaviour for eq_int_type is specified
 *   
 * Side effects :
 *   try to include stdio.h/wchar.h to get EOF, WEOF, wint_t 
 *    if PST_HAS_STDIO_H/PST_HAS_WCHAR_H is defined
 *   if after include, EOF, WEOF or wint_t is not defined, define it with "defaults" value
 *
 * Remarks :
 *  As for the moment we do not use it, the implementation
 *  is quite precise
 *
 *
 */

#ifndef __polyspace__char_traits_h
#define __polyspace__char_traits_h

// for streamoff
#include <__polyspace__typedefs.h>
// include <wchar.h> to have mbstate_t and WEOF
#include <__polyspace__wchar.h>
// include <stdio.h> to have EOF
#include <__polyspace__stdio.h>
// include <limits.h> to have CHAR_MIN and CHAR_MAX
#include <__polyspace__limits.h>

// Macros undefined at the end

#define PST_CHECK_PRECONDITION(c) assert(c)
#define PST_CHECK_IN_VALID_RANGE(e, l, h) assert((l<=e) && (e<=h)) 
#define PST_STRING_IS_VALID_RANGE(charT, ptr, n) \
   { for( size_t i=0; i<n; ++i) { charT tmp = ptr[i] ; } }

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

namespace std
{

/***********************
 * Some useful   types *
 ***********************/

// perhaps they should be protected by #ifndef __PST_DOES_NOT_DEFINE_STREAM_OFF ... 

// in the norm should be defined in iosfwd.h, but circular definition ... 
// typedef fpos<char_traits<char>::state_type>    streampos
// typedef fpos<char_traits<wchar_t>::state_type> wstreampos

template <class stateT> class fpos;
typedef fpos<mbstate_t>	    streampos ;
typedef fpos<mbstate_t>  wstreampos ;



// Interface

template<class charT> 
struct char_traits 
{
  typedef charT char_type;
  typedef charT	int_type;
  typedef streampos pos_type;
  typedef streamoff off_type;
  typedef mbstate_t state_type;
  static int_type eof() { volatile int_type random = 0; return random; }
  static int_type to_int_type(const char_type& c) { volatile int_type random = 0; return random; }
  static void assign(charT& dst, const charT& src) { dst = src; }
  static __ps_bool eq(const charT& left, const charT& right) { return left == right; }
  static __ps_bool lt(const charT& left, const charT& right) { return left < right; }
  static int compare(const charT *s1, const charT *s2, size_t n) {
    size_t i;
    for (i = 0; i < n; i++, s1++, s2++)
      if (*s1 != *s2) return ((*s1 < *s2) ? -1 : 1);
    return 0;
  }
  static size_t length(const charT *s) {
    size_t i;
    for (i = 0; *s != charT(); s++)
	++i;
    return i;
  }
  static charT *copy(charT *dst, const charT *src, size_t n) {
    size_t i;
    charT *ret = dst;
    for (i = 0; i < n; i++, ret++, src++)
       *ret = *src;
    return ret;
  }
  static charT *move(charT *dst, const charT *src, size_t n) {
    charT *iter = dst;
    if (src < iter && iter < src + n)
	for (iter += n, src += n; 0 < n; n--)
	    *--iter = *--src;
    else
	for ( ; 0 < n; n--, iter++, src++)
	    *iter = *src;
    return dst;
  }
  static charT *assign(charT *s, size_t n, charT c) {
    size_t i;
    for (i = 0; i < n; i++)
       s[i] = c;
    return s;
  }
  static charT to_char_type(const int_type& i) { return i; }
  static __ps_bool eq_int_type(const int_type& s1, const int_type& s2) {
     return (s1 == s2);
  }  
  static int_type not_eof(const int_type& i) {
     volatile int_type random = '\0';
     return random;
  }
  static const charT *find(const charT *s, size_t n, const charT& c) {
    size_t i = 0;
    while (i < n) {
	if (s[i] == c) return &s[i];
	i++;
    }
    return 0;
  }
};


// char specialization


template<>
struct char_traits<char>
{
  // typedefs :

  typedef char       char_type ;
  typedef int        int_type ;
  typedef streamoff  off_type ;
  typedef streampos  pos_type ;

  // In the norm :
  // typedef mbstate_t  state_type ;

  typedef mbstate_t  state_type ;


  static void assign(char_type& c, const char_type& d)
    {
      c = d ;
    }

  static __ps_bool eq(const char_type& c, const char_type& d)
    {
      return c==d ;
    }

  static __ps_bool lt(const char_type& c, const char_type& d)
    {
      return c<d ;
    }

  static int compare(const char_type* p, const char_type* q, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;
      PST_STRING_IS_VALID_RANGE(char_type, q, n) ;

      volatile int ret = 0 ;
      return ret ;
    }

  static size_t length(const char_type* p)
    {
      const char_type* it = p ;
      size_t l = 0 ;

      while (*it != 0) 
	{ 
	  it++; 
	  l++; 
	}
      return l ;
    }

  static const char_type* find(const char_type* p, size_t n, const char_type&c)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;

      const char_type* volatile random_ret ;
      const char_type* ret = random_ret ;
      // post condition :
      assert( (ret==0) || ((p<=ret) && (ret<p+n) )) ;
      
      return ret ;
    }

  static char_type* move(char_type* s, const char_type* p, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;

      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0 ;
	  s[i] = random ;
	}
      return s ;
    }

  static char_type* copy(char_type* s, const char_type* p, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;

      // Check precondition : p not in [s, s+n)

      PST_CHECK_PRECONDITION( !((s<=p) && (p<s+n)) ) ;

      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0 ;
	  s[i] = random ;
	}
      return s ;
    }


  static char_type* assign(char_type* s, size_t n, char_type c)
    {
      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0;
	  s[i] = random ;
	}
      return s ;
    }


  static int_type not_eof(const int_type& e)
  {
    volatile int_type random_ret = 0 ;
    int_type ret = random_ret ;
    assert(ret != eof()) ;
    return (e != eof()) ? e : ret ;
  }

  static char_type to_char_type(const int_type& e)
  {
    // we check that given e is valid char : it should be encoded in [0 255] 
    // not mandatory ... (in the norm, return value is unspecified)

    PST_CHECK_IN_VALID_RANGE(e, 0, 255) ;
    
    //return (e-CHAR_MIN)%(CHAR_MAX-CHAR_MIN+1)+CHAR_MIN ;      

    return ((CHAR_MIN==0) || (e<128)) ? e : e-256 ;
 
    // return ((e+128)%256)-128 ; 
    // or return (e%256)
  }

  static int_type to_int_type(const char_type& c)
  {
    // as EOF == -1 and for the case where char are signed (the case on most machine ...)
    //  we encode char into int between 0-255 :
    //   c in [0-127] => return in [0-127]
    //   c in [-128-(-1)] => return in [128-255]  
    
    int_type tmp = c ;

    return (c<0) ? c+256 : c ;
	
    //    return (tmp-2*CHAR_MIN)%(CHAR_MAX-CHAR_MIN+1) ;
    
    // return (tmp+256)%256 ;
    // or return (tmp % 256)
  }

  static __ps_bool eq_int_type(const int_type& e, const int_type& f)
  {
    return e==f ;
  }

  static int_type eof()
  {
    return EOF ;
  }

} ;




// wchar_t specialization


template<>
struct char_traits<wchar_t>
{
  // typedefs :

  typedef wchar_t      char_type ;
  typedef wint_t       int_type ;  
  typedef streamoff    off_type ;
  typedef wstreampos   pos_type ;

  typedef mbstate_t  state_type ;


  static void assign(char_type& c, const char_type& d)
    {
      c = d ;
    }

  static __ps_bool eq(const char_type& c, const char_type& d)
    {
      return c==d ;
    }

  static __ps_bool lt(const char_type& c, const char_type& d)
    {
      return c<d ;
    }

  static int compare(const char_type* p, const char_type* q, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;
      PST_STRING_IS_VALID_RANGE(char_type, q, n) ;

      volatile int ret = 0 ;
      return ret ;
    }

  static size_t length(const char_type* p)
    {
      const char_type* it = p ;
      size_t l = 0 ;

      while (*it != 0) 
	{ 
	  it++; 
	  l++; 
	}
      return l ;
    }

  static const char_type* find(const char_type* p, size_t n, const char_type&c)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;

      const char_type* volatile random_ret ;
      const char_type* ret = random_ret ;
      // post condition :
      assert( (ret==0) || ((p<=ret) && (ret<p+n) )) ;
      return ret ;
    }

  static char_type* move(char_type* s, const char_type* p, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;

      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0 ;
	  s[i] = random ;
	}
      return s ;
    }

  static char_type* copy(char_type* s, const char_type* p, size_t n)
    {
      PST_STRING_IS_VALID_RANGE(char_type, p, n) ;
      // Check precondition : p not in [s, s+n)

      PST_CHECK_PRECONDITION( !((s<=p) && (p<s+n)) ) ;

      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0 ;
	  s[i] = random ;
	}
      return s ;
    }


  static char_type* assign(char_type* s, size_t n, char_type c)
    {
      for (size_t i=0; i<n; i++)
	{
	  volatile char_type random = 0 ;
	  s[i] = random ;
	}
      return s ;
    }


  static int_type not_eof(const int_type& e)
    {
      volatile int_type random_ret = 0 ;
      int_type ret = random_ret ;
      assert(ret != eof()) ;
      return (e != eof()) ? e : ret ;
    }


  static char_type to_char_type(const int_type& e)
    {
      return e ;      
    }

  static int_type to_int_type(const char_type& c)
    {
      return c ;
    }

  static __ps_bool eq_int_type(const int_type& e, const int_type& f)
    {
      return e==f ;
    }

  static int_type eof()
    {
      return WEOF ;
    }
} ;

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

}

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#undef PST_STRING_IS_VALID_RANGE
#undef PST_CHECK_PRECONDITION
#undef PST_CHECK_IN_VALID_RANGE

#endif /* __polyspace__char_traits_h */
