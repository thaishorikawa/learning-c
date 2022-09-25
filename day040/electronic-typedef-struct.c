#include <stdlib.h>
#include <stdio.h>

typedef struct 
{
    char type[100];
    char brand[50];
    char model[25];
    char energy;
    char description[500];
    int quantity;
    int code;
} Electronic;

void displayElectronic(Electronic e)
{
    printf("\n\tType: %s", e.type);
    printf("\tBrand: %s", e.brand);
    printf("\tModel: %s", e.model);
    printf("\tEnergy: %c\tQuantity: %d\n", e.energy, e.quantity);
    printf("\tDescription: %s", e.description);
    printf("\tCode: %d\n", e.code);
}

Electronic readElectronic()
{
    Electronic e;

    printf("Enter a type: ");
    fgets(e.type, 100, stdin);
    printf("Brand: ");
    fgets(e.brand, 50, stdin);
    printf("Model: ");
    fgets(e.model, 25, stdin);
    printf("Energy efficiency: ");
    scanf("%c", &e.energy);
    getchar();
    printf("Description: ");
    fgets(e.description, 500, stdin);
    printf("Quantity and code: ");
    scanf("%d%d", &e.quantity, &e.code);
    return e;
}

int main()
{
    Electronic ele;

    ele = readElectronic();
    displayElectronic(ele);

    return 0;
}
