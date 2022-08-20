#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 5 || age >= 60)
        printf("Free of charge!\n");
    else
        printf("Not free of charge!\n");

    return 0;
}