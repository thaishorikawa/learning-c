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

typedef struct
{
    No *top;
    int size;
} Stack;

void stack_implementation(Stack *p)
{
    p->top = NULL;
    p->size = 0;
}

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
void stack(Stack *p)
{
    No *new = malloc(sizeof(No));

    if (new)
    {
        new->p = read_person();
        new->next = p->top;
        p->top = new;
        p->size++; 
    }
    else
        printf("\nMemory allocation error...\n");
}

No* unstack(Stack *p)
{
    if (p->top)
    {
        No *remove = p->top;
        p->top = remove->next;
        p->size--;
        return remove;
    }
    else
        printf("\nEmpty stack!\n");
    return NULL;
}

void display_stack(Stack *p)
{
    No *aux = p->top;
    printf("\n------------ STACK size: %d ------------\n", p->size);
    while (aux)
    {
        display_person(aux->p);
        aux = aux->next;
    }
    printf("\n------------ END OF THE STACK ------------\n");
}

int main()
{
    No *remove;
    Stack p;
    int option;

    stack_implementation(&p);

    do
    {
        printf("\n0 - Exit\n1 - Stack\n2 - Unstack\n3 - Display\n");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            stack(&p);
            break;
        case 2:
            remove = unstack(&p);
            if (remove)
            {
                printf("\nElement was successfully removed!\n");
                display_person(remove->p);

                free(remove);
            }
            else
                printf("\nNo need to remove.\n");
            break;
        case 3:
            display_stack(&p);
            break;
        default:
            if (option != 0)
                printf("\nInvalid option!\n");
        }
    } while (option != 0);

    return 0;
}