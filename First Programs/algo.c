#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[1000];
    int i, sum = 0;

    for(i=0; i<20; i++)
        array[i] = rand() % 100;
    
    for(i=0; i<20; i++)
    {
        sum += array[i];
        printf("The sum of the array is: %d\n", sum);
    }
    
    return 0;
}
