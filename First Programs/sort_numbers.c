// prgram that sorts the numbers
// there are of course other ways to solve this
// but i coun't think any other

#include <stdio.h>

void main()
{
    int x, y, z;
    int max, min, last;
    
    printf("Give x: ");
    scanf("%d", &x);
    
    printf("Give y: ");
    scanf("%d", &y);

    printf("Give z: ");
    scanf("%d", &z);

    if (x > y && x > z && y > z)
        {
            printf("%d,%d, %d",z , y, x);
        }
    if (x > y && x > z && z > y)
        {
            printf("%d,%d, %d",y , z, x);
        }
    if (y > x && y > z && x > z)
        {
            printf("%d,%d, %d",z , x , y);
        }
    if (y > x && y > z && z > x)
        {
            printf("%d,%d, %d",x , z , y);
        }
    if (z > x && z > y && x > y)
        {
            printf("%d,%d, %d",y , x , z);
        }
    if (z > x && z > y && y > x)
        {
            printf("%d,%d, %d",x , y , z);
        }
}
