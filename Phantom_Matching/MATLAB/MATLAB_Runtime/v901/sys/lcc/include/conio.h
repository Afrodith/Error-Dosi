/* $Revision: 1.2.2.1 $ */
#ifndef _LCC_CONIO
#define _LCC_CONIO
char *  _cgets(char *);
int _cprintf(char *, ...);
int _cputs(char *);
int _cscanf(char *, ...);
#define cprintf _cprintf
#define cputs _cputs
#define cscanf _cscanf
int _getch(void);
int  _getche(void);
int _np(unsigned short);
unsigned short inpw(unsigned short);
unsigned long  inpd(unsigned short);
int _kbhit(void);
int _outp(unsigned short, int);
unsigned short _outpw(unsigned short, unsigned short);
unsigned long _outpd(unsigned short, unsigned long);
int _inp(unsigned short i);
unsigned short _inpw(unsigned short i);
unsigned long _inpd(unsigned short i);
int _putch(int);
int _ungetch(int);
#define getch	_getch
#define getche	_getche
#define kbhit	_kbhit
#define putch	_putch
#define ungetch _ungetch
#endif
