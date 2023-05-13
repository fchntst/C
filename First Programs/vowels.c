#include <stdio.h>

void main()
{
    char c;
    printf("Enter a letter from the alphabet: ");
    scanf("%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is not a vowel", c);
    }
}   
