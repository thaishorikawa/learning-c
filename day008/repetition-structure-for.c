#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;

    printf("\n%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d\n\n", i++);

    for (i = 0; i <= 10; i++)
        printf("%d ", i);
    printf("\n\n");

    return 0;
}