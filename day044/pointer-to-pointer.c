#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Address of A: %p\tContent of A: %d\n", &A, A);
    printf("Address of B: %p\tContent of B: %p\n", &B, B);
    printf("Content pointed by B: %d\n", *B);
    printf("Address of C: %p\tContent of C: %p\n", &C, C);
    printf("Content pointed by C: %d\n", **C);

    return 0;
}