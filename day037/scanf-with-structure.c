#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int age;
    char gender;
    char name[100];
} Person;

int main()
{
    Person person;

    printf("Enter your name: ");
    fgets(person.name, 100, stdin);
    printf("Enter your age: ");
    scanf("%d", &person.age);
    printf("Enter f or m for gender: ");
    scanf(" %c", &person.gender);

    printf("\nName: %sAge: %d\nGender: %c\n", person.name, person.age, person.gender);

    return 0;
}
