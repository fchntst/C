#include <stdio.h>
#define SIZE 1000

int mystrlen(char *s);

void main()
{
    char str[SIZE];

    printf("Give a number: ");
    gets(str);

    printf("The length of the string is: %d", mystrlen(str));
    
}

int mystrlen(char *s)
{
    int cnt;
    cnt = 0;

    while (s[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}
