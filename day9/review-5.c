#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;

    for (i = 7; i <= 9999; i += 7)
        printf("%4d ", i);

    return 0;
}