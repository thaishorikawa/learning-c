#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, sum;

    sum = 0;
    for (i = 1; i <= 1000; i += 2)
            sum += i;
    printf("\nSum of odd numbers from 1 to 1000: %d\n\n", sum);

    return 0;
}
