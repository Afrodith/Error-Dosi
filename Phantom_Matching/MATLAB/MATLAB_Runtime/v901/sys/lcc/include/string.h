/* $Revision: 1.2.2.1 $ */
/* string.h * Definitions for memory and string functions.  */
#ifndef _STRING_H_DEFINED_
#define	_STRING_H_DEFINED_
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef int size_t;
#endif
#ifndef NULL
#define NULL 0L
#endif
void *	 memchr(const void *, int, size_t);
int 	 memcmp(const void *, const void *, size_t);
void * 	 memcpy(void *, const void *, size_t);
void *	 memmove(void *, const void *, size_t);
void *	 memset(void *, int, size_t);
char 	*strcat(char *, const char *);
char 	*strchr(const char *, int);
int	 strcmp(const char *, const char *);
int	 strcoll(const char *, const char *);
#if __LCCOPTIMLEVEL > 0
char * _stdcall strcpy(char *,const char *);
#else
char 	* strcpy(char *, const char *);
#endif
size_t	 strcspn(const char *, const char *);
char    *_strupr(char *);
char    *_strlwr(char *);
#define strupr _strupr
#define strlwr _strlwr

char 	*strerror(int);
size_t	 strlen(const char *);
char 	*strncat(char *, const char *, size_t);
int	 strncmp(const char *, const char *, size_t);
char 	*strncpy(char *, const char *, size_t);
char 	*strpbrk(const char *, const char *);
char 	*strrchr(const char *, int);
size_t	 strspn(const char *, const char *);
char 	*strstr(const char *, const char *);
char 	*strtok(char *, const char *);
void *	 _memccpy(void *, const void *, int, size_t);
#define memccpy _memccpy

int	 _strcmpi(const char *, const char *);
char 	*_strdup(const char *);
int	 _strnicmp(const char *, const char *, size_t);
void	 _swab(const char *, char *, size_t);
#define strcmpi _strcmpi
#define strdup _strdup
#define strnicmp _strnicmp
#define swab _swab

#endif /* _STRING_H_DEFINED_ */
