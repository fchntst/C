#include <stdio.h>

void main()
{
    int a, div;

    printf("Enter an int: ");
    scanf("%d", &a);

    printf("Give the divisor: ");
    scanf("%d", &div);

    if (a % div == 0)
    {
        printf("%d is completely divisible by %d", a, div);
    }
    
    else
    {
        printf("%d is not completely divisible by %d", a, div);
    }
}