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
        return 0;
    }
}

void editContact(Contact **c, int quant)
{
    int id;

    display(c, quant);

    printf("\n\tEnter the code of the contact you want to edit: \n");
    scanf("%d", &id);
    getchar();
    id--;

    if (id >= 0 && id < quant)
    {
        Contact *new = malloc(sizeof(Contact));

        printf("\nContact name: ");
        scanf("%50[^\n]", new->name);
        printf("\nContact birthday date dd mm yyyy: ");
        scanf("%d%d%d", &new->day, &new->month, &new->year);
        getchar();
        c[id] = new;
    }
    else
        printf("\n\tInvalid code!\n");
}

void save(Contact **c, int quant, char file1[])
{
    FILE *file = fopen(file1, "w");
    int i;

    if (file)
    {
        fprintf(file, "%d\n", quant);
        for (i = 0; i < quant; i++)
        {
            fputs(c[i]->name, file);
            fputc('\n', file);
            fprintf(file, "%d %d %d\n", c[i]->day, c[i]->month, c[i]->year);
        }
        fclose(file);
    }
    else
        printf("\n\tIt was not possible to open/create a file!\n");
}

int main()
{
    Contact *calendar[50];
    char file[] = {"birthday-calendar.txt"};
    int option, size = 50, quant = 0;

    do
    {
        printf("\n\t0 - Exit\n\t1 - Register\n\t2 - Edit\n\t3 - Display\n\t4 - Save\n\t5 - Read file\n");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            quant += registerContact(calendar, quant, size);
            break;
        case 2:
            editContact(calendar, quant);
            break;
        case 3:
            display(calendar, quant);
            break;
        case 4:
            save(calendar, quant, file);
            break;
        case 5:
            break;
        default:
            if (option != 0)
                printf("Invalid option!\n");
        }
    } while (option != 0);

    return 0;
}