#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i, n;

    printf("Give the size of the array: ");
    scanf("%d", &n);

    p = malloc(sizeof(int) * n);
    if (!p)
    {
        printf("Unable to lock memory");
        exit(0);
    }

    for (i=0; i<n; i++)
    {
        p[i] = i*i*i;
        printf("\np[%d] = %d", i, p[i]);
    }
    free(p);
}
