#include <stdio.h>

void main()
{
    int i;
    int n;
    int array[5];
    int min;

    printf("Give n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        do
        {
            printf("give the %d number: ", i + 1);
            scanf("%d", &array[i]);
        } while (array[i] < 0 || array[i] > 10);
    }
    
    min = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("the minimum is %d", min);
}
