/* $Revision: 1.2.2.1 $ */
/*
	setjmp.h
*/

#ifndef _SETJMP_H_
#define _SETJMP_H_
#include "_ansi.h"
typedef long jmp_buf[18];
void	longjmp(jmp_buf __jmpb, int __retval);
int	_setjmp(jmp_buf __jmpb);
#define setjmp _setjmp

#endif /* _SETJMP_H_ */

