#include <stdio.h>

void main()
{
    int array[2][2] = {{1, 5}, {5, 7}};

    int i = 0, j = 0;
    int adder = 0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            adder += array[i][j]; 
    }

    printf("%d", adder);
}
