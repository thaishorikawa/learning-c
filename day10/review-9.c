#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, initialValue, finalValue;

    initialValue = 1;
    finalValue = 1;
    for (i = 1; i <= 29; i++)
    {
        initialValue = initialValue * 2;
        finalValue += initialValue;
    }

    printf("Value [cent]: %d\n", finalValue);
    printf("RS%.2f\n\n", finalValue / 100.0);
}