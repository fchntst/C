#include <stdio.h>

int main()
{
    char c;

    c = getchar();

    while(c != 'x')
    {

        printf("%c", c+1);
        c = getchar();
    }
    printf("%c.", c);
}
