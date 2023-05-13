#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    system("cls");
    p = malloc(sizeof(int));
    if(!p)
    {
        printf("Adunamia desmeusis mnimis");
        exit(0);
    }

    printf("Dose enan akeraio arithmo: ");
    scanf("%d", p);
    printf("Pliktrologisate %d", *p);
    free(p);
    return 0;
}