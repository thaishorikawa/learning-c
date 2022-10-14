#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int factorial(int num)
{
    No *remove, *stack = NULL;

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

    printf("Enter a number greater than 0 to find the factorial: ");
    scanf("%d", &value);
    printf("\tFactorial of %d: %d\n", value, factorial(value));
}