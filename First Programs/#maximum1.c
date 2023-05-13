// maximum of 3 integers 

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

    if (x > y && x > z)
    {
        printf("\nx is maximum: %d", x);
    }
    else if (y > x && y > z)
    {
        printf("\ny is maximum: %d", y);
    }
    else if (z == y && x == y)
    {
        printf("x, y and z are equal");
    }
    else
    {
        printf("\nz is maximumu: %d", z);
    }
}
