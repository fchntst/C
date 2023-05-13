// function: char *strncat(char *str1, const *str2, size_t n)

#include <stdio.h>
#include <string.h>
#define N 80

void main()
{
    int i;
    char str1[N], str2[N];

    // input 
    printf("Give the string 1: ");
    gets(str1);

    printf("Give the string 2: ");
    gets(str2);

    // copy with strncat
    for(i=1; i<=5; i++)
    {
        strncat(str1, str2, i);
        printf("\nstr1 = %s", str1);
    }
}