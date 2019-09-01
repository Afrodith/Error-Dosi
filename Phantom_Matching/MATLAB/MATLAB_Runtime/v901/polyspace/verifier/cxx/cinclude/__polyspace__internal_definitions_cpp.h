# 1 "__polyspace__internal_definitions_cpp.h" 1
/*
 *
 * This file and its contents are the property of The MathWorks, Inc.
 * 
 * This file contains confidential proprietary information.
 * The reproduction, distribution, utilization or the communication
 * of this file or any part thereof is strictly prohibited.
 * Offenders will be held liable for the payment of damages.
 *
 * Copyright 1999-2013 The MathWorks, Inc.
 *
 */

/*
  Polyspace internal definitions.

  __polyspace__internal_definitions_cpp.h

  Those declarations will be inserted on front of each preprocessed file, after the preprocessing,
  to prevent any change (with -D) of the types defined here. (C/8361)

  WARNING: as this file will not be preprocessed, it must not contain any preprocessing directive.
*/

/* Predeclare errno. Macros that would define errno will be deactivated */
extern "C" int errno;

/*
 * Simulate Infinity values : HUGE_VAL/ HUGE_VALF/ HUGE_VALL
 */

extern "C" volatile double      HUGE_VAL;
extern "C" volatile float       HUGE_VALF;
extern "C" volatile long double HUGE_VALL;

/*
 * FD_ISSET macro defined as stubbed function (see macros_to_deactivate.txt
 * and __polyspace__stdstubs.c). The 2nd argument is defined with 'void *' 
 * instead of 'fd_set *' which needs including non-ANSI C specified file 
 * <sys/time.h> (in fact, the conversion from 'fd_set *' to 'void *' is
 * implicite for all calls to FD_ISSET).
 */
extern "C" int FD_ISSET(int fd, const void *fdset);

/*
 * Internal polyspace variable declarations.
*/
extern "C" void **__polyspace_vararg;
extern "C" int __polyspace_nb_varargs;
