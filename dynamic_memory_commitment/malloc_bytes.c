#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m, n, i, j;
    double **array;
    int cnt = 0; 
    
    system("cls");
    printf("Give the lines: ");
    scanf("%d", &m);

    printf("Give the columns: ");
    scanf("%d", &n);

    // commitment of the first array dimension
    array = malloc(sizeof(double*) * m);
    if(!array)
    {
        printf("Unable to lock memory");
        exit(0);
    }

    //commitment of the second array dimension
    for(i=0; i<m; i++)
    {
        array[i] = malloc(sizeof(double) * n);
        if(!array[i])
        {
            printf("Unable to lock memory");
            exit(0);
        }
    }

    //  calculation of the bytes
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            cnt += sizeof(double);                  
    }
  
    printf("The Size is: %d + %d + %d = %d bytes",
        cnt, m * sizeof(double *), sizeof(double **),
        cnt + m * sizeof(double *) + sizeof(double **));
           

    for(i=0; i<m; i++)
        free(array[i]);
    free(array);
    return 0;
}