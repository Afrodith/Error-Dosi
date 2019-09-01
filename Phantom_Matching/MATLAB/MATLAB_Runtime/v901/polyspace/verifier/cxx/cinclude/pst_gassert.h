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
 
/***********************************************
 * Pst_Global_Assert macro allows the user to
 * define the global assertion clauses.
 * 
 *  Pst_Global_Assert(No,Expr)
 *    No : assertion clause label (integer)     
 *    Expr : assertion expression (boolean)  
 *
 * Pst_Global_Assert_Routine(No, Braced_Stmts)  
 * allows the user to define a check block returning an
 * integer (boolean) type with non-zero (true) value 
 * meaning successful check, and zero (false) meaning 
 * assertion error.
 *
 * Remember that 
 *   Pst_Global_Assert(No, Expr) and  
 *   Pst_Global_Assert_Routine(No, {return (Expr);})
 *   are strictly equivalent.
 *
 ***********************************************
 */
#ifndef __PST_GASSERT_H__
#define __PST_GASSERT_H__

#define Pst_Global_Assert(No,Expr) \
extern int Pst_Global_Assert_##No(void) {return (Expr);}

#define Pst_Global_Assert_Routine(No,Blk) \
extern int Pst_Global_Assert_##No(void)##Blk

#endif

