/* $Revision: 1.2.2.1 $ */
#ifndef _MBSTRING
#define _MBSTRING
#ifndef _VA_LIST_DEFINED
typedef char *	va_list;
#define _VA_LIST_DEFINED
#endif
unsigned int _mbbtombc(unsigned int);
#define mbbtombc _mbbtombc
int _mbbtype(unsigned char, int);
#define mbbtype _mbbtype
unsigned int _mbctombb(unsigned int);
#define mbctombb _mbctombb
int _mbsbtype(unsigned char *, int);
#define mbsbtype _mbsbtype
unsigned char * _mbscat(unsigned char *, unsigned char *);
unsigned char * _mbschr(unsigned char *, unsigned int);
int _mbscmp(unsigned char *, unsigned char *);
int _mbscoll(unsigned char *, unsigned char *);
unsigned char * _mbscpy(unsigned char *, unsigned char *);
int _mbscspn(unsigned char *, unsigned char *);
unsigned char * _mbsdec(unsigned char *, unsigned char *);
unsigned char * _mbsdup(unsigned char *);
int _mbsicmp(unsigned char *, unsigned char *);
int _mbsicoll(unsigned char *, unsigned char *);
unsigned char * _mbsinc(unsigned char *);
int _mbslen(unsigned char *);
unsigned char * _mbslwr(unsigned char *);
unsigned char * _mbsnbcat(unsigned char *, unsigned char *, int);
int _mbsnbcmp(unsigned char *, unsigned char *, int);
int _mbsnbcoll(unsigned char *, unsigned char *, int);
int _mbsnbcnt(unsigned char *, size_t);
unsigned char * _mbsnbcpy(unsigned char *, unsigned char *, int);
int _mbsnbicmp(unsigned char *, unsigned char *, int);
int _mbsnbicoll(unsigned char *, unsigned char *, int);
unsigned char * _mbsnbset(unsigned char *, unsigned int, int);
unsigned char * _mbsncat(unsigned char *, unsigned char *, int);
int _mbsnccnt(unsigned char *, size_t);
int _mbsncmp(unsigned char *, unsigned char *, int);
int _mbsncoll(unsigned char *, unsigned char *, int);
unsigned char * _mbsncpy(unsigned char *, unsigned char *, int);
unsigned int _mbsnextc (unsigned char *);
int _mbsnicmp(unsigned char *, unsigned char *, int);
int _mbsnicoll(unsigned char *, unsigned char *, int);
unsigned char * _mbsninc(unsigned char *, int);
unsigned char * _mbsnset(unsigned char *, unsigned int, int);
unsigned char * _mbspbrk(unsigned char *, unsigned char *);
#define mbspbrk _mbspbrk
unsigned char * _mbsrchr(unsigned char *, unsigned int);
#define mbsrchr _mbsrchr
unsigned char * _mbsrev(unsigned char *);
#define mbsrev _mbsrev
unsigned char * _mbsset(unsigned char *, unsigned int);
#define mbsset _mbsset
int _mbsspn(unsigned char *, unsigned char *);
#define mbsspn _mbsspn
unsigned char * _mbsspnp(unsigned char *, unsigned char *);
#define mbsspnp _mbsspnp
unsigned char * _mbsstr(unsigned char *, unsigned char *);
#define mbsstr _mbsstr
unsigned char * _mbstok(unsigned char *, unsigned char *);
#define mbstok _mbstok
unsigned char * _mbsupr(unsigned char *);
#define mbsupr _mbsupr
int _mbclen(unsigned char *);
void _mbccpy(unsigned char *, unsigned char *);
#define _mbccmp(_cpc1, _cpc2) _mbsncmp((_cpc1),(_cpc2),1)
int _ismbcalnum(unsigned int);
int _ismbcalpha(unsigned int);
int _ismbcdigit(unsigned int);
int _ismbcgraph(unsigned int);
int _ismbclegal(unsigned int);
int _ismbclower(unsigned int);
int _ismbcprint(unsigned int);
int _ismbcpunct(unsigned int);
int _ismbcspace(unsigned int);
int _ismbcupper(unsigned int);
unsigned int _mbctolower(unsigned int);
unsigned int _mbctoupper(unsigned int);
int _ismbblead( unsigned int );
int _ismbbtrail( unsigned int );
int _ismbslead( unsigned char *, unsigned char *);
int _ismbstrail( unsigned char *, unsigned char *);
unsigned int _mbcjistojms(unsigned int);
unsigned int _mbcjmstojis(unsigned int);
unsigned int _mbctohira(unsigned int);
unsigned int _mbctokata(unsigned int);
#endif	/* _MBSTRING */
