#include <stdio.h>  
#include <stdlib.h>

int main()
{
    float grade1, grade2, grade3;
    char choice;

    printf("\nDo you want to use an arithmetic or weighted average?\n\na - arithmetic\np - weighted\n\n");
    scanf("%c", &choice);

    printf("\nEnter three grades: ");
    scanf("%f%f%f", &grade1, &grade2, &grade3);

    if (choice == 'a')
        printf("\nArithmetic average: %.2f\n\n", (grade1 + grade2 + grade3) / 3);
    else 
        if (choice == 'p')
            printf("\nWeighted average: %.2f\n\n", (grade1 * 3 + grade2 * 3 + grade3 * 4) / 10);
        else
            printf("\nInvalid option!\n\n");

    return 0;
}