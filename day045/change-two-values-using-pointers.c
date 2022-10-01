#include <stdlib.h>
#include <stdio.h>

void change(float *a, float *b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    float num1 = 50, num2 = 102;

    printf("Num 1: %.2f\tNum 2: %.2f\n", num1, num2);
    change(&num1, &num2);
    printf("Num 1: %.2f\tNum 2: %.2f\n", num1, num2);

    return 0;
}