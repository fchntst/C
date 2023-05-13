/* print.c: Program which print lines */
# include <stdio.h>

int x;
void line();

main(){
    //prints...
    printf("\nIn how many courses you want to learn c? ");
    scanf("%d", &x);
    line();

    printf("\nyou will need 20 courses!");
    line();
    printf("\nyou answered %d", x);
    line();
}

// the function its printing one line

void line()
{
    printf("\n=========================");
}