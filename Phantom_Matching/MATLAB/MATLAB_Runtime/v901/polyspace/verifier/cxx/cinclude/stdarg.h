/*
 *
 * Copyright 1999-2014 The MathWorks, Inc.
 *
 */
 
/*
  Polyspace include for varargs.

  stdarg.h

  This include is designed for SUIF compilation pass. SUIF will replace the '...' by an argument called __polyspace_vararg of type void**.
*/

#if !defined(_STDARG_H) || defined(PST_BUG_FINDER) && (!defined(va_start) || !defined(va_arg) || !defined(va_end)|| !defined(va_copy) || !defined(__va_copy))
/* Prevent other libs from defining the types and macros about varargs */
#define _STDARG_H
#define _STDARG_H_
#define	_SYS_VA_LIST_H
#define _ANSI_STDARG_H_
#define __GNUC_VA_LIST
#define __INCstdargh
#define _STDARG_INCLUDED

#define	_VA_LIST
#define _VA_LIST_DEFINED

#define __Iva_list

#define MAX_VARARGS 64

#if defined(__OS_VISUAL) || defined(polyspace_va_list_is_char_ptr) || defined(_MSC_VER) && (_MSC_VER >= 1400) && !defined(_M_CEE_PURE)

typedef char *__va_list;

#else /* ! (__OS_VISUAL || polyspace_va_list_is_char_ptr) */

typedef void *__va_list;

#endif /* ! (__OS_VISUAL || polyspace_va_list_is_char_ptr) */

typedef	__va_list va_list;
typedef __va_list __gnuc_va_list;

#ifdef __cplusplus

namespace std {

  using ::va_list ;
}

#endif /* __cplusplus */



#if defined(POLYSPACE_INSTRUMENT)

#undef va_start
#undef va_end
#undef va_copy
#undef va_arg

void va_start();
void va_end();
void va_copy();

#define	va_arg(ap,mode) *(mode*)va_arg(ap)

#pragma POLYSPACE_NO_INSTRUMENT "va_start"
#pragma POLYSPACE_NO_INSTRUMENT "va_arg"
#pragma POLYSPACE_NO_INSTRUMENT "va_end"
#pragma POLYSPACE_NO_INSTRUMENT "va_copy"

#else /* POLYSPACE_INSTRUMENT*/

extern void **__polyspace_vararg; /* just there to avoid compiling errors */
extern int _polyspace_vararg_position; extern volatile int _polyspace_vararg_p0;

#if !defined PST_BUG_FINDER
extern va_list __polyspace_va_arg_incr(va_list *);
/* __polyspace_vararg will be added by suif in replacement of '...' */
#define va_start(ap, name)	(void) (ap  = (va_list) __polyspace_vararg,\
                                        _polyspace_vararg_position=_polyspace_vararg_p0)
#define	va_arg(ap, mode)	(*((mode*)__polyspace_va_arg_incr((va_list *)ap)))
#define va_end(ap)		(void)(_polyspace_vararg_position=_polyspace_vararg_p0)
#define	va_copy(to, from)	((to) = (from))

#else /* defined PST_BUG_FINDER */
#ifdef __cplusplus
   #define PST_EXTERN extern "C"
#else
   #define PST_EXTERN extern
#endif
PST_EXTERN void __polyspace_va_arg_start(void);
PST_EXTERN void __polyspace_va_arg_copy(va_list ap);
PST_EXTERN va_list __polyspace_va_arg_incr(va_list *);
PST_EXTERN void __polyspace_va_arg_end(va_list ap);

#define va_start(ap, name)	(void) (__polyspace_va_arg_start(), \
                                        ap  = (va_list) __polyspace_vararg, \
                                        _polyspace_vararg_position=_polyspace_vararg_p0)
#define	va_arg(ap, mode)	(__polyspace_va_arg_incr((va_list *)ap), \
                                 *((mode*)((va_list *)ap)[_polyspace_vararg_position++]))
#define va_end(ap)		(__polyspace_va_arg_end(ap), \
                                 (void)(_polyspace_vararg_position=_polyspace_vararg_p0))

#define	__va_copy(to, from)       va_copy((to),(from))

#define	va_copy(to, from)	(__polyspace_va_arg_copy(from), \
                                 (to) = (from))


#endif /* defined PST_BUG_FINDER */

#endif /* ! POLYSPACE_INSTRUMENT */


#ifdef PST_GNU

/* disable gnu builtin */
#define __builtin_va_list      va_list
#define __builtin_stdarg_start va_start
#define __builtin_va_start     va_start
#define __builtin_va_arg       va_arg
#define __builtin_va_copy      va_copy
#define __builtin_va_end       va_end

#endif /* PST_GNU */


#endif /* _STDARG_H */
