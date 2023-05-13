#include <stdio.h>
#include <math.h>

// log functions:
/*
    double log(double x) = lnx
    double log10(x) = logx with base: 10

    if we want the log with base 2:
    we just do this: logx / log2

    sqrt function: 
    double sqrt(double x)

*/

void main()
{
    double x = 2.0;
    double y, r;

    r = sqrt(x);
    printf("sqrt(%.2f) = %.2f", x, r);

    for(y=1; y<10; y +=1.0)
    {
        r = pow(x, 1/y);
        printf("\n %.2f^(1/%.2f) = %.2f", x, y, r);
    }
    printf("\n");
}
