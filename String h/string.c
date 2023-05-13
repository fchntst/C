#include <stdio.h>
#include <string.h>
#define N 80

int main()
{
    char str[N];

    // input
    printf("Give the string: ");
    gets(str);
    
    // output
    printf("The length of the string is: %d\n", strlen(str));
    return 0;
}

// function: strlen(str)