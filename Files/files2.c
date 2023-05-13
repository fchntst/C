#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char c;

    fp = fopen("files2.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to lock Memory!\n");
        exit(0);
    }

    while((c = fgetc(fp) != EOF))
        printf("%c", c);
    
    fclose(fp);
}

