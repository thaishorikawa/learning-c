#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount, conversionValue, dollarRate;
    int option;

    dollarRate = 5.30;

    printf("\nEnter the amount: ");
    scanf("%f", &amount);

    printf("\n1 - Real to Dollar\n2 - Dollar to Real\n\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        conversionValue = amount / dollarRate;
        printf("\nConversion value: $%.2f\n\n", conversionValue);
        break;
    case 2:
        conversionValue = amount * dollarRate;
        printf("\nConversion value: R$%.2f\n\n", conversionValue);
        break;
    default:
        printf("\nInvalid option!!\n\n");
    }
    printf("Conversion value: %.2f\n\n", conversionValue);
    
    return 0;
}