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
    Person person1;

    person1.age = 35;
    person1.gender = 'f';
    strcpy(person1.name, "Maria");

    printf("Name: %s\nAge: %d\nGender: %c\n", person1.name, person1.age, person1.gender);

    return 0;
}