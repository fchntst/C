// let's see how comparison operators work

#include <stdio.h>

void main()
{
    int x = 1;
    int y = 2;
    int z;
    
    printf("\nx=%d and y=%d", x,y);
    printf("\n-----------");
    
    z = (x>y);
    printf("\n\nx>y:%d", z);

    z = (x>=y);
    printf("\nx>=y:%d", z);

    z = (x==y);
    printf("\nx==y:%d", z);

    z = (x<y);
    printf("\nx<y:%d", z);

    z = (x<=y);
    printf("\nx<=y:%d", z);
}
