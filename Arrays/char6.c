#include <stdio.h>
#define SIZE 150

int main()
{
    char word[SIZE];
    int i;
    
    printf("Give a sentence: ");
    gets(word);
    
    i = 0;
    while(word[i] != '\0')
    {   // or instead we can type: if(word[i] >= 'a' && word[i] <= 'z')
        if(word[i] >= 97 && word[i] <= 122)
        {
            word[i] -= 32;
        }
        i++;
    }
    printf("The Uppercase sentence is: %s", word);
    return 0;

}
