#include <stdio.h>
#define SIZE 5

void main()
{
    int i;
    int array[SIZE];
    int prod;

    for (i= 0; i < SIZE; i++)
    {
        
        do
        {
            printf("Give the %d number: ", i + 1);
            scanf("%d", &array[i]);
        }
        while (array[i] < 1 || array[i] > 8);
    
    }

    prod = 1;
    
    for (i = 0; i < SIZE; i++)
    {
        prod = prod * array[i];
    }
    printf("the prod is %d", prod);
    
}
