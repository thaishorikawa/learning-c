#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, age, ageShortStudents, quantityShortStudents, quantityHeightGreater20;
    float averageAge, averageHeight, height, heightGreater20;

    ageShortStudents = 0;
    quantityShortStudents = 0;
    quantityHeightGreater20 = 0;
    heightGreater20 = 0;
    for (i = 1; i <= 45; i++)
    {
        printf("Enter your age and your height[m]: ");
        scanf("%d%f", &age, &height);

        if (height < 1.7)
        {
            ageShortStudents += age;
            quantityShortStudents++;
        }

        if (age > 20)
        {
             heightGreater20 += height;
             quantityHeightGreater20++;
        }
    }
    averageAge = (float)ageShortStudents / quantityShortStudents;
    averageHeight = heightGreater20 / quantityHeightGreater20;
    printf("Average age of students under 1,70m: %.2f\n", averageAge);
    printf("Average height of students older 20 years: %.2f\n", averageHeight);

    return 0;
}