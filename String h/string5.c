// function: char *strncpy(char *dest, const char *src, size_t n)

#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    char str1[N], str2[N];
    int l = 5;

    // input
    printf("Give the string: ");
    gets(str1);

    // copy with strncpy
    strncpy(str2, str1, l);

    // output
    printf("str1 = %s, str2 = %s\n", str1, str2);

}