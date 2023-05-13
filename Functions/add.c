#include <stdio.h>

void main()
{
    int a, b, c, d;
    int i, n;
    char symbol;
    
    
    printf("Give n: ");
    scanf("%d", &n);
    
    printf("Dialekse tin praksi(+, -, *, /): ");
    scanf("%c", &symbol);
    
    switch(symbol)
        {
            case '+': printf("Give numerator: ");
                      scanf("%d", &a);
                      
                      printf("Give denominator: ");
                      scanf("%d", &b);

                      printf("Give second numerator: ");
                      scanf("%d", &c);

                      printf("Give second denominator: ");
                      scanf("%d", &d);
        }

    if (b == 0 || d == 0)
    {   
        printf("error");
    } 
}

