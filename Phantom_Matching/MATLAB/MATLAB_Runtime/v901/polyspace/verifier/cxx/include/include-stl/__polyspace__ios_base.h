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
#ifndef __polyspace__ios_base_h
#define __polyspace__ios_base_h

#include <iosfwd>
#include <__polyspace__locale.h>

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

namespace std
{
  class ios_base
  {
    enum T1
	{
	 __pst_boolalpha = 1L << 0, __pst_dec = 1L << 1, __pst_fixed = 1L << 2, __pst_hex = 1L << 3, __pst_internal = 1L << 4, __pst_left = 1L << 5, 
	 __pst_oct = 1L << 6, __pst_right = 1L << 7, __pst_scientific = 1L << 8, __pst_showbase = 1L << 9, __pst_showpoint = 1L << 10, __pst_showpos = 1L << 11,
	 __pst_skipws = 1L << 12, __pst_unitbuf = 1L << 13, __pst_uppercase = 1L << 14, __pst_adjustfield = 1L << 15, __pst_basefield = 1L << 16, 
	 __pst_floatfield = 1L << 17
	};
    enum T2
	{
	 __pst_badbit = 1L << 0, __pst_eofbit = 1L << 1, __pst_failbit = 1L << 2, __pst_goodbit = 0 << 0
	};
    enum T3
	{
	 __pst_app = 1L << 0, __pst_ate = 1L << 1, __pst_binary = 1L << 2, __pst_in = 1L << 3, __pst_out = 1L << 4, __pst_trunc = 1L << 5	
#ifdef  PST_STL_PERMISSIVE_STUB
                                                              , __pst_nocreate = 1L << 6, __pst_noreplace = 1L << 7
#endif
	};  
    enum T4
	{
	 __pst_beg, __pst_cur, __pst_end	
	};
#ifdef PST_VISUAL
  public:
    enum T5
	{
	 _Openprot = 0666
	};
#endif
	
    public:
	class			failure;
	class			Init;
	typedef T1		fmtflags;
	static const fmtflags	boolalpha;
	static const fmtflags	dec;
	static const fmtflags	fixed;
	static const fmtflags	hex;
	static const fmtflags   internal;
	static const fmtflags	left;
	static const fmtflags	oct;
	static const fmtflags	right;
	static const fmtflags	scientific;
	static const fmtflags   showbase;
	static const fmtflags	showpoint;
	static const fmtflags	showpos;
	static const fmtflags	skipws;
	static const fmtflags	unitbuf;
	static const fmtflags	uppercase;
	static const fmtflags	adjustfield;
	static const fmtflags	basefield;
	static const fmtflags	floatfield;
	
	typedef T2		iostate;
	static const iostate	badbit;
	static const iostate	eofbit;
	static const iostate    failbit;
	static const iostate	goodbit;
		
	typedef T3		openmode;
	static const openmode	app;
	static const openmode	ate;
	static const openmode	binary;
	static const openmode	in;
	static const openmode	out;
	static const openmode	trunc;

#ifdef  PST_STL_PERMISSIVE_STUB
        static const openmode   nocreate;
        static const openmode   noreplace;
#endif        /* PST_STL_PERMISSIVE_STUB */

#ifdef PST_VISUAL
	typedef unsigned int open_mode, seek_dir;
#endif

	typedef T4		seekdir;
	static const seekdir	beg;
	static const seekdir	cur;
	static const seekdir	end;

	// fmtflags state //
	fmtflags	flags() const{volatile fmtflags	i = __pst_boolalpha; return i;}
  	fmtflags	flags(fmtflags t){volatile fmtflags i = __pst_boolalpha; return i;}
	fmtflags	setf(fmtflags t){volatile fmtflags i = __pst_boolalpha; return i;}
	fmtflags	setf(fmtflags t, fmtflags mask) {volatile fmtflags i = __pst_boolalpha; return i;}
	void		unsetf(fmtflags mask) {};
	
	streamsize	precision() const{volatile streamsize i = 0; return i;}
	streamsize	precision(streamsize prec){volatile streamsize i = 0; return i;}
	streamsize	width() const {volatile streamsize i = 0; return i;}
	streamsize	width(streamsize wide) {volatile streamsize i = 0; return i;}

	// locales //
	locale	imbue(const locale &) { return locale(); }
	locale	getloc() const { return locale(); }

	// storage //
	static int xalloc(){ volatile int i; return i;}
	long&	iword(int index)
	{
      		volatile unsigned int rand_offset = 0;
		unsigned int size_offset = rand_offset ;
      		assert(size_offset > index);
      		long  *array; 
      		array = new long[size_offset]; 
      		return array[index];
    	}
    	void	*&pword(int index)
	{
      		volatile unsigned int rand_offset = 0;
		unsigned int size_offset = rand_offset ;
      		assert(size_offset > index);
		typedef void * void_ptr ; 
      		void_ptr* s;
      		s = new void_ptr[size_offset]; 
      		return s[index];
    	}

    	// destructor should be virtual
    	virtual ~ios_base(){}
    protected:
    	ios_base(){}
    
    public:	
    // Callbacks //
    enum event {erase_event, imbue_event, copyfmt_event };
    typedef void (*event_callback) (event, ios_base &,  int index);
    void  register_callback(event_callback fn, int index) {}
    static __ps_bool sync_with_stdio(__ps_bool sync = __ps_true){volatile __ps_bool ret = false; return ret;}
  };

#ifndef PST_CFRONT
#define BITMASK_REQUIREMENT(bitmask)             \
inline bitmask operator& (bitmask b1, bitmask b2) { return static_cast<bitmask>(static_cast<long>(b1) & static_cast<long>(b2)) ; } \
inline bitmask operator| (bitmask b1, bitmask b2) { return static_cast<bitmask>(static_cast<long>(b1) | static_cast<long>(b2)) ; } \
inline bitmask operator^ (bitmask b1, bitmask b2) { return static_cast<bitmask>(static_cast<long>(b1) ^ static_cast<long>(b2)) ; } \
inline bitmask operator~ (bitmask b)              { return static_cast<bitmask>(~static_cast<long>(b)) ;                         } \
inline bitmask& operator&= (bitmask& b1, bitmask b2) { b1 = static_cast<bitmask>(static_cast<long>(b1) & static_cast<long>(b2)) ; return b1 ;} \
inline bitmask& operator|= (bitmask& b1, bitmask b2) { b1 = static_cast<bitmask>(static_cast<long>(b1) | static_cast<long>(b2)) ; return b1 ;} \
inline bitmask& operator^= (bitmask& b1, bitmask b2) { b1 = static_cast<bitmask>(static_cast<long>(b1) ^ static_cast<long>(b2)) ; return b1 ;}

  BITMASK_REQUIREMENT(ios_base::fmtflags)
  BITMASK_REQUIREMENT(ios_base::iostate)
  BITMASK_REQUIREMENT(ios_base::openmode)

#undef BITMASK_REQUIREMENT
#endif /* PST_CFRONT */

} /* namespace std */

// string must not be included before the definition of ios_base as it causes
// iomanip to be included and iomanip needs ios_base.
#include <exception>
#include <string>

namespace std { 
  class ios_base::failure : public exception {
  public:
        __ps_explicit failure(const string& msg) : exception() { }
        // throw() is not specified in the ISO standard but it is required
        // because failure overrides exception for which throw() appears in
        // the destructor.
        virtual ~failure() throw() { }
        virtual const char *what() const throw() { return exception::what(); }
  };

} /* namespace std */

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

#endif /* __polyspace__ios_base_h */
