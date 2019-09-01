/* $Revision: 1.2.2.1 $ */
#ifndef __PROCESS_H_
#define __PROCESS_H_
int _execl(const char *path, const char *argv0, ...);
int _execle(const char *path, const char *argv0, ... /*, char * const *envp */);
int _execlp(const char *path, const char *argv0, ...);
int _execlpe(const char *path, const char *argv0, ... /*, char * const *envp */);
int _execv(const char *path, char * const *argv);
int _execve(const char *path, char * const *argv, char * const *envp);
int _execvp(const char *path, char * const *argv);
int _execvpe(const char *path, char * const *argv, char * const *envp);
#define execl _execl
#define execle _execle
#define execlp _execlp
#define execlpe _execlpe
#define execv _execv
#define execve _execve
#define execvp _execvp
#define execvpe _execvpe

int _spawnl(int mode, const char *path, const char *argv0, ...);
int _spawnle(int mode, const char *path, const char *argv0, ... /*, char * const *envp */);
int _spawnlp(int mode, const char *path, const char *argv0, ...);
int _spawnlpe(int mode, const char *path, const char *argv0, ... /*, char * const *envp */);
int _spawnv(int mode, const char *path, char * const *argv);
int _spawnve(int mode, const char *path, char * const *argv, char * const *envp);
int _spawnvp(int mode, const char *path, char * const *argv);
int _spawnvpe(int mode, const char *path, char * const *argv, char * const *envp);
#define spawnl _spawnl
#define spawnle _spawnle
#define spawnlp _spawnlp
#define spawnlpe _spawnlpe
#define spawnv _spawnv
#define spawnve _spawnve
#define spawnvp _spawnvp
#define spawnvpe _spawnvpe
#define P_WAIT		0
#define P_NOWAIT	1
#define P_OVERLAY	2
#define P_DETACH	4
#define WAIT_CHILD 0
#define _P_WAIT P_WAIT
#define _P_NOWAIT P_NOWAIT
#define _P_OVERLAY _P_OVERLAY
#define beginthread _beginthread
#define endthread _endthread
unsigned long  _beginthread (void ( *) (void *), unsigned, void *);
void _endthread(void);
#endif


