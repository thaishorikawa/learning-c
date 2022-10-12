#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    char name[50];
    Date date;
} Person;

typedef struct no
{
    Person p;
    struct no *next;
} No;

Person read_person()
{
    Person p;

    printf("\nName and birth date dd mm yyyy:\n");
    scanf("%49[^\n]%d%d%d", p.name, &p.date.day, &p.date.month, &p.date.year);
    return p;
}

void display_person(Person p)
{
    printf("\nName: %s\nDate: %2d/%2d/%4d\n", p.name, p.date.day, p.date.month, p.date.year);
}

//function to push operation (stack)
No* stack(No *top)
{
    No *new = malloc(sizeof(No));

    if (new)
    {
        new->p = read_person();
        new->next = top;
        return new;
    }
    else
        printf("\nMemory allocation error...\n");
    return NULL;
}

No* unstack(No **top)
{
    if (*top != NULL)
    {
        No *remove = *top;
        *top = remove->next;
        return remove;
    }
    else
        printf("\nEmpty stack!\n");
    return NULL;
}


int main()
{
    No *remove, *top = NULL;
    int option;

    do
    {
        printf("\n0 - Exit\n1 - Stack\n2 - Unstack\n3 - Display\n");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            top = stack(top);
            break;
        case 2:
            remove = unstack(&top);
            if (remove)
            {
                printf("\nElement was successfully removed!\n");
                display_person(remove->p);
            }
            else
                printf("\nNo need to remove.\n");
            break;
        case 3:

            break;
        default:
            if (option != 0)
                printf("\nInvalid option!\n");
        }
    } while (option != 0);
}
