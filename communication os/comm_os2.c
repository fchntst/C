#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y;

    if(argc != 3)
        printf("You must enter 2 arguments!");
    else
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);

        printf("\nArguments: %d and %d", x, y);
    }
}
