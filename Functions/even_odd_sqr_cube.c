#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

int main()
{
    int x;
    printf("Give number: ");
    scanf("%d", &x);
    
    if (is_even(x))
        printf("Is even\n");
    if (is_odd(x))
        printf("Is odd\n");
    if (is_square(x))
        printf("Is square\n");
    if (is_cube(x))
        printf("Is cube\n");
    return 0;
}

int is_even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int is_odd(int n)
{
    if (n % 2 == 1)
        return 1;
    else  
        return 0;
}

int is_square(int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (i * i == n)
            return 1;
        else if ( i * i > n)
            return 0;
}

int is_cube(int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (i * i * i == n)
            return 1;
        else if ( i * i * i > n)
            return 0;
}
