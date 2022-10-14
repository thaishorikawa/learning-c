#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct no
{
    int value;
    struct no *next;
} No;

No* stack1(No *stack, int num);

No* unstack(No **stack);

void display(No *stack);

#endif
