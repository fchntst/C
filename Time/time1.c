#include <stdio.h>
#include <time.h>
/* 
    struct tm *localtime(time_t *ptr)

    time_t mktime(struct tm *ntime)

    struct tm{
        int tm_sec; seconds
        int tm_min; minutes
        int tm_hour; hours
        int tm_mday; day of current month
        int tm_mon; month
        int tm_year; year (start from 1900.)
        int tm_wday; days since sunday (for example monday = 1)
        int tm_yday; day since 01.01 (for example 33 = 02.02)
        int tm_isdst; flag if the current hour has light
    }
*/
void main()
{
    time_t t;
    struct tm *now;
    t = time(0);

    now = localtime(&t);
    printf("%d:%d:%d\n", now->tm_hour, now->tm_min, now->tm_sec);
    printf("%d:%d:%d\n", now->tm_mday, now->tm_mon, now->tm_year);
}
