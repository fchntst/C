#include <stdio.h>
#include <stdlib.h>
#define string_size 50

struct contacts{
    char name[string_size];
    char number[string_size];
};

int main()
{
    int i, n;
    struct contacts *array;

    // Giving the size of the array
    printf("How many contacts do you want: ");
    scanf("%d", &n);

    // we lock dynamicallly the memory
    array = malloc(sizeof(struct contacts) * n);
    if(!array)
    {
        printf("Enable to lock memory!");
        exit(0);
    }

    //scan of the contacts
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        printf("%d) Give the name: ", i+1);
        gets(array[i].name);

        printf("%d) Give the number: ", i+1);
        gets(array[i].number);
    }

    //printing of the contacts
    printf("\t==== CONTACTS ====");
    for(i=0; i<n; i++)
    {
        printf("\n%d) %s, (%s)", i+1, 
        array[i].name, array[i].number);
    }
    
    printf("\n");
    free(array);
    return 0;
}
