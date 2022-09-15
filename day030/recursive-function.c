#include <stdlib.h>
#include <stdio.h>

void display(int x)
{
    if(x == 0)
        printf("%d ", x);
    else
    {
        printf("%d ", x);
        display(x - 1);
    }
}

int main()
{
    int n;

    printf("Enter a number greater than 0: ");
    scanf("%d", &n);

    display(n);

    return 0;
}