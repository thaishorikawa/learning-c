#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A, *B, **C, ***D;

    printf("Enter a number: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("The double of %d is: %d\n", A, 2 * *B);
    printf("The triple of %d is: %d\n", A, 3 * **C);
    printf("The quadruple of %d is: %d\n", A, 4 * ***D);

    return 0;
}