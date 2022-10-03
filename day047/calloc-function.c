#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *x;

    x = calloc(1, sizeof(char));

    if (x)
    {
        printf("Memory allocation was a success!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    }
    else
    {
        printf("Memory allocation error!\n");
    }

    return 0;
}