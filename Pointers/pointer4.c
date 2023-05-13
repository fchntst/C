#include <stdio.h>
#define N 10

int main()
{
    double array[N];
    double i;
    double *pointer;

    pointer = array;
    for (i=0; i<N; i++)
    {
        printf("element: %d\t D.M.pointer: %d\n", i, pointer);
        pointer++;
    }
    return 0;
}
