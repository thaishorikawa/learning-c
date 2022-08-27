#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Choose a number for a and for b: ");
    scanf("%d%d", &a, &b);

    printf("Before changing:\nFirst number: %d\nSecond number: %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After changing:\nFirst number: %d\nSecond number: %d\n", a, b);
}