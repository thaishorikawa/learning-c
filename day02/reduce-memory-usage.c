#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    short int x;

    y = 0;
    x = 32767;

    printf("Size of an int in memory: %d bytes\n", sizeof y);
    printf("Size in memory of short int: %d bytes\n", sizeof x);
}