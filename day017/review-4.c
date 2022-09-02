#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, quant[10];
    float totalAmount = 0, partialAmount, price[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the price of product %d and the quantity sold: ", i);
        scanf("%f%d", &price[i], &quant[i]);
    }

    for (i = 0; i < 10; i++)
    {
        partialAmount = quant[i] * price[i];
        printf("Sold: %d\tPrice: R$%.2f\tTotal amount: R$%.2f\n", quant[i], price[i], partialAmount);
        totalAmount += partialAmount;
    }

    printf("\nTotal sales: R$%.2f\n", totalAmount);
    printf("Commission paid to the salesperson: R$%.2f\n\n", totalAmount * 0.05);

    return 0;
}