#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantity, i;
    float salary, totalSalaries, higherSalary, lowerSalary;

    totalSalaries = 0;
    higherSalary = 0;
    lowerSalary = 0;
    do
    {
        printf("How many employees does your company have?\n\n");
        scanf("%d", &quantity);
    } while (quantity < 0);

    for (i = 1; i <= quantity; i++)
    {
        printf("%d salary: ", i);
        scanf("%f", &salary);

        totalSalaries += salary;
        if (lowerSalary > salary)
            lowerSalary = salary;
        if (higherSalary < salary)
            higherSalary = salary;
    }
    printf("Average salary R$%.2f\n", totalSalaries / quantity);
    printf("Higher salary R$%.2f\n", higherSalary);
    printf("Lower salary R$%.2f\n\n", lowerSalary);
    
    return 0;
}