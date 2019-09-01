/*
 *
 * This file and its contents are the property of The MathWorks, Inc.
 * 
 * This file contains confidential proprietary information.
 * The reproduction, distribution, utilization or the communication
 * of this file or any part thereof is strictly prohibited.
 * Offenders will be held liable for the payment of damages.
 *
 * Copyright 1999-2011 The MathWorks, Inc.
 *
 */
 
/* 
   Polyspace macros for transformation of backward gotos into forward gotos.

   pstgoto.h
*/

#ifndef TRANSLATE_BACKWARD_TO_FORWARD
#define TRANSLATE_BACKWARD_TO_FORWARD

#define GOTO(X) {__pst_goto__##X = 1; goto __pst_loop__##X;}

#define USE_1_GOTO(X) \
{ int __pst_goto__##X=0;\
while(1) {\
if (__pst_goto__##X) {__pst_goto__##X=0; goto X;}
 
#define EXIT_1_GOTO(X)  \
__pst_loop__##X: \
if (__pst_goto__##X)continue; \
break; \
} }

#define USE_2_GOTO(X,Y) \
{ int __pst_goto__##X=0,__pst_goto__##Y=0; \
while(1){ \
 if (__pst_goto__##X) {__pst_goto__##X=0; goto X;} \
 if (__pst_goto__##Y) {__pst_goto__##Y=0; goto Y;}
 
#define EXIT_2_GOTO(X,Y)  \
__pst_loop__##X: __pst_loop__##Y: \
if (__pst_goto__##X||__pst_goto__##Y) continue; \
break; \
} }

#define USE_3_GOTO(X,Y,Z) \
{ int __pst_goto__##X=0,__pst_goto__##Y=0,__pst_goto__##Z=0; \
while(1){\
 if (__pst_goto__##X) {__pst_goto__##X=0; goto X;} \
 if (__pst_goto__##Y) {__pst_goto__##Y=0; goto Y;} \
 if (__pst_goto__##Z) {__pst_goto__##Z=0; goto Z;}
 
#define EXIT_3_GOTO(X,Y,Z)  \
__pst_loop__##X: __pst_loop__##Y: __pst_loop__##Z: \
if (__pst_goto__##X||__pst_goto__##Y||__pst_goto__##Z) continue; \
break; \
} }

#define USE_4_GOTO(X,Y,Z,W) \
{ int __pst_goto__##X=0,__pst_goto__##Y=0,__pst_goto__##Z=0,__pst_goto__##W=0; \
while(1){ \
 if (__pst_goto__##X) {__pst_goto__##X=0; goto X;} \
 if (__pst_goto__##Y) {__pst_goto__##Y=0; goto Y;} \
 if (__pst_goto__##Z) {__pst_goto__##Z=0; goto Z;} \
 if (__pst_goto__##W) {__pst_goto__##W=0; goto W;}
 
#define EXIT_4_GOTO(X,Y,Z,W) \
__pst_loop__##X: __pst_loop__##Y: __pst_loop__##Z: __pst_loop__##W: \
if (__pst_goto__##X||__pst_goto__##Y||__pst_goto__##Z||__pst_goto__##W) continue; \
break; \
} }

#define USE_5_GOTO(X,Y,Z,W,V) \
{ int __pst_goto__##X=0,__pst_goto__##Y=0,__pst_goto__##Z=0,__pst_goto__##W=0,__pst_goto__##V=0; \
while(1){ \
 if (__pst_goto__##X) {__pst_goto__##X=0; goto X;} \
 if (__pst_goto__##Y) {__pst_goto__##Y=0; goto Y;} \
 if (__pst_goto__##Z) {__pst_goto__##Z=0; goto Z;} \
 if (__pst_goto__##W) {__pst_goto__##W=0; goto W;} \
 if (__pst_goto__##V) {__pst_goto__##V=0; goto V;}
 
#define EXIT_5_GOTO(X,Y,Z,W,V) \
__pst_loop__##X: __pst_loop__##Y: __pst_loop__##Z: __pst_loop__##W: __pst_loop__##V: \
if (__pst_goto__##X||__pst_goto__##Y||__pst_goto__##Z||__pst_goto__##W||__pst_goto__##V) continue; \
break; \
} }

#endif

