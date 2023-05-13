#include <stdio.h>
#include <string.h>

char* strlwr(char *);

void main()
{
    char str[80] = "aSf aDF affgvv VZv trqQWR";
    char *x;
    int b; 
    
    x = strlwr(str);

    for(b=0; x[b]!='\0'; b++)
        printf("%c",x[b]);

    printf("\n");
}

char* strlwr(char *x)
{
    int b;
    
    for(b=0; x[b]!='\0'; b++)
    {
        if(x[b]>='a' && x[b]<='z')
            x[b] = x[b]+'A'-'a';
    }
   
    return x;
}