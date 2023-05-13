#include <stdio.h>
#include <math.h>

typedef struct
{
   float x;
   float y;
}point;

void point_struct(point *C);
float func(point a, point b);

int main()
{
   point A, B;

   printf("Point A:\n");
   point_struct(&A);

   printf("\nPoint B:\n");
   point_struct(&B);

   printf("The distance is: %.2f", func(A, B));
}

void point_struct(point *C)
{
   printf("Give x: ");
   scanf("%f", &C->x);
   
   printf("Give y: ");
   scanf("%f", &C->y);
}
float func(point a, point b)
{
   float distance;
   float result;
   
   printf("%.1f %.1f %.1f %.1f\n", a.x, a.y, b.x, b.y);
   
   result = pow(a.x-b.x, 2)+pow(a.y-b.y, 2);
   distance = sqrt(result);
   return distance;
}
