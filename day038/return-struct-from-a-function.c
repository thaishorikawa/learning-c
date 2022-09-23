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

void displayPerson(Person p)
{
    printf("\tName: %s", p.name);
    printf("\tAge: %d\n", p.age);
    printf("\tGender: %c\n", p.gender);
    printf("\tBirth Date: %d/%d/%d\n", p.birthDate.day, p.birthDate.month, p.birthDate.year);
}

Person readPerson()
{
    Person p;

    printf("Enter your name: ");
    fgets(p.name, 100, stdin);
    printf("Enter your age: ");
    scanf("%d", &p.age);
    printf("Enter f or m for gender: ");
    scanf(" %c", &p.gender);
    printf("Enter your birth date - dd mm yyyy: ");
    scanf("%d%d%d", &p.birthDate.day, &p.birthDate.month, &p.birthDate.year);
    return p;
}

int main()
{
    Person person;
    
    person = readPerson();
    displayPerson(person);

    return 0;
}