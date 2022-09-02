#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, end = 19, copy, arr1[20];

    for (a = 0; a < 20; a++)
    {
        printf("Enter the number of position %d: ", a);
        scanf("%d", &arr1[a]);
    }

    printf("\nOriginal array: ");
    for (a = 0; a < 20; a++)
        printf("%2d ", arr1[a]);

    for (a = 0; a < 10; a++)
    {
        copy = arr1[a];
        arr1[a] = arr1[end];
        arr1[end] = copy;
        end--;
    }

    printf("\nModified array: ");
    for (a = 0; a < 20; a++)
        printf("%2d ", arr1[a]);

    return 0;
}