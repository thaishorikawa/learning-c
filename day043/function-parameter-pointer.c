#include <stdlib.h>
#include <stdio.h>

void display(int *num)
{
    printf("%d\n", *num);
    *num = 80;
}

int main()
{
    int age = 35;

    display(&age);
    printf("In main function: %d\n", age);

    return 0;
}