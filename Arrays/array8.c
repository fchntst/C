#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hidden;
    int cnt;
    srand(time(NULL));

    hidden = rand() % 100;
    
    do{
        printf("Guess the number!: "); // good luck
        scanf("%d", &cnt);

        if (cnt == hidden)
        {
            printf("You found it!\n");
        }

        else if (cnt < hidden)
            printf("Give a bigger number!\n");
        
        else
            printf("Give a smaller number!\n");
    } while (cnt != hidden);

    return 0;

}
