#include <stdio.h>

void main()
{
    int i, s, f;
    printf("give a number: ");
    scanf("%d", &s);

    for (i = 1; i <= s; i++)
    {
        f  = i * s;
    }
    printf("\n%d! = %d", s, f);
}