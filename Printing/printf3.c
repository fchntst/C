#include <stdio.h>

int main()
{
    float f = 10.0 / 7.0;
    int i, num;
    
    printf("Float numbers: ");
    printf("\n%8.3f", f);
    printf("\n%8.4f", f);
    printf("\n%8.5f", f);
    printf("\n%8.6f", f);

    printf("\n\nInteger numbers: ");
    num = 1;
    for (i=0; i<=8; i++)
    {
        printf("\n|%-10d|%10d|",num, num);
        num *= 10;
    }
}