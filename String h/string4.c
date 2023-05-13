#include <stdio.h>
#include <string.h>
#define N 80

// function: char *strstr(const char *str, const char *search)
// this function searches for a string inside of a string
// for example we give a text and the word we're looking for
// and finnaly prints the rest of the text starting from the 
// word we've given.

void main()
{
    char str1[N], str2[N];
    char *ptr;

    printf("Give a text: ");
    gets(str1);
    
    printf("Give what we are looking for: ");
    gets(str2);

    ptr = strstr(str1, str2);

    while(ptr != NULL)
    {
        printf("In the %dth position: %s\n", ptr-str1, ptr);
        ptr = strstr(ptr+1, str2);
    }
}