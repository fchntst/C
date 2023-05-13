#include <stdio.h>
#define N 4

int main()
{
    int array[N];
    int i;

    for (i=0; i<N; i++)
        printf("Element: %d\t D.M.array: %d\n", i, &array[i]);
    
    return 0;
}