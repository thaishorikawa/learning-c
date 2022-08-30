#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, x, age, lowerAge, higherAge, womenQt;
    char gender;
    float salary, averageSalary;

    lowerAge = 0;
    higherAge = 0;
    womenQt = 0;
    averageSalary = 0;
    printf("Enter the number of respondents: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        printf("Enter your age, your gender and your salary: ");
        scanf("%d %c%f", &age, &gender, &salary);

        averageSalary += salary;

        if (i == 1)
            lowerAge = age;
        if (lowerAge > age)
            lowerAge = age;
        if (higherAge < age)
            higherAge = age;

        if (gender == 'F' && salary <= 2000)
            womenQt++;
    }
    printf("Average salary R$%.2f\n", averageSalary / x);
    printf("Lower age: %d\nHigher age: %d\n", lowerAge, higherAge);
    printf("Number of women with salary up to R$2000,00: %d\n\n", womenQt);

    return 0;
}