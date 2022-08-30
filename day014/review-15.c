#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, divisors, number;

    number = 8;
    do
    {
        divisors = 0;
        number += 2;
        for (i = 1; i <= 10; i++)
        {
            if (number % i == 0)
                divisors++;
            else
                break;
        }
    } while (divisors != 10);

    printf("\nNumber: %d\n\n", number);
    
    return 0;
}