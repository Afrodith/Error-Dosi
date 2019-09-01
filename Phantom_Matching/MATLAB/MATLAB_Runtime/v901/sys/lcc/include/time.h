/* $Revision: 1.2.2.1 $ */
/* time.h Struct and function declarations for dealing with time. */
#ifndef _TIME_H_
#define _TIME_H_
typedef unsigned long clock_t;
#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
typedef unsigned long time_t;
#endif
#define CLOCKS_PER_SEC 1000		/* Machine dependent */
#define _TIME_T_DEFINED
struct tm
{
  int	tm_sec;
  int	tm_min;
  int	tm_hour;
  int	tm_mday;
  int	tm_mon;
  int	tm_year;
  int	tm_wday;
  int	tm_yday;
  int	tm_isdst;
};
#ifdef  _MW_DEFINE_FOR_CODE_METRICS_C99_COMPATIBILITY_
clock_t clock(void);
double	   difftime(time_t _time2, time_t _time1);
time_t mktime(struct tm *_timeptr);
time_t time(clock_t *_timer);
char	  *ctime(const time_t *_time);
struct tm *gmtime(const time_t *_timer);
struct tm *localtime(const time_t *_timer);
#else
unsigned int clock(void);
double	   difftime(unsigned int _time2, unsigned int _time1);
unsigned int mktime(struct tm *_timeptr);
unsigned int time(clock_t *_timer);
char	  *ctime(time_t *_time);
struct tm *gmtime(const unsigned int *_timer);
struct tm *localtime(const unsigned int *_timer);
#endif
char	  *asctime(const struct tm *_tblock);
unsigned int   strftime(char *_s, unsigned long _maxsize, char *_fmt, struct tm *_t);
char	  *_asctime_r(struct tm *_tblock, void *_p);
extern int _daylight;
extern int *(_imp___daylight);
#define _daylight *(_imp___daylight)
extern long _timezone;
extern long *(_imp___timezone);
#define _timezone *(_imp___timezone)
extern char *_tzname[2];
extern char **(_imp___tzname)[2];
#define _tzname *(_imp___tzname)
#endif /* _TIME_H_ */
