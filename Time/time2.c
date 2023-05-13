#include <stdio.h>
#include <time.h>

/* 
    char 8asctime(struct tm *ptr)

    char *ctime(time_t *ptr)

    in both cases they return a string
    which one?
    this one: Wed Jul 12:11:15 2021
    for example....
*/

void main()
{
    time_t t;
    t = time(0);

    printf("%s", ctime(&t));
}
