#include <stdio.h>
#include <stdlib.h>

int main()
{
    float realAmount, dollarAmount, dollarRate;

    dollarRate = 5.30;

    printf("\nWrite the amount of real you want to exchange: R$");
    scanf("%f", &realAmount);

    dollarAmount = realAmount / dollarRate;
    printf("\nDollar amount is: $%.2f", dollarAmount);
    return 0;
}