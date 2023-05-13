#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
    int array[SIZE];
    int i, n;

    do {
        printf("Give a number from 20 to 100: ");
        scanf("%d", &n);
    } while (n<20 || n>100);

    srand(time(NULL));

    for (i=0; i<n; i++)
        array[i] = rand() % 1000;

    printf("[");
    for (i=0; i<(n-1); i++)
        printf("%d, ", array[i]);
    printf("%d]", array[n-1]);
}