#include <stdio.h>

void main()
{
    int i, j;

    i = 0;
    do
    {
        j = i;
        do
        {
            printf("X");
            j += 1;
        } 
        while (j < 10);
        
        printf("\n");
        i += 1;
    } 
    while (i < 10);
}
