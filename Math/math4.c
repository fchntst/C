#include <stdio.h>
#include <math.h>

/* 
    int abs(int x) = absolute(x)

    double fabs(double x)
    the second function is not common
    used.

    double modf(double x, double *y)
    it returns x = y + r 
    which r equals to x, and y to *y

    double fmod(double x, double y)
    it return the real part of the x/y
    This one is not so common used.
    It depends on what you're working on tho.
*/

void main()
{
    double x;
    double r, y;

    for(x=0.0; x<5.0; x += 0.6)
    {
        r = modf(x, &y);
        printf("\n%.2f = %.2f + %.2f", x, y, r);
    }
    printf("\n");
}

// this one is good.
