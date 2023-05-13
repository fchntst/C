#include <stdio.h>

int main()
{
    int i;
    char *s = "Hello World!";

    puts(s);
    puts("--------------");

    for(i=0; i<13; i++)
    {
        puts(&s[i]);

        if(s[i] == '\0')
            break;
    }
    
    return 0;
}
