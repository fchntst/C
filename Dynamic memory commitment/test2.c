#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m;
    int n;
    int i, j;

    int **array;
    
    printf("Give the lines: ");
    scanf("%d", &m);

    printf("Give the columns: ");
    scanf("%d", &n);

    array = malloc(sizeof(int*) * m);
    if(!array)
    {
        printf("unable to lock memory");
        exit(0);
    }
    
    for(i=0; i<m; i++)
    {

        array[i] = malloc(sizeof(int) * n);
        if(!array[i])
        {
            printf("Unable to lock memory");
            exit(0);
        }    
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            array[i][j] = 1+(i+j)%5;
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
    

    for(i=0; i<m; i++)
        free(array[i]);
    free(array);
}

