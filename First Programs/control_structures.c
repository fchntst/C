// if: it show how control structure work

#include <stdio.h>

void main()
{
    int x;
    int y;

    printf("Give a number x: ");
    scanf("%d", &x);
    printf("\nGive a number y: ");
    scanf("%d", &y);

    if (x<y)
    printf("\n%d<%d", x, y);

    if (x<=y)
    printf("\n%d<=%d", x, y);

    if (x==y)
    printf("\n%d==%d", x, y);

    if (x>y)
    printf("\n%d>%d", x, y);

    if (x>=y)
    printf("\n%d>=%d", x, y);

}
