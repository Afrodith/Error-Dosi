/* Copyright 2014 The MathWorks, Inc. */

#ifndef _HOST_ICOUNT_GLNXA64_H_
#define _HOST_ICOUNT_GLNXA64_H_

#include "rtwtypes.h"

/* rtwtypes.h may not provide a typedef for uint64_T. We must detect this case
 * and provide the typedef. */
#ifndef MAX_uint64_T
#define UINT64_T unsigned long
# if defined(__GNUC__) && \
    ((__GNUC__ > 2) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >=9)))
  __extension__
# endif
 typedef UINT64_T uint64_T;
#endif


static uint64_T get_hw_count(int event);
uint64_T hwcount_totinstr_glnxa64(void);
uint64_T hwcount_totcyc_glnxa64(void);
uint64_T hwcount_floatinsts_glnxa64(void);
uint64_T hwcount_floatops_glnxa64(void);
uint64_T hwcount_intinstr_glnxa64(void);
uint64_T hwcount_loadinstr_glnxa64(void);
uint64_T hwcount_storeinstr_glnxa64(void);

#endif
