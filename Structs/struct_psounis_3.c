#include <stdio.h>
#define SIZE 80

struct info{
    char name[SIZE];
    char adress[SIZE];
    char number[SIZE];
    char state[SIZE];
};

typedef struct info RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);

int main()
{
    RECORD a, b;

    printf("1st person: \n");
    read_record(&a);

    printf("2nd person: \n");
    read_record(&b);

    print_record(a);
    print_record(b);

    printf("\n");
    return 0;
}

void read_record(RECORD *p)
{
    printf("Give your name: ");
    scanf("%s", (*p).name);

    printf("Give the adress: ");
    scanf("%s", (*p).adress);

    printf("Give the number: ");
    scanf("%s", (*p).number);

    printf("Give the state: ");
    scanf("%s", (*p).state);
}

void print_record(RECORD x)
{
    printf("\n%s: %s %s %s", x.name,
            x.adress, x.number, x.state);
}

