#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number, positive, negative;

    positive = 0;
    negative = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0)
            positive++;
        if (number < 0)
            negative++;
    } while (number != 0);
    
    printf("Number of positive numbers: %d\nNumber of negative numbers: %d\n\n", positive, negative);

    return 0;
}