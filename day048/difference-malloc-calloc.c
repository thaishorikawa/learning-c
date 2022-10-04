#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, *arr1, *arr2;

    arr1 = malloc(10 * sizeof(int));
    arr2 = calloc(10, sizeof(int));

    printf("\nWith malloc: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr1[i]);

    printf("\nWith calloc: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr2[i]);

    return 0;
}