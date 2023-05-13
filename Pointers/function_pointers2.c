#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);

int main()
{
    int array[N];
    init_array(array, N, 10, 20);
    print_array(array, N); 
}

void init_array(int *array, int n, int a, int b)
{
    srand(time(NULL));
    int i;

    for (i=0; i<n; i++)
        array[i] = a + rand() % (b - a + 1);
}

void print_array(int *array, int n)
{
    int i;
    printf("[");
    for (i=0; i<n-1; i++)
        printf("%d, ", array[i]);
    printf("%d]", array[n-1]);
}    
