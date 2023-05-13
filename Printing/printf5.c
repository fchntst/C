#include <stdio.h>
#define C 5

void square(int n);
void print();
void input_array(int n);


int main()
{
    int user_input;
    printf("\t Welcome\n");
    printf("--------------------------\n");

    
    do{
        printf("Give a number from 1 to 4: ");
        scanf("%d", &user_input);
    } while (user_input < 1 || user_input > 4);

    if (user_input == 1)
        square(user_input);

    else if (user_input == 2)
        print(); 
    
    else if (user_input == 3)
    {
        float number;
        printf("Give a float number to see the 1/4 of your input: ");
        scanf("%f", &number);
        printf("The result is: %.4f", number);
    }

    else if (user_input == 4)
        input_array(user_input);

    return 0;
}

void square(int n)
{
    int x;
    printf("Give a number to calculate the square: ");
    scanf("%d", &x);
    printf("The square is: %d", x*x);
}

void print()
{
    int N;
    int i;
    printf("Give a number to print N times the word \"Morning\": ");
    scanf("%d", &N);
    for (i=0; i<N; i++)
        printf("Morning!\n");
}

void input_array(int n)
{
    double array[C];
    int i;
    double sum, average;

    printf("Give 5 number to calculate the average!");
    
    for (i=0; i<C; i++)
    {
        printf("\nGive %dth float number: ", i+1);
        scanf("%lf", &array[i]);
    }
    sum = 0.0;
    for (i=0; i<C; i++)
        sum += array[i];
    average = sum / 5;

    printf("The average is: %f", average);
}
