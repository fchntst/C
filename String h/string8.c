#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    char str[N];
    char *str2;

    // input
    printf("Give string: ");
    gets(str);

    // copy with strdup
    str2 = strdup(str);

    // output
    if(!str2)
        printf("Unable to lock memory");
    else
        printf("Copied: %s with length: %d", str2, strlen(str2));
}

// function: char *strdup(const char *str)
// this function is basically the strcopy and the malloc function
// together at the same time