#include <stdio.h>

int fibonacci(int n);

void main()
{
    int n;
    printf("Give number: ");
    scanf("%d", &n);

    printf("The Fibonacci number-%d is %d", n, fibonacci(n));
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
