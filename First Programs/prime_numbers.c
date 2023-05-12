#include <stdio.h>

void main()
{
    int i, x, y = 0;
    printf("enter a number: ");
    scanf("%d", &x);

    for (i= 2; i < x; i++)
    {
        if (x % i == 0)
        {
            y++;
        }
    }
    if (y == 0)
    {
        printf("\n%d is prime number", x);
    }
    else
    {
        printf("\n%d is not prime number", x);
    }
}