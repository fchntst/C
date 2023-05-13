#include <stdio.h>

void main() 
{
    int x,y,z;
    int sum, average;
    printf("give a number: ");
    scanf("%d", &x);
    
    printf("give a number: ");
    scanf("%d", &y);
    
    printf("give a number: ");
    scanf("%d", &z);

    sum = x + y + z;
    printf("the sum is: %d", sum);

    average = sum / 3;
    printf("\nThe average is: %d", average);

}
