#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    int number[40];

    srand(time(NULL));

    for (i = 0; i < 40; i++)
        number[i] = 1 + rand() % 99;
    
    printf("\n");
    for (i = 0; i < 40; i++)
        printf("%d ", number[i]);
    printf("\n\n");

    return 0;
}