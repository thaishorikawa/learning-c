#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    int number[10];

    srand(time(NULL));

    for (i = 0; i < 10; i++)
        number[i] = rand();

    printf("\n\n");
    for (i = 0; i < 10; i++)
        printf("%d ", number[i]);
    printf("\n\n");

    return 0;
}