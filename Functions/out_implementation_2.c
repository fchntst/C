#include <stdio.h>

int main()
{
    char c;

    printf("Give a string: ");
    c = getchar();
    printf("This is the string: ");
    
    while(c != '\n')
    {   
        putchar(c);
        c = getchar();
    }

    printf("\n");
    return 0;
}
