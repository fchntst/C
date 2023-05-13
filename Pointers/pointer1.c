#include <stdio.h>

int main()
{
    int x;
    int *ptr;
    ptr = &x;

    x = 5;  // (x == *ptr) AND (&x == ptr) isxuei auto!
    printf("x=%d\t *ptr=%d\t &x=%d\t ptr=%d", x, *ptr, &x, ptr);
    *ptr = 8;
    printf("\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d", x, *ptr, &x, ptr);
    x = 9;
    printf("\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d", x, *ptr, &x, ptr);
    return 0;
}
