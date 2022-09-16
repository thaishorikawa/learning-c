#include <stdlib.h>
#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int main()
{
    int x, n;

    printf("Enter a number for X and for N: ");
    scanf("%d%d", &x, &n);

    printf("%d to the %dth power is: %d\n", x, n, power(x, n));

    return 0;
}