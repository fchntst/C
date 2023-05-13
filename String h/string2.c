#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    char str1[N], str2[N];

    // input
    printf("Give the first string: ");
    gets(str1);
    printf("Give the second string: ");
    gets(str2);

    // copy with the strcat
    strcat(str1, str2);
    printf("\nstr1 = %s", str1);
    strcat(str1, str2);
    printf("\nstr1 = %s\n", str1);
}

// this function: strcat takes the str2 and places it next
// to str1 (it's like a copy where the copied message) is
// placed next to the other.