#include <stdio.h>

int get_integer(int start, int finish);

int main()
{
    int a, b, n;

    printf("Give number a\n");
    a = get_integer(1, 10);
    
    printf("Give number b\n");
    b = get_integer(1, 10);

    printf("Give a number n\n");
    n = get_integer(2, 5);

    printf("The result of n(a-b) is: %d", n*(a-b));
    
    return 0;
}

int get_integer(int start, int finish)
{
    int x;

    do{
        printf("Give a number from %d to %d: ", start, finish);
        scanf("%d", &x);
    } while(x < start || x > finish);
    
    return x;
}