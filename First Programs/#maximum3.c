#include <stdio.h>

void main()
{
    int x, y, z;
    int max;

    printf("Give x: ");
    scanf("%d", &x);
    printf("Give y: ");
    scanf("%d", &y);
    printf("Give z: ");
    scanf("%d", &z);

    max = x;
    
    if (y > max && y > z)
    {
        max = y;
        printf("y is max: %d", max);
    }
    else if (z > max)
    {
        max = z;
        printf("z is max: %d", max);
    }
    else 
    {
        printf("x is max: %d", max);
    }
}
