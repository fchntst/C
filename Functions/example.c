#include <stdio.h>

void f1();
void f2();

int x; //(global)

main()
{
    int a = 0; // topiki metabliti stin main

    x = 5;
    printf("\nmain: a = %d, x = %d", a, x);
    f1();
    printf("\nmain: a = %d, x = %d", a, x);
    f2();
    printf("\nmain: a = %d, x = %d", a, x);
}

void f1()
{
    int a = 2, x = 0;  // topikes metavlites tis f1 
                       // exoume diplo onoma stin x
                       // epikratei to topiko onoma
    printf("\nf1: a = %d, x = %d", a, x);

}

void f2 ()
{
    int a = 8;  // topikes metavlites tis f2 
    x = 7;         // anaferete stin global

    printf("\nf2: a = %d, x = %d", a, x);

}
