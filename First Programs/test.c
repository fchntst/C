#include <stdio.h>

const int n = 20;
int i;

void hello() {
    printf("%d hello world\n", i);

}

int main()
{
    for (i = 1; i <= n; i++)
    hello();
    return 0;
}