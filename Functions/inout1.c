#include <stdio.h>
 
 int main()
 {
    char crypt[1000] = "uibopt";
    int i = 0;

    while(crypt[i] != '\0')
    {
        printf("%c", crypt[i]-1);
        i++;
    }
    printf("\n");
    return 0;
 }

// we put the incrypted message in the " " and 
// and we get the normal message from the inout_psounis_1.c