#include <stdlib.h>
#include <stdio.h>

void swap(int a[], int start, int end)
{
    int aux;
    if (start < end)
    {
        aux = a[start];
        a[start] = a[end];
        a[end] = aux;
        swap(a, start + 1, end - 1);
    }
}

void display(int a[], int size)
{
    if (size == 1)
        printf("%d, ", a[size - 1]);
    else
    {
        display(a, size - 1);
        printf("%d, ", a[size - 1]);
    }
}

int main()
{
    int arr[10] = {11, 258, 13, 445, 58, 67, 700, 8, 9, 10};

    display(arr, 10);
    swap(arr, 0, 9);
    printf("\n");
    display(arr, 10);

    return 0;
}