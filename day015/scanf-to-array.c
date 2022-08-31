#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int number[10];

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number of the position %d: ", i);
        scanf("%d", &number[i]);
    }

    printf("\n");
    for (i = 0; i < 10; i++)
        printf("%d ", number[i]);
    printf("\n\n");

    return 0;
}