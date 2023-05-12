#include <stdio.h>
#define SIZE 5


void main()
{
    int n;
    int i;
    int sum;
    int array[SIZE];
    int average;
    
    printf("Give n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        do
        {
            printf("Give the %d number: ", i + 1);
            scanf("%d", &array[i]);

        } while (array[i] < 0 || array[i] > 10);
    }

    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }

    average = sum / n;

    printf("The Average is: %d", average);

}