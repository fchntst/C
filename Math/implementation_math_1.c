#include <stdio.h>
#include <math.h>

void main()
{
    float x;
    float y;

    printf("Give a float number: ");
    scanf("%f", &x);

    y = 1 / (1 + exp(-x));

    printf("Answer: f(x) = 1 / (1+exp(-x)) = %f", y);
}
