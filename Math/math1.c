#include <stdio.h>
#include <math.h>

// math functions: 
/* 
    double pow(double x, double y) = x^y
    double exp(double x) = e^x
    double frexp(double x, int *y) =>
    => it returns that 0.5<r<1 and y =>
    => where x = r * 2^y
    double ldexp(double x, int y) =>
    => it returns x * 2^y
*/

void main()
{
    double x, r;
    int y;

    for(x=0; x<15; x += 0.5)
    {
        r = frexp(x, &y);
        printf("\n %.2f = %.2f * 2^%d", x, r, y);
    }
    printf("\n");
}
