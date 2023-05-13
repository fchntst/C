#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

struct info{
    char *name;
    char *adress;
    char *number;
    char *state;
};

typedef struct info RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void irit_record(RECORD *p);
void free_record(RECORD x);
void copy_record(RECORD *dest, RECORD src);


int main()
{
	
	RECORD *array, x;
	int i, N, choice;

	printf("Give the number of the contacts: ");
	scanf("%d", &N);

	array = malloc(sizeof(RECORD)* N);
	if(!array)
	{
		printf("Enable to lock memory");
		exit(0);
	}

    for(i=0; i<N; i++)
        irit_record(&array[i]);
    irit_record(&x);

    for(i=0; i<N; i++)
	{
		printf("%d) person\n", i+1);
		read_record(&array[i]);
	}

	for(i=0; i<N; i++)
	{
		print_record(array[i]);
	}

    printf("\n\nWhich contact do you wanna copy (0-%d): ", N-1);
    scanf("%d", &choice);

    copy_record(&x, array[choice]);

    printf("\n\nPrinting of the copy!\n");
    print_record(x);
	
	for(i=0; i<N; i++)
		free_record(array[i]);

	free_record(x);
    free(array);
	
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

void irit_record(RECORD *p)
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

void copy_record(RECORD *dest, RECORD src)
{
    strcpy((*dest).name, src.name);
    strcpy((*dest).adress, src.adress);
    strcpy((*dest).number, src.number);
    strcpy((*dest).state, src.state);
}


// this one is very hard
// there is no way i could do thing alone
// anyway i need to recode it!