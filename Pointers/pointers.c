#include <stdio.h>

// IMPORTANT:  x == *ptr
//          : &x == ptr


// IMPORTANT: matrix[2] it's the same thing but different written as *(matrix+2)
// matrix[i] == *(matrix+i)

int main()
{
    int x;
    int *ptr;

    ptr = &x;

    x = 5;
    printf("x = %d | *ptr = %d | &x = %d | ptr = %d", x, *ptr, &x, ptr);

    *ptr = 8;
    printf("\nx = %d | *ptr = %d | &x = %d | ptr = %d", x, *ptr, &x, ptr);

    x = 9;
    printf("\nx = %d | *ptr = %d | &x = %d | ptr = %d", x, *ptr, &x, ptr);

    return 0;
}