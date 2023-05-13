#include <stdio.h>
#include <stdlib.h>
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


int main()
{
	
	RECORD *array;
	int i, N;

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

    for(i=0; i<N; i++)
	{
		printf("%d) person\n", i+1);
		read_record(&array[i]);
	}

	for(i=0; i<N; i++)
	{
		print_record(array[i]);
	}
	
	for(i=0; i<N; i++)
		free_record(array[i]);

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

/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

struct info
{
   char *name;
   char *address;
   char *phone;
   char *state;
};

typedef struct info RECORD;
void read_struct(RECORD *person);
void print_struct(RECORD person);
void dynamic_lock_struct(RECORD *p);
void dynamic_free_struct(RECORD f);

int main()
{
   RECORD *person;
   int i, N;

   printf("Give N size: ");
   scanf("%d", &N);

   person = malloc(sizeof(RECORD) * N);
   if(!person)
   {
      printf("Unable to lock memory.");
      exit(0);
   }
   
   for(i=0; i<N; i++)
      dynamic_lock_struct(&person[i]);
   
   for(i=0; i<N; i++)
   {
      printf("%d. person\n", i+1);
      read_struct(&person[i]);
   }
      
   printf("\nINFO");
   printf("\n====\n");
   for(i=0; i<N; i++)
      print_struct(person[i]);
   
   for(i=0; i<N; i++)
      dynamic_free_struct(person[i]);
   
   free(person);
}

void read_struct(RECORD *person)
{
   printf("Give name: ");
   scanf("%s", (*person).name);

   printf("Give address: ");
   scanf("%s", (*person).address);

   printf("Give phone: ");
   scanf("%s", (*person).phone);

   printf("Give state: ");
   scanf("%s", (*person).state);
}

void print_struct(RECORD person)
{
   printf("%s: %s %s %s\n", person.name, person.address,
   person.phone, person.state);
}

void dynamic_lock_struct(RECORD *p)
{
   p->name = malloc(sizeof(char) * SIZE);
   if(!p->name)
   {
      printf("Unable to lock memory.");
   }

   p->address = malloc(sizeof(char) * SIZE);
   if(!p->address)
   {
      printf("Unable to lock memory.");
      exit(0);
   }

   p->phone = malloc(sizeof(char) * SIZE);
   if(!p->phone)
   {
      printf("Unable to lock memory.");
      exit(0);
   }

   p->state = malloc(sizeof(char) * SIZE);
   if(!p->state)
   {
      printf("Unable to lock memory.");
      exit(0);
   }
}

void dynamic_free_struct(RECORD f)
{
   free(f.name);
   free(f.address);
   free(f.phone);
   free(f.state);
}
*/