#include <stdio.h>

int main()
{
    int i;

    for(i=0; i<100; i++)
        fputc(i, stdout);
    printf("\n");
    return 0;
}


// fputc and putc are the same
