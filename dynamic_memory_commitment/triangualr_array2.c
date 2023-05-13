#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

void copy_array(int array[][5], int n);

int main()
{
    int matrix[SIZE][SIZE];
    int **matrixB;
    int N, i, j, choice;
    
    srand(time(NULL));

    // static memory commitment
    do
    {
        printf("Give size N (5 to 20): ");
        scanf("%d", &N);
    } while (N<5 || N>20);

    //initiate and print static matrix
    printf("Static matrix\n");
    for(i=0; i<N; i++)                                          // for(i=0; i<N; i++)
    {                                                           // {
        for(j=0; j<N; j++)                                      //      for(j=0; j<=i; j++)
        {                                                       //          commands...
            if(i >= j)                                          // } another way.
                printf("%d ", 1 + rand() % 9);
            else
                printf("0 ");
        }      
        printf("\n");
    }

    // dynamic memory commitment
    // checking malloc
    matrixB = malloc(sizeof(int *));
    if(!matrixB)
    {
        printf("Unable to lock memory.");
        exit(0);
    }

    for(i=0; i<N; i++)
    {
        matrixB[i] = malloc((i+1) * sizeof(int));
        if(!matrixB)
        {
            printf("Unable to lock memory.");
            exit(0);
        }
    }

    /* here I think we got the same thing as above
       is just a little more complicated

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i >= j)
            {
                matrixB[i] = malloc(sizeof(int));
                if(!matrixB[i])
                {
                    printf("Unable to lock memory.");
                    exit(0);
                }
            }
        }
    }
    */  
    
    // initiate and print dynamic matrix   
    printf("Dynamic matrix\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i >= j)
                printf("%d ", 1 + rand() % 9);
            else
                printf("0 ");
        }      
        printf("\n");
    }

    /* same as above.
        for(i=0; i<N; i++)
        {
            for(j=0; j<=N; j++)
                printf("%d", matrixB[i][j]);
            
            for(j=i+1; j<N; j++)
                printf("0 ");
            printf("\n");
        }
    */
   /*
    printf("\nWhich one do you wanna copy?: ");
    printf("\n1. matrix\n2. matrixB\n");
    printf("\nType 1 or 2: ");
    scanf("%d", &choice);

    if(choice == 1)
        copy_array(matrix, copy, N);
    
    else if(choice == 2)
        copy_array(matrixB, copy, N);
    */

    copy_array(*matrixB, N);

    // free malloc
    for(i=0; i<N; i++)
        free(matrixB[i]);
   
    /* same thing as above
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i >= j)
                free(matrixB[i]);
        }      
    }
    */

    free(matrixB);
    return 0;
}

void copy_array(int array[][5], int n)
{
    int i, j;
    int copy[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            copy[i][j] = array[i][j];
    }

    printf("Copied matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", *copy);
        printf("\n");
    }   
}
