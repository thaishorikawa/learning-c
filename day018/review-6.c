#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, option;
    float arr[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number of position %d: ", i);
        scanf("%f", &arr[i]);
    }

    do
    {
        printf("\n0 - Exit\n1 - Print array\n2 - Print array in reverse order\n");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("Leaving...\n");
            break;
        case 1:
            for (i = 0; i < 10; i++)
                printf("%.2f ", arr[i]);
            printf("\n");
            break;
        case 2:
            for (i = 9; i >= 0; i--)
                printf("%.2f ", arr[i]);
            printf("\n");
            break;
        default:
            printf("Invalid option!\n");
        }
    } while (option != 0);

    return 0;    
}