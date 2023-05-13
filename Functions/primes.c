#include <stdio.h>

int isprime(int n);

void main()
{
    int start, finish, i;

    do
    {
        printf("Give start: ");
        scanf("%d", &start);
        if (start < 0)
            printf("Give a positive int!\n");
    } while (start < 0); 

    do
    {
        printf("Give finish: ");
        scanf("%d", &finish);

        if (start > finish)
            printf("Give a number bigger than start\n");
    } while (start > finish);

    for (i = start; i <= finish; i++)
        if (isprime(i))
            printf("\nThe %d is prime.", i);
}


int isprime(int n)
{
    int i;
    int check;

    if (n == 0 || n == 1)
        return 0;
    
    check = 1;
    for (i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            check = 0;
        }
    }
    return check;
}
