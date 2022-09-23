#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
    int day, month, year;
} BirthDate;

typedef struct 
{
    BirthDate birthDate;
    int age;
    char gender;
    char name[100];
} Person;

int main()
{
    Person person;

    printf("%ld\n", sizeof(person));

    printf("Enter your name: ");
    fgets(person.name, 100, stdin);
    printf("Enter your age: ");
    scanf("%d", &person.age);
    printf("Enter f or m for gender: ");
    scanf(" %c", &person.gender);
    printf("Enter your birth date - dd mm yyyy: ");
    scanf("%d%d%d", &person.birthDate.day, &person.birthDate.month, &person.birthDate.year);

    printf("\nName: %sAge: %d\nGender: %c\n", person.name, person.age, person.gender);
    printf("Birth date: %d/%d/%d\n", person.birthDate.day, person.birthDate.month, person.birthDate.year);

    return 0;
}