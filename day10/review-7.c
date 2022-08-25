#include <stdlib.h>
#include <stdio.h>

int main()
{
    int option, num1, num2;

    do
    {
        printf("\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n0 - Exit\n\n");
        scanf("%d", &option);

        if (option > 0 && option < 5)
        {
            printf("Enter two integer numbers: ");
            scanf("%d%d", &num1, &num2);
        }

        switch (option)
        {
        case 0:
            printf("Leaving...\n");
            break;
        case 1:
            printf("Addition: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtraction: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplication: %d\n", num1 * num2);
            break;
        case 4:
            while (num2 == 0)
            {
                printf("Division by 0 is not allowed!\nEnter another number: ");
                scanf("%d", &num2);
            }
            printf("Division: %d\n", num1 / num2);
            break;
        default:
            printf("Invalid option!\nEnter a valid option: ");
        }
    } while (option != 0);

    return 0;
}