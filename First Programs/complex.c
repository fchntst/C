#include <stdio.h>

void main()
{
    int x;
    int y;
    int t;
    printf("Enter values of 'A' and 'B' = ");
    scanf("%d %d", &x, &y);
    t = x;
    x = y;
    y = t;
    printf("A = %d B = %d", x, y);
}
