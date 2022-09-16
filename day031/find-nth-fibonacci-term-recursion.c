#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n)
{
    if(n == 1)
        return 0;
    else
    {
        if(n == 2)
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    printf("Enter a number greater than 0: ");
    scanf("%d", &n);

    printf("The term %d is: %d\n", n, fibonacci(n));
    
    return 0;
}