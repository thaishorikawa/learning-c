#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, arr1[25], arr2[25], arr3[25];

    srand(time(NULL));

    for (i = 0; i < 25; i++)
    {
        arr1[i] = rand() % 100;
        arr2[i] = rand() % 100;
    }

    for (i = 0; i < 25; i++)
        arr3[i] = arr1[i] + arr2[i];

    printf("\nArray 1: ");
    for (i = 0; i < 25; i++)
        printf("%4d ", arr1[i]);

    printf("\nArray 2: ");
    for (i = 0; i < 25; i++)
        printf("%4d ", arr2[i]);

    printf("\nArray 3: ");
    for (i = 0; i < 25; i++)
        printf("%4d ", arr3[i]);

    return 0;
}