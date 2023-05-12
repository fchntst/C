#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int i, N;

    system("cls");

    // Printing the message and giving the size of the array
    printf("Give the size of the array: ");
    scanf("%d", &N);

    // Dynamic Memory Allocation
    array = malloc(sizeof(int)*N);
    if(array == NULL)
    {
        printf("Unable to lock memory");
        exit(0);
    }

    // Initialization of the array;
    for(i=0; i<N; i++)
    {
        array[i] = (i+N)/2;
        printf("\narray[%d] = %d", i, array[i]);
    }    
    
    free(array);

    return 0;
}
