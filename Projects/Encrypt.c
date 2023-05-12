#include <stdio.h>

int main()
{
    char array[1000];

    printf("Enter a sentance to encrypt: ");
    gets(array);
    int i = 0;

    while(array[i] != '\0')
    {
        if(i % 2 == 0)
            printf("%c0xgy00x1", array[i]);
        else if(i % 2 != 0)
            printf("%c1x0g100y", array[i]);
    i++;
    }
}
