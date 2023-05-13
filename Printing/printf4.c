#include <stdio.h>

int main()
{
    printf("Filling out with gaps: |%10d| \n", 1980);
    printf("Filling out with zeros: |%010d| \n", 1980);
    printf(":Forms numbers: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf("Floats: %4.2f %1.0e %E \n", 3.1416, 3.1416, 3,1416);
    printf("With asterisk: %*d \n", 5, 10);
}