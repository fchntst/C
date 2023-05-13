#include <stdio.h>

void swap(int *ptra, int *ptrb);

int main()
{
    int a = 5;
    int b = 10;
    printf("Main: a=%d\t b=%d\n", a, b);

    swap(&a, &b);
    printf("Main: a=%d\t b=%d\n", a, b);

    return 0;
}

void swap(int *ptra, int *ptrb)
{
    int k;
    k = *ptra;
    *ptra = *ptrb;
    *ptrb = k;
    printf("Swap: a=%d\t b=%d\n", *ptra, *ptrb);
}

// In important Programs there is program called swap
// This program is almost the same as this one
// But the only difference is that here we use pointers instead
// It's just changing the output

