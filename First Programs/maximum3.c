#include <stdio.h>

void main()
{
    int x, y, z;

    printf("Give x: ");
    scanf("%d", &x);
    printf("Give y: ");
    scanf("%d", &y);
    printf("Give z: ");
    scanf("%d", &z);

    if (x>y)
    {
        if (x>z)
        {
            printf("x is maximum: %d", x);
        }
        else
        {
            printf("z is maximum: %d", z);
        }
    }
    else // here it's true that y >= x
    {
        if (y > z)
        {
            printf("y is maximum: %d", y);
        }
        else
        {
            printf("z is maximum: %d", z);
        }
    }
}   