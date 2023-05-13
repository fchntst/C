#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int input;
    int **array;
    int i, j;

    system("cls");
    // print to the user
    do
    {
        printf("Give the size of the array: ");
        scanf("%d", &input);

        if(input < 5 || input > 20)
            printf("Between (5-20)\n");
    } while (input < 5 || input > 20);

    // commitment of the first dimension of the array
    array = malloc(sizeof(int *) * input);
    if(!array)
    {
        printf("Unable to lock memory");
        exit(0);
    }
    
    // commitment of the second dimension of the array
    for(i=0; i<input; i++)
    {
        for(j=0; j<i; j++)
        {
            array[i] = malloc(sizeof(int) * input);
            if(!array[i])
            {
                printf("Unable to lock memory");
                exit(0);
            }
        }
    }

    // random and initialization of the array
    srand(time(NULL));

    for(i=0; i<input; i++)
    {
        for(j=0; j<input; j++)
            array[i][j] = 1 + rand() % 9;
        
        for(j=i+1; j<input; j++)
            array[i][j] = 0;
    }

    // print the array
    for(i=0; i<input; i++)
    {
        for(j=0; j<input; j++)
            printf("%2d ", array[i][j]);
        printf("\n");        
    }
    
    printf("And the size is: %d", sizeof(int) *((input*input)/2));

    // free the memory
    for(i=0; i<input; i++)
        free(array[i]);
    free(array);
}