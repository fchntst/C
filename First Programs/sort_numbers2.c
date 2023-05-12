#include <stdio.h>

void main()
{
    int x, y, z;
    
    printf("Give numbere x: ");
    scanf("%d", &x);

    printf("Give number y: ");
    scanf("%d", &y);

    printf("Give number z: ");
    scanf("%d", &z);

    if (x < y)
    {
        if (x < z)
        {
            if (z < y)
            {
                printf("Sort numbers are: %d, %d, %d", x, z, y);
            }
            else // z > y and x < y and x < z
            {
                printf("Sort numbers: %d, %d, %d", x, y, z);
            }
        }
        else // z < x
        {
            printf("Sort numbers: %d, %d, %d", z, x, y);
        }
    }
    else // y < x
    {
        if (x > z)
        {
            if (z > y)
            {
                printf("Sort numbers: %d, %d, %d", y, z, x);
            }
            else // z < y
            {
                printf("Sort numbers: %d, %d, %d", z, y, x);
            }
        }
        else // x < z
        {
            printf("Sort numbers: %d, %d, %d", y, x, z);
        }
    }

}