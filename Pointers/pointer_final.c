#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
void max_array(int *array, int n);

int main()
{
    int array[SIZE], N;
    int choice;
    int a, b;
    choice = 1;
    while (choice != 5)
    {
        printf("\n\nChoice Menu");
        printf("\n-------------");
        printf("\n1: Size of array");
        printf("\n2: Initial of the array");
        printf("\n3: Calculation of max");
        printf("\n4: Printing of the array");
        printf("\n5: Exit of the Program: ");
        printf("\nChoice?: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Give the size: ");
            scanf("%d", &N);

        }
        else if (choice == 2)
        {
            printf("Give start: ");
            scanf("%d", &a);
            printf("Give finish: ");
            scanf("%d", &b);
            init_array(array, N, a, b);
        }
        else if (choice == 3)
        {
            max_array(array, N);
        }
        else if (choice == 4)
        {
            print_array(array, N);
        }
        else if (choice == 5)
        {
            printf("Bye bye");
            break;
        }   
        
    }
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

void max_array(int *array, int n)
{
    int i;
    int max;

    max = array[0];
    for (i=1; i<n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    printf("\nThe max is: %d\n", max);
}




