#include <stdio.h>

void main()
{
    int i, j;
    int n;

    n = 10;

    for (i = 0; i <= 10; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}
