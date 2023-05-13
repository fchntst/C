#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

struct contacts{
    char name[SIZE];
    char surname[SIZE];
    char number[SIZE];
};

int main()
{
    int n, i;
    struct contacts *array;

    //Giving the size of the array
    printf("Give the size of your contacts: ");
    scanf("%d", &n);

    //We lock dynamically the memory
    array = malloc(sizeof(struct contacts) * n);
    if(!array)
    {
        printf("Enable to lock memory!");
        exit(0);
    }

    //scan of the contacts
    for(i=0; i<n; i++)
    {
        printf("%d) Give the name: ", i+1);
        scanf("%s", array[i].name);
        
        printf("%d) Give the surname: ", i+1);
        scanf("%s", array[i].surname);
        
    
        printf("%d) Give the phone number: ", i+1);
        scanf("%s", array[i].number);
    }

    //printing the contacts
    for(i=0; i<n; i++)
    {
        printf("\n%d) name: %s %s\t | number: %s", i+1,
                array[i].name, array[i].surname, array[i].number);
    }

    printf("\n");

    free(array);
    return 0;

}

/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct date
{
   int month;
   int day;
   int year;
};

struct contact
{
   char name[SIZE];
   char surname[SIZE];
   struct date birth;
};

int main()
{
   int n, i;
   struct contact *person;

   printf("Give the size of the contacts: ");
   scanf("%d", &n);

   person = malloc(sizeof(struct contact) * n);
   if(!person)
   {
      printf("Unable to lock memory.");
      exit(0);
   }

   fflush(stdin);

   for(i=0; i<n; i++)
   {
      printf("Give name: ");
      scanf("%s", person[i].name);

      printf("Give surname: ");
      scanf("%s", person[i].surname);

      printf("Give month day and year of birth: ");
      scanf("%d %d %d", &person[i].birth.month,
         &person[i].birth.day, &person[i].birth.year);
   }
   
   printf("CONTACTS\n");
   for(i=0; i<n; i++)
   {
      printf("name: %s %s\n", person[i].name, person[i].surname);
      printf("(%d.%d.%d)", person[i].birth.month,
      person[i].birth.day, person[i].birth.year);
      printf("\n===================\n");
   }

   free(person);
   return 0;
}
*/