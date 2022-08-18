#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Choose two values: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore changing: ");
    printf("\na: %d\nb: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter changing: ");
    printf("\na: %d\nb: %d\n", a, b);
    return 0;
}