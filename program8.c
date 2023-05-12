#include <stdio.h>

int i;
int n;

void hello()
{
    printf("%d, hello world\n", i);
}

int main(){
    printf("give a number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        for (i=0; i<=n; i++)
        {
            hello();
        }
    }
    else
    {
        printf("it's negative");
    }
    return 0;
}
