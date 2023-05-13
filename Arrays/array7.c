#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 5
#define n 8 
#define mod 201

void main()
{
    int array[m][n];
    int i, j;

    srand(time(NULL));

    for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            array[i][j] = rand() % mod;
        }
    
    for(i=0; i<m; i++)
        {
            for(j=0; j<n-1; j++)
            printf("%d\t", array[i][j]);
        
        printf("%d", array[i][n-1]);
        printf("\n");
        }
        
}
