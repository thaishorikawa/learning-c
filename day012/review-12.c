#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num, i, divisors, option;

    divisors = 0;
    do
    {
        do
        {
            printf("Enter a number greater than 1: ");
            scanf("%d", &num);
        } while (num < 2);

        printf("The divisors of %d: ", num);
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
                divisors++;
            }
        }
        printf("\n");

        if (divisors > 2)
            printf("%d is not a prime number\n", num);
        else
            printf("%d is a prime number\n", num);
        printf("\n1 - Enter another number\n2 - Exit\n");
        scanf("%d", &option);
    } while (option != 2);

    return 0;
}