#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    char *p2;
    float *p3;

    printf("Size: %ld\n", sizeof(p));
    printf("Size: %ld\n", sizeof(p2));
    printf("Size: %ld\n", sizeof(p3));

    return 0;
}