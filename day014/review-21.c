#include <stdlib.h>
#include <stdio.h>

int main()
{
    int year;
    float person1, person2;

    year = 0;
    person1 = 1.5;
    person2 = 1.1;
    while (person1 >= person2)
    {
        person1 += 0.02;
        person2 += 0.03;
        year++;
        printf("Person 1: %.2f\tPerson 2: %.2f\tYear: %d\n", person1, person2, year);
    }
    printf("It takes %d years!\n\n", year);

}