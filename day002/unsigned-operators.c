#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    unsigned short int y;

    x = 2147483647;
    y = 55000;
    printf("\n\t %u \n\n", x);
    printf("\n\t %hu \n\n", y);
    printf("\n\t %u \n\n", ++x);
    return 0;
}