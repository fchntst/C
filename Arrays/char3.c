#include <stdio.h>

void main()
{
    char string[100];
    
    printf("Give a string: ");
    gets(string); // the gets function it's like the scanf but it gets the whole string till the user press enter

    printf("You typed: ");
    puts(string); // the puts function prints what the user typed and let a enter as well
}

