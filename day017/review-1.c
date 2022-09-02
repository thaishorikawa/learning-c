#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, arr1[10], arr2[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number of position %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++)
        arr2[i] = arr1[i] * arr1[i];

    printf("\nArray 1: ");
    for (i = 0; i < 10; i++)
        printf("%3d ", arr1[i]);

    printf("\nArray 2: ");
    for (i = 0; i < 10; i ++)
        printf("%3d ", arr2[i]);

    return 0;
}