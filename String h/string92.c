// function: strspn

#include <stdio.h>
#include <string.h>
#define n 80

void main()
{
    char str1[n], str2[n];
    char *ptr;
    int i, length;

    // input
    printf("Give the first string: ");
    gets(str1);

    printf("Give the second string: ");
    gets(str2);

    // search with strspn
    length = strspn(str1, str2);

    if(length > 0)
    {
        printf("The first %d characters of str1 are in str2 included: ", 
                length);
        
        for(i=0; i<length; i++)
            printf("%c", str1[i]);
    }
}