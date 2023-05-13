#include <stdio.h>

int a,b,c;

int product(int x, int y);

main() 
{
    /* entrance of first number */
    printf("Type the first number between 1 to 100: ");
    scanf("%d", &a);

    /* entrance of second number */
    printf("Type here the second number between 1 to 100: ");
    scanf("%d", &b);

    c = product(a,b);
    printf("The product of %d and %d is: %d\n", a,b,c);
    
}

/* The function returns the product of the two numbers */

int product(int x, int y)
{
    return(x*y);
}
