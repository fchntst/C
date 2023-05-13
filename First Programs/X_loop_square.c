#include <stdio.h>

void main()
{
    int m, n;
    int i, j;

    m = 10;
    n = 20;

    i = 0;
    while (i <= m)
    {
        j = 0;
        while (j <= n)
        {
            printf("X");   
            j += 1;
        }
        
        printf("\n");
        i += 1;
    }
}
