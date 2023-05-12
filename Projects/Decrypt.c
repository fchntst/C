#include <string.h>
#include<stdio.h>
#include<string.h>

void RemoveWord(char *str, char *wrd)
{
    int i, j, strLen, wrdLen, tmp, chk=0;
    
    strLen = strlen(str);
    wrdLen = strlen(wrd);
    
    for(i=0; i<strLen; i++)
    {
        tmp = i;
        for(j=0; j<wrdLen; j++)
        {
            if(str[i]==wrd[j])
                i++;
        }
        chk = i-tmp;
        
        if(chk==wrdLen)
        {
            i = tmp;
            for(j=i; j<(strLen-wrdLen); j++)
                str[j] = str[j+wrdLen];
            strLen = strLen-wrdLen;
            str[j]='\0';
        }
    }
    
    printf("\nNew String = %s\n", str);
}

int main()
{
    char array[1000];
    char pattern[15] = "0xgy00x1";
    char pattern2[15] = "1x0g100y";

    printf("Enter to decrypt the sentance: ");
    gets(array);

    RemoveWord(array, pattern);
    RemoveWord(array, pattern2);
    
    return 0;
}
