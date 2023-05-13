#include <stdio.h>
#include <time.h>

/* 
    double difftime(time t later, time t earlier)

    clock_t clock(void)

    CLOCKS_PER_SEC
*/

void main()
{
    int i;
    clock_t t;
    t = clock();

    printf("Cycles: %ld\n", t);
    printf("Cycles per seconds: %ld\n", CLOCKS_PER_SEC);
    printf("Time from the start: %f\n", (float)t/CLOCKS_PER_SEC);
}
