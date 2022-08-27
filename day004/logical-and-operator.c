#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender;
    int age;

    printf("\nWrite your gender f or m and your age: ");
    scanf("%c%d", &gender, &age);

    if (gender == 'm' && age == 18)
        printf("\nMandatory military conscription!\n\n");
    else
        printf("\nDismissed!\n\n");

    return 0;
}