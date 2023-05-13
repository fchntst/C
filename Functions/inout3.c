#include <stdio.h>
#define N 10

int main()
{
    char buffer[N];

    while(1)
    {
        fgets(buffer, N, stdin);
        printf("Entry: %s", buffer);
    }
}