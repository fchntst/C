#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, x1, x2;
    float discriminant;
    float realpart;
    float imaginarypart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0)
    {
        x1 = -b + sqrt(discriminant)/(2*a);
        x2 = -b - sqrt(discriminant)/(2*a);
        printf("The Roots are x1=%f, x2=%f", x1, x2);
    }
    else if (discriminant == 0)
    {
        realpart = -b / (2*a);
        printf("The realpart root is: %f", realpart);
    }
    else
        printf("Impossible!");

}
