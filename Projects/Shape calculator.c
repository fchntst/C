#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415
#define e 2.71828
#define TRUE 1
#define FALSE 0

void square_per_ar(float a, int x);
void triangle_per_ar(float b, float h, int x);
void circle_per_ar(float r, int x);
void cube_vol(float a, int x);
void pyramid_vol(float a, float b, float h, int x);
void sphere_vol(float r, int x);

void metric_length(int x);
void metric_length_2(int y);
void metric_length_3(int z);

void main()
{
    int choice, dimention, x, start = 1;
    float area, perimeter, volume;
    float r, a, b, h;
    char quit;
    
    system("cls");
    printf("\n|-------------------------------------------------|\n");
    printf("| Welcome to the AREA-PERIMETER-VOLUME calculator |\n");
    printf("|-------------------------------------------------|\n");

    while (start == TRUE)
    {   
        printf("\n0 -> mm\n1 -> cm\n2 -> dm\n3 -> m\n4 -> km\n\n");
        
        printf("Choose metric length: ");
        scanf("%d", &x);

        if(x < 0 || x > 4)
        {
            do
            {
                printf("The choice must be from 0 to 4: ");
                scanf("%d", &x);
            } while (x < 0 || x > 4);
            
        }

        printf("\n0 -> 2D\n1 -> 3D\n\n");
        printf("Choose dimention: ");
        scanf("%d", &dimention);
        
        if (dimention < 0 || dimention > 1)
        {
            do
            {
                printf("\nChoose dimention(0 to 1): ");
                scanf("%d", &dimention);
            } while (dimention < 0 || dimention > 1);
        }

        if (dimention == 0)
        {
            system("cls");
            printf("\n   |----|\n   | 2D |\n   |----|\n\n");
            printf("0 -> square\n1 -> triangle\n2 -> circle\n");

            printf("\nChoose shape: ");
            scanf("%d", &choice);

        
        if (choice < 0 || choice > 2)
        {
            do
            {
                printf("\nChoice musst be from 0 to 2: ");
                scanf("%d", &choice);
            } while (choice < 0 || choice > 2);
        }            
        
            switch(choice)
            {
                case 0:
                    printf("\nGive side a: ");
                    scanf("%f", &a);
                    square_per_ar(a, x); 
                    break;

                case 1:
                    printf("Give b base: ");
                    scanf("%f", &b);
                    printf("Give h height: ");
                    scanf("%f", &h);
                    triangle_per_ar(b, h, x);
                    break;

                case 2:
                    printf("Give r radius: ");
                    scanf("%f", &r);
                    circle_per_ar(r, x);
                    break;
            }

        }
        
        else if(dimention == 1)
        {
            system("cls");
            printf("\n   |----|\n   | 3D |\n   |----|\n\n");
            printf("0 -> cube\n1 -> pyramid\n2 -> sphere\n");

            printf("\nChoose shape: ");
            scanf("%d", &choice);
            
            if (choice < 0 || choice > 2)
            {
                do
                {
                    printf("\nChoice musst be from 0 to 2: ");
                    scanf("%d", &choice);
                } while (choice < 0 || choice > 2);
            }

            switch(choice)
            {
                case 0:
                    printf("\nGive a side: ");
                    scanf("%f", &a);
                    cube_vol(a, x);
                    break;

                case 1:
                    printf("Give a side: ");
                    scanf("%f", &a);
                    printf("Give b side: ");
                    scanf("%f", &b);
                    printf("Give h height: ");
                    scanf("%f", &h);
                    pyramid_vol(a, b, h, x);
                    break;
                    
                case 2:
                    printf("Give r radius: ");
                    scanf("%f", &r);
                    sphere_vol(r, x);
                    break;
            }
        }

        printf("\n\nPress 'q' to quit, 'y' to continue: ");
        scanf("%s", &quit);
  
        if (quit == 'q')
            start = FALSE;
        if (quit == 'y')
            system("cls");
    }

    printf("Bye!\n");
    return 0;
}

void square_per_ar(float a, int x)
{
    printf("--------------------------");
    printf("\nPerimeter: %.3f", 4 * a);
    metric_length(x);
    printf("Area: %.3f", a * a); 
    metric_length_2(x);
    printf("--------------------------");
}

void triangle_per_ar(float b, float h, int x)
{
    printf("--------------------------");
    printf("\nArea: %.3f", 0.5 * b * h);
    metric_length_2(x);   
    printf("--------------------------");
}

void circle_per_ar(float r, int x)
{
    printf("--------------------------");
    printf("\ncircumference : %.3f", 2 * PI * r);
    metric_length(x);  
    printf("diameter: %.3f", 2 * r);
    metric_length(x);
    printf("Area: %.3f", PI * r * r);
    metric_length_2(x);
    printf("--------------------------");
}

void cube_vol(float a, int x)
{
    printf("--------------------------");
    printf("\nVolume: %.3f", a * a * a);
    metric_length_3(x);
    printf("--------------------------");
}

void pyramid_vol(float a, float b, float h, int x)
{
    printf("--------------------------");
    printf("\nVolume: %.3f", 0.33 * a * b);
    metric_length_3(x);
    printf("--------------------------");
}

void sphere_vol(float r, int x)
{
    printf("--------------------------");
    printf("\nVolume: %.3f", 1.33 * PI * r);
    metric_length_3(x);
    printf("--------------------------");
}

void metric_length(int x)
{
    if(x == 0)
        printf(" mm\n");
    
    else if(x == 1)
        printf(" cm\n");
    
    else if(x == 2)
        printf(" dm\n");
    
    else if (x == 3)
        printf(" m\n");

    else
        printf(" km\n");
}

void metric_length_2(int y)
{
    if(y == 0)
        printf(" mm^2\n");
    
    else if(y == 1)
        printf(" cm^2\n");
    
    else if(y == 2)
        printf(" dm^2\n");
    
    else if (y == 3)
        printf(" m^2\n");

    else
        printf(" km^2\n");
}

void metric_length_3(int z)
{
    if(z == 0)
        printf(" mm^3\n");
    
    else if(z == 1)
        printf(" cm^3\n");
    
    else if(z == 2)
        printf(" dm^3\n");
    
    else if (z == 3)
        printf(" m^3\n");

    else
        printf(" km^3\n");
}
