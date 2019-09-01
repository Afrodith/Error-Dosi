#ifndef _INCLUDE_IO
#define _INCLUDE_IO
#include <sys\stat.h>
struct _finddata_t {
    unsigned	attrib;
    unsigned long	time_create;	/* -1 for FAT file systems */
    unsigned long	time_access;	/* -1 for FAT file systems */
    unsigned long	time_write;
    unsigned long	size;
    char	name[260];
};


struct _wfinddata_t {
    unsigned	attrib;
    unsigned long	time_create;	/* -1 for FAT file systems */
    unsigned long	time_access;	/* -1 for FAT file systems */
    unsigned long	time_write;
    unsigned long	size;
    unsigned short	name[260];
};


#define _A_NORMAL	0x00	/* Normal file */
#define _A_RDONLY	0x01	/* Read only file */
#define _A_HIDDEN	0x02	/* Hidden file */
#define _A_SYSTEM	0x04	/* System file */
#define _A_SUBDIR	0x10	/* Subdirectory */
#define _A_ARCH 	0x20	/* Archive file */


int  _access(const char *, int);
#define access _access

int  _chmod(const char *, int);
#define chmod _chmod
int  _chsize(int, long);
#define chsize _chsize

int  _close(int);
#define close _close

int  _commit(int);
int  _creat(const char *, int);
#define creat _creat

int  _dup(int);
#define dup _dup
int  _dup2(int, int);
#define dup2 _dup2

int  _eof(int);
#define eof _eof

long  _filelength(int);
#define filelength _filelength

long  _findfirst(char *, struct _finddata_t *);
int  _findnext(long, struct _finddata_t *);
int  _findclose(long);
int  _isatty(int);
#define isatty _isatty

int  _locking(int, int, long);
#define locking _locking

long  _lseek(int, long, int);
#define lseek _lseek

char *  _mktemp(char *);
#define mktemp _mktemp

int _open(const char *,int,...);
#define open _open

int  _pipe(int *, unsigned int, int);
int  _read(int, void *, unsigned int);
#define read _read

int  remove(char *);
int  rename(char *, char *);
int  _setmode(int, int);
#define setmode _setmode

int  _sopen(const char *, int, int, ...);
#define sopen _sopen

long  _tell(int);
#define tell _tell

int  _umask(int);
#define umask _umask

int  _unlink(char *);
int  _write(int, const void *, unsigned int);
#define write _write


int  _waccess(const unsigned short *, int);
int  _wchmod(const unsigned short *, int);
int  _wcreat(const unsigned short *, int);
long  _wfindfirst(unsigned short *, struct _wfinddata_t *);
int  _wfindnext(long, struct _wfinddata_t *);
int  _wunlink(const unsigned short *);
int  _wrename(const unsigned short *, const unsigned short *);
int  _wopen(const unsigned short *, int, ...);
int  _wsopen(const unsigned short *, int, int, ...);
unsigned short *  _wmktemp(unsigned short *);

long  _get_osfhandle(int);
int  _open_osfhandle(long, int);
#define get_osfhandle _get_osfhandle
#define open_osfhandle _open_osfhandle


int  access(const char *, int);
int  chmod(const char *, int);
int  chsize(int, long);
int  close(int);
int  creat(const char *, int);
int  dup(int);
int  dup2(int, int);
int  eof(int);
long  filelength(int);
int  isatty(int);
int  locking(int, int, long);
long  lseek(int, long, int);
char *  mktemp(char *);
int  open(const char *, int, ...);
int  read(int, void *, unsigned int);
int  setmode(int, int);
int  sopen(const char *, int, int, ...);
long  tell(int);
int  umask(int);
int  write(int, const void *, unsigned int);
int _stdcall _lclose(int);
int _stdcall _lopen(const char *,int);
unsigned int _stdcall _lwrite(int,const char *,unsigned int);
unsigned int _stdcall _lread(int,void *,unsigned int);
#endif	/* _INCLUDE_IO */
