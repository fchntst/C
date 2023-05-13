#include <stdio.h>

char *strset(char *, char cha);

void main()
{
    char str[80] = "abcdefg";
    char cha = 'a';

    strset(str, cha);
    printf("%s", str);
    printf("\n");

}

char *strset(char *x, char cha)
{
    int i;

    for(i=0; x[i] != '\0'; i++)
        x[i] = cha;
    
    return x;
}

// usually this function is working by including the string.h library
// but in this case it just won't 
// so we have to code it alone.