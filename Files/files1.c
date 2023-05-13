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
    fp = fopen("files_psounis_2.txt", "r");
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

/*
fscanf.cpp Diavasma apo arxeio
#include <stdio.h>
#include <stdlib.h>
#define N 100

struct point {
   int x;
   int y;
};

void main() {
   FILE *fp;
   int i;
   int n; // plithos eggrafwn 
   struct point points[N]; // eggrafes 
	
   // Diavasma apo to arxeio 
   fp = fopen("points.txt","r");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }

   fscanf(fp, "%d", &n);
   for (i=0; i<n; i++)
      fscanf(fp, "%d %d", &points[i].x, &points[i].y);
	
   fclose(fp);
   
   // Ektipwsi stin othoni
   for (i=0; i<n; i++)
      printf("%d %d\n", points[i].x, points[i].y);
   
   
}

*/