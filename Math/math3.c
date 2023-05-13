#include <stdio.h>
#include <math.h>

/* 
    double floor(double x) = patoma
    double ceil(double x) = tavani

*/

void main()
{
    double x;

    x = 1.2;
    printf("\n x = %.2f: floor = %.2f, ceil = %.2f", x, floor(x), ceil(x));

    x = 1.5;
    printf("\n x = %.2f: floor = %.2f, ceil = %.2f", x, floor(x), ceil(x));

    x = 2.0;
    printf("\n x = %.2f: floor = %.2f, ceil = %.2f", x, floor(x), ceil(x));

    printf("\n");
}

