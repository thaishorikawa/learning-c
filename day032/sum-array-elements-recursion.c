#include <stdlib.h>
#include <stdio.h>

int sum(int a[], int size)
{
    if (size == 0)
        return 0;
    else
        return a[size - 1] + sum(a, size - 1); 
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Sum: %d\n", sum(arr, 10));

    return 0;
}