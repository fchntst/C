#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    int result;
    char str1[N], str2[N];

    // input
    printf("Give the first string: ");
    gets(str1);

    printf("Give the second string: ");
    gets(str2);

    // comparison
    result = strcmp(str1, str2);
    if(result < 0)
        printf("str1 < str2 (result = %d)", result);
    else if(result == 0)
        printf("str1 == str2 (result = %d)", result);
    else
        printf("str1 > str2 (result = %d)", result);   
}

// strcmp is a function which compares two strings
// and returns the appropriate numbers
// to see which of the strings we've given is bigger. 