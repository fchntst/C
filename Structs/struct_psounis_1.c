#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

struct person{
    char name[20];
    char surname[20];
    struct date birth;
};

int main()
{
    struct person p;
    
    printf("Give your name: ");
    scanf("%s", p.name);

    printf("Give your surname: ");
    scanf("%s", p.surname);

    printf("Give the month of your birth: ");
    scanf("%d", &p.birth.month);

    printf("Give the day of your birth: ");
    scanf("%d", &p.birth.day);

    printf("Give the year of your birth: ");
    scanf("%d", &p.birth.year);

    printf("\nname:%s %s\n", p.name, p.surname);
    printf("birth date: %d.%d.%d\n", p.birth.month, 
            p.birth.day, p.birth.year);

    return 0;
}