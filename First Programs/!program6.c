#include <stdio.h>

int i;
const int n = 10;

void hello()
{
    printf("%d,Hello World!\n", i);
}

int main()
{
    for (i=0; i<=n; i++)
    {
        hello();
    }
    return 0;
}
