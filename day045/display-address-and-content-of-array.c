#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, arr[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};

    for (i = 0; i < 10; i++)
        printf("Address: %p\t\tContent: %d\n", arr + i, *(arr + i));

    return 0;
}