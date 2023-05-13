#include <stdio.h>

int main()
{
    int pinakas[5] = {3, 2, 5, 2, 1};
    int i;

    printf("[");
    for(i=0; i<5-1; i++)
        printf("%d, ", pinakas[i]);
    printf("%d]", pinakas[i]);
    return 0;
}
