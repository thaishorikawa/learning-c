#include <stdlib.h>
#include <stdio.h>

void greaterLower(int *arr, int size, int *lower, int *greater)
{
    int i;
    *lower = *arr;
    *greater = *arr;

    for (i = 1; i < size; i++)
    {
        if (*lower > *(arr + i))
            *lower = *(arr + i);
        if (*greater < *(arr + i))
            *greater = *(arr + i);
    }
}

int main()
{
    int lower, greater, a[10] = {45, 89, 69, 23, 14, 75, 2, 45, 100, 58};

    printf("Lower: %d\tGreater: %d\n", lower, greater);
    greaterLower(a, 10, &lower, &greater);
    printf("Lower: %d\tGreater: %d\n", lower, greater);

    return 0;
}