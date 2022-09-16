#include <stdlib.h>
#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter a number for N: ");
    scanf("%d", &n);

    printf("Sum from 1 to %d: %d\n", n, sum(n));

    return 0;
}