#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char cha = 'a';

    printf("%d\n", isalpha(cha));
}

// in order to use isalpha and isdigit 
// we are going to need the ctype.h library