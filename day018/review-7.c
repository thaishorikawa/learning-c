#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, change, copy, arr[100];

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        arr[i] = rand() % 1000;
    }

    printf("\nBefore:\n");
    for (i = 0; i < 100; i++)
        printf("%3d ", arr[i]);

    do
    {
        change = 0;
        for (i = 0; i < 99; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                copy = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = copy;
                change = 1;
            }
        }
    } while (change);

    printf("\nAfter:\n");
    for (i = 0; i < 100; i++)
        printf("%3d ", arr[i]);

    return 0;
}