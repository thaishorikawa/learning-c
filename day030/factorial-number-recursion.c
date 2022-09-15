#include <stdlib.h>
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;

    printf("Enter a number greater than 0: ");
    scanf("%d", &n);

    printf("Factorial of %d: %d\n", n, factorial(n));

    return 0;
}