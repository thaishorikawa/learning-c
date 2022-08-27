#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    a = 10;
    b = 20;
    printf("\nAddition: %d\n", a + b);
    printf("\nSubtraction: %d\n", a - b);
    printf("\nMultiplication: %d\n", a * b);
    printf("\nDivision: %.2f\n\n", (float)a / b);

    return 0;
}