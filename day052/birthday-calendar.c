#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int day, month, year;
} Contact;

void display(Contact **c, int quant)
{
    int i;

    printf("\n\t\tContacts list:\n");
    printf("\t--------------------------------\n");
    for (i = 0; i < quant; i++)
    {
        printf("\t%d = %2d/%2d/%4d\t%s\n", i + 1, c[i]->day, c[i]->month, c[i]->year, c[i]->name);
    }
    printf("\t--------------------------------\n");
}

int registerContact(Contact **c, int quant, int size)
{
    if (quant < size)
    {
        Contact *new = malloc(sizeof(Contact));

        printf("\nContact name: ");
        scanf("%50[^\n]", new->name);
        printf("\nContact birthday date dd mm yyyy: ");
        scanf("%d%d%d", &new->day, &new->month, &new->year);
        getchar();
        c[quant] = new;
        return 1;
    }
    else
    {
        printf("\n\tIt is not possible to create a new register. Array is full!\n");
    }
}

int main()
{
    Contact *calendar[50];
    int size = 50, quant = 0;

    display(calendar, quant);
    quant += registerContact(calendar, quant, size);
    printf("\nquant: %d\n", quant);

    display(calendar, quant);
    quant += registerContact(calendar, quant, size);
    printf("\nquant: %d\n", quant);
    display(calendar, quant);

    return 0;
}