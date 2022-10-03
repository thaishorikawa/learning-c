#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *x;

    x = malloc(sizeof(int));

    if (x)
    {
        printf("Memory allocation was a success!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }
    else
    {
        printf("Memory allocation error!\n");
    }

    return 0;
}