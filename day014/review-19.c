#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    long double sum, number;

    sum = 1;
    number = 1;
    for (i = 2; i <= 64; i++)
    {
        number = number * 2;
        sum += number;
        __mingw_printf("%d Value: %Lf\n", i, number);
    }
    __mingw_printf("Final value: %Lf\n", sum);

    return 0;
}