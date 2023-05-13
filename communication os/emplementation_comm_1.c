// diavazei apo ta orismata grammis entolis ekeraious arithmous 
// it means to use this: main(int argc, char *argv[])

#include <stdio.h>
#include <stdlib.h>

void print_array(int *pinakas, int n);
void insertion_sort(int *pinakas, int n);
void swap(int *a, int *b);

int main(int argc, char *argv[])
{
    int *array;
    int N, i;

    N = argc-1;

    array = malloc(sizeof(int)*N);
    if(!array)
    {
        printf("Unable to lock memory!");
        exit(0);
    }

    for(i=0; i<N; i++)
        array[i] = atoi(argv[i+1]);

    printf("First array: ");
    print_array(array, N);

    printf("\nSorted array: ");
    insertion_sort(array, N);
}

void print_array(int *pinakas, int n)
{
    int i;

    printf("[");
    for(i=0; i<n-1; i++)
        printf("%2d, ", pinakas[i]);
    printf("%2d]", pinakas[n-1]);
}

void insertion_sort(int *pinakas, int n)
{
    int i, j;
    
    for(i=1; i<n; i++)
    {
        if(pinakas[j] < pinakas[j-1])
            swap(&pinakas[j], &pinakas[j-1]);
        else
            break;
    }
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}