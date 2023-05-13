#include <stdio.h>

int main()
{
    char string[100];

    printf("Give a string: ");
    fgets(string, 100, stdin);

    printf("This is the string your entered: ");
    puts(string);

    return 0;
}
