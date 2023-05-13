#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char c;
    int i;

    fp = fopen("files6.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to lock memory!");
        exit(0);
    }

    printf("\nPosition: %d\n", ftell(fp));

    for(i=0; i<5; i++)
        printf("%c", fgetc(fp));
     
    printf("\nPosition: %d\n", ftell(fp));
    rewind(fp);
    printf("Position: %d\n", ftell(fp));

    while((c = fgetc(fp) != EOF))
        printf("%c", c);

    printf("\nposition: %d\n", ftell(fp));
    fclose(fp);
}
