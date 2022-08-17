#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    x = 1.0;
    printf("Memory size of float: %d bytes\n", sizeof x);
    printf("Memory size of int: %d bytes\n", sizeof(int));

    return 0;
}