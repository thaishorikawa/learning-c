#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, y, i;

    printf("Enter a number to X and Y: ");
    scanf("%d%d", &x, &y);

    for (i = 1; i <= y; i++)
    {
        printf("%3d ", i);
        if (i % x == 0)
            printf("\n");
    }
    return 0;
}