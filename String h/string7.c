#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    int result, l = 4;
    char str1[N], str2[N];

    // input 
    printf("Give the string 1: ");
    gets(str1);

    printf("Give the string 2: ");
    gets(str2);

    // comparison with strncmp
    result = strncmp(str1, str2, l);

    // input
    if(result < 0)
        printf("str1 < str2 (result = %d)", result);
    else if(result == 0)
        printf("str1 = str2 (result = %d)", result);
    else
        printf("str1 > str2 (result = %d)", result);

}