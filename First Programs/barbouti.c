#include <stdio.h>

void main()
{
    int x, y, z, s;
    printf("player1 throw 1st dice: ");
    scanf("%d", &x);
    printf("player1 throw 2nd dice: ");
    scanf("%d", &y);

    printf("player2 throw 1st dice: ");
    scanf("%d", &z);
    printf("player2 throw 2nd dice: ");
    scanf("%d", &s);

    if (x + y > z + s)
    {
        printf("player1 plays first!");
    }
    else if ( x + y < z + s)
    {
        printf("player2 plays first!");
    }
    else
    {
        printf("draw!");
    }
}