#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    int x = 1;

    // Open file
    fp = fopen("files_psounis_1.txt", "w");
    if(fp == NULL)
    {
        printf("Enable to lock memory!");
        exit(0);
    }

    // Write file
    fprintf(fp, "A line\n");
    fprintf(fp, "And some numbers: %d %d %d", x, x*5, x/2);

    // Close file
    fclose(fp);
}
