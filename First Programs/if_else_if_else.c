// how the if else if else work

#include <stdio.h>

void main()
{
    int x,y,z;
    x = 0; y = 1;

    if (x<y) z = 0;
    printf("%d", z);

    /* we can do the same in other way */
    x = 1; y = 0;
    z = x < y ? 0 : 1;
    printf("%d", z);

    // but can also use 
    printf("%d", x<y ? 0 : 1);

}