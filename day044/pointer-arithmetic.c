#include <stdlib.h>
#include <stdio.h>

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

int main()
{
    int arr[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    display(arr, 10);

    return 0;
}