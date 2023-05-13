#include <stdio.h>
#define N 100

void f(int *p, int n);

int main()
{
    int i=0;
    int arr[N];

    for (i; i<N; i++)
    {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    f(arr, N);
    for (i=0; i<N; i++)
        printf("%d ", arr[i]);
    
}

void f(int *p, int n)
{
    int i;
    
    for(i=0; i<N; i++)
        p[i] = 2*i;
}
