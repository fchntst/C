#include <stdio.h>

int main()
{
    int array[100];
    float ave;
    int i, sum = 0;
    int cnt = 0;

    for(i=0; i<20; i++)
    {
        array[i] = i;
        cnt++;
    }

    printf("[");
    for(i=0; i<20; i++)
        printf("%d, ", array[i]);  
    
    printf("]\n");
        
    

    for(i=0; i<20; i++)
        sum += array[i];

    printf("sum: %d\n", sum);

    ave = sum / cnt;
    printf("Average: %f", ave);
    return 0;
}

