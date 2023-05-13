#include <stdio.h>
#include <math.h>
#define PI 3.1415

// trigonometry
// it's defined all these: 
/*  double sin(double x)
    double cos(double x)
    double tan(double x)
    double asin(double x)
    double acos(double x)
    double atan(double x)
    double sinh(double x)
    double cosh(double x)
    double tanh(double x)
*/

// but only for now, let's start with
// things we only know

void main()
{
    int i;
    double v;

    

    for(i=0; i<4; i++)
    {
        v = i * (PI/2);

        printf("\nThe sin of %d * PI/2 = %2f", i, sin(v));
        printf("\nThe cos of %d * PI/2 = %2f", i, cos(v));
        printf("\nThe tan of %d * PI/2 = %2f", i, tan(v));
        printf("\n=====================\n");
    }
}   

