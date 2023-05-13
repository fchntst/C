//the sizes of char short int long float double 
// using the sizeof function

#include <stdio.h>

void main()
{
    printf("The char's bytes are: %d", sizeof(char));
    printf("\nThe short's bytes are: %d", sizeof(short));
    printf("\nThe int's bytes are: %d", sizeof(int));
    printf("\nThe long's bytes are: %d", sizeof(long));

    printf("\n\nThe byte of a unsigned short is: %d", sizeof(unsigned short));
    printf("\nThe bytes of unsigned int are: %d", sizeof(unsigned int));
    printf("\nThe bytes of unsigned long are: %d", sizeof(unsigned long));
    
    printf("\n\nThe float's bytes are: %d", sizeof(float));
    printf("\nThe double's bytes are: %d", sizeof(double));
}
