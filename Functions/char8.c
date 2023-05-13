#include <stdio.h>
#include <stdlib.h>
#define SIZE 150
#define TRUE 1
#define FALSE 0

int check_string(char *str);
int mystrcmp(char *str1, char *str2);

int main()
{
    char first[SIZE];
    char second[SIZE];
    int x;
        
        printf("Give the first sentence: ");
        gets(first);
        if(check_string(first) == FALSE)
        {
            printf("Give only lowercase!");
            exit(0);
        }

        printf("Give the second sentence: ");
        gets(second);
        if(check_string(second) == FALSE)
        {
            printf("Give only lowercase!");
            exit(0);
        }

        printf("===============\n");
        
        x = mystrcmp(first, second);
        if(x == -1)
            printf("%s < %s", first, second);
        else if(x == 0)
            printf("%s = %s", first, second);
        else if(x == 1)
            printf("%s < %s", second, first);
}

int check_string(char *str)
{
    int i;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] < 'a' || str[i] > 'z')
        {
            return FALSE;
        }
        i++;
    }   
    return TRUE;
}

int mystrcmp(char *str1, char *str2)
{
    int i;

    i=0;
    while(1)
    {
        if(str1[i] == '\0' && str2[i] != '\0')
                return -1;
        else if(str2[i] == '\0' && str1[i] != '\0')
                return 1;
        else if(str1[i] == '\0' && str2[i] == '\0')
            return 0;
        
        if(str1[i] < str2[i])
            return -1;
        else if(str1[i] > str2[i])
            return 1;
        i++;
    }
}

// simantiko programa prepei na
// to ksana kanw monos pali apo
// tin arxi!!!!!!!!!!!!!!!!!!!!