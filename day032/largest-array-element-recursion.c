#include <stdlib.h>
#include <stdio.h>

int largest(int a[], int size, int index)
{
    if (size == 0)
        return a[index];
    else
    {
        if (a[size - 1] > a[index])
            return largest(a, size - 1, size - 1);
        else
            return largest(a, size - 1, index);
    }
}

int main()
{
    int arr[10] = {11, 258, 13, 445, 58, 67, 7, 8, 9, 19};

    printf("The largest number of the array is: %d\n", largest(arr, 10, 0));

    return 0;
}