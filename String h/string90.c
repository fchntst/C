// function: *strchr(const char *str, int ch)
#include <stdio.h>
#include <string.h>
#define n 80

void main()
{
    int i;
    char str[n], ch;
    char *ptr;

    // input
    printf("Give string: ");
    gets(str);

    printf("give character: ");
    ch = getchar();

    // search with strchr
    ptr = strchr(str, ch);

    while(ptr != NULL)
    {
        puts(ptr);
        ptr = strchr(ptr+1, ch);
    }
}