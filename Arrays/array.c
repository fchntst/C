#include <stdio.h>
#define SIZE 10
void main()
{
    int i;
    int array[SIZE];
    int sum;
    
    for (i = 0; i <= SIZE; i++)
    {
        printf("give the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum = sum + array[i];
    }

    printf("The sum is: %d", sum);  
}
 
