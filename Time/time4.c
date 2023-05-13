#include <stdio.h>
#include <time.h>
#define N 1000000000

void main()
{
    clock_t c1, c2;
    long i;

    c1 = clock();

    for(i=1; i<=N; i++);
   
    c2 = clock();
    
    printf("Me time: Start = %ld, End = %ld, Time = %.3f",
            c1, c2, (float)(c2-c1)/ CLOCKS_PER_SEC);
}
 