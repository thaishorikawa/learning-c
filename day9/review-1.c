#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num, i;

    do
    {
        printf("\nEnter a number between 1 and 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    for (i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    printf("\n");

    return 0;
}