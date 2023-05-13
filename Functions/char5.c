#include <stdio.h>
#define SIZE 1000

char *mystrcopy(char *dest, char *src);

void main()
{
    char array[SIZE], array2[SIZE], array3[SIZE];
    int choice;

    printf("Give the first string: ");
    gets(array);

    printf("Give the second string: ");
    gets(array2);

    printf("Which string do you wanna copy? 1 or 2: ");
    scanf("%d", &choice);

    if(choice == 1)
        mystrcopy(array3, array);
    else if(choice == 2)
        mystrcopy(array3, array2);
    
    printf("\n\n1: %s\n2: %s\n3: %s", array, array2, array3);

}

char *mystrcopy(char *dest, char *src)
{   
    int i = 0;
    while(1)
    {
        dest[i] = src[i];
        if(src[i] == '\0')
            break;
        i++;
    }
    return dest;
}

