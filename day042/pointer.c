#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 10;
    int *p;

    p = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value pointed by p: %d\n", *p);

    return 0;
}