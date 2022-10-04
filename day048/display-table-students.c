#include <stdlib.h>
#include <stdio.h>

int main()
{
    char names[3][30];
    float grades[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the name and the grade of the student: ");
        scanf("%s%f", names[i], &grades[i]);
    }

    printf("\n\tName\tGrade\n");
    for (i = 0; i < 3; i++)
        printf("\t%s\t%.2f\n", names[i], grades[i]);

    return 0;
}