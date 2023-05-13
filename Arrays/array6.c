#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200
#define mod 201

int main()
{
    int array[SIZE1][SIZE2];
    int i, j, m, n;

    srand(time(NULL));
    
    do{
        printf("Give the numbers of line,(10..100): ");
        scanf("%d", &m);
    } while (m < 10 || m > 100);

    do{
        printf("Give the number of columns,(5..200): ");
        scanf("%d", &n);
    } while (n < 5 || n > 200);
    
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            array[i][j] = rand() % mod;

    for (i=0; i<m; i++)
        {
            for (j=0; j<n-1; j++)
                printf("%d\t,", array[i][j]);
        
        printf("%d", array[i][n-1]);
        printf("\n");

        }
    
    return 0;
}
