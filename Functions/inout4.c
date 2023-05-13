#include <stdio.h>

int main()
{
    int x, y, z;
    char c;

    printf("Give threed number: ");
    scanf("%1d%1d%1d", &x, &y, &z);
    
    fflush(stdin);
    printf("choose U-units, t-tens, H-hundreds: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'U':
            printf("Units = %d", x);
            break;
        case 't':
            printf("tens = %d", y);
            break;
        case 'H':
            printf("hundreds = %d", z);
            break;
        default:
            printf("Wrong input!");     
            break;  
    }
}
