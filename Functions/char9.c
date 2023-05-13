#include <stdio.h>
#define SIZE 100
#define SIZE2 100

int string_comparison(char *string1, char *string2);

int main()
{
    char string1[SIZE];
    char string2[SIZE2];
    int i = 0;
    int j = 0;

    printf("Give the first word: ");
    gets(string1);

    while(string1[i] != '\0') // aaAAaaaA
    {
        if(string1[i] < 'a' || string1[i] > 'z')
        {
            do
            {
                printf("from a to z please: ");
                gets(string1);
            } while (string1[i] < 'a' || string1[i] > 'z');
        }
        i++;
    }

    printf("Give the second word: ");
    gets(string2);
    
    while(string2[j] != '\0')
    {
        if(string2[j] < 'a' || string2[j] > 'z')
        {
            do
            {
                printf("from a to z please: ");
                gets(string2);
            } while (string2[j] < 'a' || string2[j] > 'z');
        }
        j++;
    }
    
    string_comparison(string1, string2);

    if(string_comparison(string1, string2) == -1)
        printf("Str2 > Str1 | (%s > %s)", string2, string1);
    else if(string_comparison(string1, string2) == 0)
        printf("Str1 > Str2 | (%s > %s)", string1, string2);
    else if(string_comparison(string1, string2) == 1)
        printf("Str1 == Str1 | (%s == %s)", string1, string2);
    return 0;
}

int string_comparison(char *string1, char *string2)
{
    int i = 0;

    while(1)
    {
        if(string1[i] == '\0' && string2[i] != '\0')
            return -1;
        else if(string1[i] != '\0' && string2[i] == '\0')
            return 0;
        else if(string1 == '\0' && string2[i] == '\0')
            return 1;

        if(string1[i] < string2[i])
            return -1;
        else if(string1[i] > string2[i])
            return 0;
        else if(string1[i] == string2[i])
            return 1;
        i++;
    }
}

// I should really consider trying coding this one again
// the function is pretty enteresting
// So yeah...