#include <stdio.h>
#define N 10

int main()
{
    int array[N];
    int i;
    int *ptr;

    ptr = array;

    for (i=0; i<N; i++)
        {
        printf("Element: %d\t D.M.pointer: %d\n", i, ptr);
        ptr++;
        }
    
    return 0;
}
