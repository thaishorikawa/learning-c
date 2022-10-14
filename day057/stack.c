#include <stdio.h>
#include "stack.h"

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