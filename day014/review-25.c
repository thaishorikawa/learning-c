#include <stdlib.h>
#include <stdio.h>

int main()
{
    float grade1, grade2, averageGrade;
    int option;

    do
    {
        do
        {
            printf("Enter the first grade: ");
            scanf("%f", &grade1);
        } while (grade1 < 0 || grade1 > 10);

        do
        {
            printf("Enter the second grade: ");
            scanf("%f", &grade2);
        } while (grade2 < 0 || grade2 > 10);

        averageGrade = (grade1 + grade2) / 2;
        printf("Average grade: %.2f\n\n", averageGrade);

        printf("Do you want to do this calculation again?\n1 - Yes\n2 - No\n\n");
        scanf("%d", &option);
    } while (option != 2);

    return 0;
}