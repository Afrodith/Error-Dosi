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
   Polyspace VxWorks includes problems solver.
   
   pst-vxworks.h
   
   This include aims at doing the necessary defines or typedef to
   prevent most compilation problems with VxWorks includes.
   
   It is meant to be upgraded when facing with new troubles.

   This file is automaticaly included in top of each C file by option -OS-target vxworks.
*/

/* define incomplete prototype of arpa/inet.h */
#ifdef __cplusplus
extern "C" unsigned long inet_addr(char *);
#endif
