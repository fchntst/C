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

    fp = fopen("files3.dat", "wb");
    if(fp == NULL)
    {
        printf("Unable to lock Memory!");
        exit(0);
    }

    // random initialization
    for(i=0; i<N; i++)
    {
        data[i].x = rand() % 100;
        data[i].y = rand() % 100;
    }

    // writing in the file
    fwrite(data, sizeof(struct point), N, fp);

    fclose(fp);
}

