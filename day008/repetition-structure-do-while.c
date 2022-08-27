#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("\nEnter a number greater than zero: ");
        scanf("%d", &num);
    } while (num <= 0);
    printf("\nNumber: %d\n\n", num);

    return 0;
}