#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade1, grade2, gradeAverage;

    do
    {
        printf("\nEnter first grade: ");
        scanf("%f", &grade1);
    } while (grade1 < 0 || grade1 > 10);

    do
    {
        printf("\nEnter second grade: ");
        scanf("%f", &grade2);
    } while (grade2 < 0 || grade2 > 10);

    gradeAverage = (grade1 + grade2) / 2;
    printf("\nFinal grade: %.2f\n", gradeAverage);

    return 0;
}