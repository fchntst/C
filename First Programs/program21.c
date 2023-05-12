#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **array;
    int i, j, M, N;

    system("cls");

    // Printing the message and giving the size of the array
    printf("Give the the lines: ");
    scanf("%d", &M);

    printf("Give the the Columns: ");
    scanf("%d", &N);

    // Dynamic Memory Allocation
    array = malloc(sizeof(int*)*M);
    if(array == NULL)
    {
        printf("Unable to lock memory");
        exit(0);
    }
    for(i=0; i<M; i++)
    {
        array[i] = malloc(sizeof(int)*N);
        if(array[i] == NULL)
        {
            printf("Unable to lock Memory");
            exit(0);
        }
    }
    
    // Initialization of the array;
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            array[i][j] = 1+(i+j)%5;
            printf("%2d", array[i][j]);
        }
        printf("\n");
    }    
    
    for(i=0; i<M; i++)
        free(array[i]);
    free(array);

    return 0;
}
