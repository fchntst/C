#include <stdio.h>

int main()
{
    char c;

    c = getchar();

    while(c != '\n')
    {
        printf("%c", c);
        c = getchar();
        if(c=='m')
        {
            printf("%c", c);
            ungetc('!', stdin);
        }
    }
    printf("\n");
    return 0;
}