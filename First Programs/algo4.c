#include <stdio.h>

int main()
{
    int n=1, p=1, t=1;

    do
    {
        n *=4;
        p *=n;
        t++;
    }
    while (p<128000000 && t <=19);
    
    printf("%d", t);
}