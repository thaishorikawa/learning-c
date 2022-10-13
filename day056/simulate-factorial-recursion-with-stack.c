#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    int value;
    struct no *next;
} No;

No* stack1(No *stack, int num)
{
    No *new = malloc(sizeof(No));

    if (new)
    {
        new->value = num;
        new->next = stack;
        return new;
    }
    else
        printf("Memory allocation error!\n");
    return NULL;
}

No* unstack(No **stack)
{
    No *remove = NULL;

    if (*stack)
    {
        remove = *stack;
        *stack = remove->next;
    }
    else
        printf("Empty stack!\n");
    return remove;
}

void display(No *stack)
{
    printf("\n\tSTACK\n");
    while (stack)
    {
        printf("\t%d\n", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

// functio to calculate factorial by stack
int factorial(int num)
{
    No* remove, *stack = NULL;

    while (num > 1)
    {
        stack = stack1(stack, num);
        num--;
    }

    display(stack);

    while (stack)
    {
        remove = unstack(&stack);
        num = num * remove->value;
        free(remove);
    }
    return num;
}

int main()
{
    int value;

    printf("Enter a number greater than 0 to calculate factorial: ");
    scanf("%d", &value);
    printf("\tFactorial of %d: %d\n", value, factorial(value));
}