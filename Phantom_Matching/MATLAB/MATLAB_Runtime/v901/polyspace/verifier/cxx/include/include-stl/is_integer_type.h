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
// File that determines c++ integer types

#ifndef __POLYSPACE_IS_INTEGER
#define __POLYSPACE_IS_INTEGER

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

template<class Type> struct __polyspace_is_int_type {
  static const __ps_bool is_int_type = __ps_false;
};

#ifdef _BOOL
template<> struct __polyspace_is_int_type<__ps_bool> {
  static const __ps_bool is_int_type = __ps_true;
};
#endif /* _BOOL */

template<> struct __polyspace_is_int_type<char> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<signed char> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<unsigned char> {
  static const __ps_bool is_int_type = __ps_true;
};

#if defined(_WCHAR_T) && \
    (! defined(PST_DEFINE_WCHAR_T_KEYWORD_IS_UNSIGNED_LONG)) && \
    (! defined(PST_DEFINE_WCHAR_T_KEYWORD_IS_UNSIGNED_SHORT))
template<> struct __polyspace_is_int_type<wchar_t> {
  static const __ps_bool is_int_type = __ps_true;
};
#endif

template<> struct __polyspace_is_int_type<short> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<unsigned short> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<int> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<unsigned int> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<long> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<unsigned long> {
  static const __ps_bool is_int_type = __ps_true;
};


#ifndef __NO_LONG_LONG
template<> struct __polyspace_is_int_type<long long> {
  static const __ps_bool is_int_type = __ps_true;
};

template<> struct __polyspace_is_int_type<unsigned long long> {
  static const __ps_bool is_int_type = __ps_true;
};
#endif

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif


#endif /* __POLYSPACE_IS_INTEGER */

