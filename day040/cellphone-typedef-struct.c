#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char brand[50];
    char model[25];
    char description[500];
    int memory;
    int code;
} Cellphone;

void displayElectronic(Cellphone e)
{
    printf("\tBrand: %s", e.brand);
    printf("\tModel: %s", e.model);
    printf("\tDescription: %s", e.description);
    printf("\tMemory: %d\n", e.memory);
    printf("\tCode: %d\n", e.code);
}

Cellphone readElectronic()
{
    Cellphone e;

    printf("Brand: ");
    fgets(e.brand, 50, stdin);
    printf("Model: ");
    fgets(e.model, 25, stdin);
    printf("Description: ");
    fgets(e.description, 500, stdin);
    printf("Memory: ");
    scanf("%d", &e.memory);
    printf("Code: ");
    scanf("%d", &e.code);
    return e;
}

int main()
{
    Cellphone cell;

    cell = readElectronic();
    displayElectronic(cell);

    return 0;
}
