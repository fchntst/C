#include <stdio.h>

void main()
{
    int time, hours, min, sec;
    printf("Give seconds: ");
    scanf("%d", &time);
    
    hours = time / 3600;
    printf("Hours: %d\n", hours);
    
    time = time % 3600;
    min = time / 60;
    printf("Minutes: %d\n", min);
    
    sec = time % 60;
    printf("Seconds: %d", sec);
}
