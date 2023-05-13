#include <stdio.h>

void main()
{
    int x,y,z;
    int operator;
    printf("Give first integer: ");
    scanf("%d", &x);

    printf("Give second integer: ");
    scanf("%d", &y);

    printf("0 +\n1 -\n2 *\n3 /\n4 mod\nchoose operator: ");
    scanf("%d", &operator);
    if (operator == 0)
    {
        z = x + y;
        printf("The result: %d", z);
    }
    else if (operator == 1)
    {
        z = x - y;
        printf("The result: %d", z);
    }
    else if (operator == 2)
    {
        z = x * y;
        printf("The result: %d", z);

    }
    else if (operator == 3)
    {
        z = x / y;
        printf("The result: %d", z);
    }
    else if (operator == 4)
    {
        z = x % y;
        printf("The result: %d", z);
    }

}
