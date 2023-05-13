#include <stdio.h>

void main()
{
    int age;
    printf("Give your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are an underage");
    } 
    else if (18 < age && age < 65)
    {
        printf("You are an adult");
    }
    else
    {
        printf("You are a retired");
    }  
}
