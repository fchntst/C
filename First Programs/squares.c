// calculating all the squares numbers

#include <stdio.h>

void main()
{
    int i, N, y;
    printf("Give a integer number: ");
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        y = i * i;
        printf("\n%d squeare: %d", i,y);
    }
    return 0;
}
