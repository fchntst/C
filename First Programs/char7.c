#include <stdio.h>
#define n 20
#define k 4

int main()
{
    unsigned char c;
    int i;

    // first line
    printf("\n\n\t\t%c", 201);
    for(i=0; i<n; i++)
        printf("%c", 205);
    printf("%c", 187);
    printf("\n");

    // second line
    printf("\t\t%c", 186);
    for(i=0; i<k; i++)
        printf(" ");
    printf("Hello World!");
    for(i=0; i<k; i++)
        printf(" ");
    printf("%c", 186);
    printf("\n");

    // third line
    printf("\t\t%c", 200);
    for(i=0; i<n; i++)
        printf("%c", 205);
    printf("%c", 188);

}