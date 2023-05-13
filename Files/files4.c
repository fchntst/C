#include <stdio.h>
#include <stdlib.h>
#define N 10

struct point 
{
    int x;
    int y;
};

void main()
{
    FILE *fp;
    char c;
    int i;

    struct point data[N];

    fp = fopen("files4.dat", "rb");
    if(fp == NULL)
    {
        printf("Unable to lock Memory!");
        exit(0);
    }

    // writing in the file
    fread(data, sizeof(struct point), N, fp);

    for(i=0; i<N; i++)
        printf("%d %d\n", data[i].x, data[i].y);

    fclose(fp);
}

