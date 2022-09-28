#include <stdlib.h>
#include <stdio.h>

int main()
{
    char letter = 'a';
    char *p;

    p = &letter;

    printf("Value of num: %c\n", letter);
    printf("Address of num: %p\n", &letter);
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value pointed by p: %c\n", *p);

    return 0;
}