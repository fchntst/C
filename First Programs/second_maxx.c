#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

void random_array(int n, int *array);
void print_array(int n, int *array);
void max_array(int *array, int n);

void main()
{
    int n;
    int array[SIZE];

    system("cls");
    printf("Give a number: ");
    scanf("%d", &n);

    random_array(n, array);
    print_array(n, array);
    max_array(array, n);

}

void random_array(int n, int *array)
{
    int i;
    srand(time(NULL));

    for(i=0; i<n; i++)
        array[i] = rand() % 101;
}

void print_array(int n, int *array)
{
    int i;

    printf("This is the list: ");
    printf("[");
    for(i=0; i<n-1; i++)
        printf("%d, ", array[i]);
    printf("%d]", array[n-1]);

}

void max_array(int *array, int n)
{
    int max;
    int max2;
    int i;
    
    if(array[0] > array[1])
    {
        max = array[0];
        max2 = array[1];
    }
    else
    {
        max = array[1];
        max2 = array[0];
    }

    for(i=2; i<n; i++)
    {
        if(array[i] > max)
        {
            max2 = max;
            max = array[i];
        }
        else if(array[i] > max2)
            max2 = array[i];
        
    }
    
    printf("\nFirst max: %d", max);
    printf("\nSecond Max: %d", max2);
}
