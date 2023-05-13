#include <stdio.h>

int main()
{
    char c;
    char string[100];
    int i;

    printf("Give a string: ");
    c = getchar();
    i = 0;
    while(c != '\n')
    {   
        string[i] = c;
        c = getchar();
        i++;
    }
    
    string[i] = '\0';

    printf("The string you entered is: ");
    i=0;
    while(string[i] != '\0')
    {
        putchar(string[i]);
        i++;
    }

    printf("\n");
    return 0;
}
