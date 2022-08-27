#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, n;

    printf("\nEnter an integer number greater than 1: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        printf("%d ", i * i);
    printf("\n");

    return 0;
}