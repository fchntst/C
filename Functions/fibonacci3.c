#include <stdio.h>

int factorial(int x);

int main()
{
    int input;
    int re;

    printf("Give a number to compute the factorial: ");
    scanf("%d", &input);

    re = factorial(input);

    printf("%d! = %d", input, re);
    return 0;
}

int factorial(int x)
{
    int y;

    if(x == 1 || x == 0)
        return 1;
    if(x > 1)
    {
        y = factorial(x-1);
        return x * y;
    }
}
