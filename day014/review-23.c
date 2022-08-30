#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i += 2)
    {
        for (j = 6 + i; j >= 4 + i; j--)
            printf("I = %d\tJ = %d\n", i, j);
        printf("\n");
    }
    return 0;
}