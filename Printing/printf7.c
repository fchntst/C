#include <stdio.h>

void main()
{
    int i, j;
    int k;

    for (i=5; i>0; i--)
    {
        for (k=0; k<3; k++)
        {
            for (j=0; j<i; j++)
                printf("%d", j);
            for (j=0; j<5-i; j++)
                printf(" ");

            for (j=0; j<5-i; j++)
                printf(" ");
            for (j=i; j>0; j--)
                printf("%d", j);
        }
        printf("\n");
    }
}
