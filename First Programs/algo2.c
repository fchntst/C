#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[1000];
    int i, prod = 1;

    for(i=1; i<=20; i++)
        array[i] = rand() % 3 + 1;
    
    for(i=1; i<=10; i++)
        prod *= array[i];
    
    printf("The production of the array is: %d\n", prod);
    return 0;
}
 