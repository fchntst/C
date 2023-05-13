#include <stdio.h>

int main()
{
    char c;

    c = getchar();
    
    while(c != '.')
    {
        if(c>=97 && c<=122)
            printf("%c", c-32);
        c = getchar();
    }
    printf("\n");
    return 0;
}