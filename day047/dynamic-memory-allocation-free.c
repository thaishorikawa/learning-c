#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, size, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    srand(time(NULL));

    arr = malloc(size * sizeof(int));

    if (arr)
    {
        printf("Memory allocation was a success!\n");
        for (i = 0; i < size; i++)
        {
            *(arr + i) = rand() % 100;
            printf("%d ", *(arr + i));
        }
        printf("\n");

        printf("Enter the new size of the array: ");
        scanf("%d", &size);

        arr = realloc(arr, size);

        printf("\nArray realocation:\n");
        for (i = 0; i < size; i++)
            printf("%d ", *(arr + i));
        printf("\n");

        free(arr);
    }
    else
    {
        printf("Memory allocation error!\n");
    }

    return 0;
}