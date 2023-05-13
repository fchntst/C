// function: *strcspn(const char *str, const char *search)

#include <stdio.h>
#include <string.h>
#define n 80

void main()
{
    char str[n], ch;
    char *ptr;
    int pos;

    // input
    printf("Give string: ");
    gets(str);

    // search with strcspn
    pos = strcspn(str, "abc");
    if(pos != strlen(str))
        printf("From the %dth position: %s", pos, &str[pos]);
    else
        printf("Wasn't found the characters abc in: %s", str);
}