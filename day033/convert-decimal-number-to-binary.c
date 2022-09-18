#include <stdlib.h>
#include <stdio.h>

void binary(int n)
{
    if (n == 0)
        printf("%d", n);
    else
    {
        binary(n/2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    binary(n);
    printf("\n");

    return 0;
}