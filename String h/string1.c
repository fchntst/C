#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    char str1[N], str2[N];

    // input
    printf("Give the string: ");
    gets(str1);

    // copy str1 to str2 with strcpy
    strcpy(str2, str1);

    // output
    printf("str1 = %s | str2 = %s\n", str1, str2);
}

// the strcpy function aka strcpy(char *dest, const *source)
// what it does is to take the string from the source 
// copy it and tranfer it to the dest 