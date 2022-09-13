#include <stdlib.h>
#include <stdio.h>

int age2 = 35;

void display(int id)
{
    id++;
    age2++;
}

int main()
{
    int age = 25;

    printf("\nAge: %d\n", age);
    printf("\nAge2: %d\n", age2);
    display(age);
    printf("\nAge: %d\n", age);
    printf("\nAge2: %d\n", age2);

    return 0;
}