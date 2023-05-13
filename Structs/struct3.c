#include <stdio.h>
#include <stdlib.h>

struct info{
    char *name;
    char *adress;
    char *number;
    char *state;
};

typedef struct info RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void irit_record(RECORD *p, int SIZE);
void free_record(RECORD x);

int main()
{
    RECORD a, b;
	int SIZE;

	printf("Hello Give the size: ");
	scanf("%d", &SIZE);

	irit_record(&a, SIZE);
	irit_record(&b, SIZE);

    printf("1st person: \n");
    read_record(&a);

    printf("2nd person: \n");
    read_record(&b);

    print_record(a);
    print_record(b);

	free_record(a);
	free_record(b);

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

void irit_record(RECORD *p, int SIZE)
{
	(*p).name = malloc(sizeof(char)*SIZE);
	if(!(*p).name)
	{
		printf("Enable to lock memory!");
		exit(0);
	}

	(*p).adress = malloc(sizeof(char)*SIZE);
	if(!(*p).adress)
	{
		printf("Enable to lock memory!");
		exit(0);
	}

	(*p).number = malloc(sizeof(char)*SIZE);
	if(!(*p).number)
	{
		printf("Enable to lock memory!");
		exit(0);
	}

	(*p).state = malloc(sizeof(char)*SIZE);
	if(!(*p).state)
	{
		printf("Enable to lock memory!");
		exit(0);
	}
}

void free_record(RECORD x)
	{
		free(x.name);
		free(x.adress);
		free(x.number);
		free(x.state);
	}
