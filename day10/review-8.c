#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, n, A;

    A = 0;
    do 
    {
        printf("Enter a value to n: ");
        scanf("%d", &n);
    } while (n < 1);

    for (i = 1; i <= n; i++)
        A += i;
    
    printf("The sum of 1 to %d: %d\n\n", n, A);

    return 0;
}