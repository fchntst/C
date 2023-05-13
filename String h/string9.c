// function: char *strtok(char *str, char *delim)
#include <stdio.h>
#include <string.h>
#define n 80

void main()
{
    int i, result;
    char str[n], *p;

    // input
    printf("give a string: ");
    gets(str);

    // delimitation with the strtok
    p = strtok(str, " ,.");

    // output
    while(p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ,.");
    }
}