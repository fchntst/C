#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define N 20

int max_sec_max(int *array);

int main()
{
    int array[SIZE];
    int i;

    for(i=0; i<N; i++)
        array[i] = rand() % 100+1;
    
    printf("[");
    for(i=0; i<20; i++)
        printf("%d, ", array[i]);  
    printf("]\n");

}

int max_sec_max(int *array)
{

}