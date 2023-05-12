#include <stdio.h>

void main()
{
    int i, x , sum = 0;
    int multi = 1;

    for (i=1; i <= 3; i++)
    {
        printf("Give The %d number: ", i);
        scanf("%d", &x);

        sum = sum + x;
        multi *= x;
    }

printf("The sum is: %d", sum);
printf("\nThe multiplication: %d", multi);

}
