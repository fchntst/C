#include <stdio.h>
#include <stdlib.h>
#define N 100

struct point
{
    int x;
    int y;
};

void main()
{
    FILE *fp;
    int i, n;
    struct point points[N];

    // read from the file
    fp = fopen("files1.txt", "r");
    if(fp = NULL)
    {
        printf("Enable to lock memory!");
        exit(0);
    }

    fscanf(fp, "%d", &n);
    for(i=0; i<n; i++)
        fscanf(fp, "%d %d", &points[i].x, &points[i].y);
    
    fclose(fp);

    // print on the screen
    for(i=0; i<n; i++)
        printf("%d %d\n",points[i].x, points[i].y);

}
