// find the maximum integer

#include <stdio.h>

void main()
{
    int x;
    int y;

    printf("Give x: ");
    scanf("%d", &x);
    printf("Give y: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("x is maximum: %d", x);
    }
    else if (x == y)
    {
        printf("x and y are equal");
    }
    else
    {
        printf("y is maximum: %d", y);
    }
}
