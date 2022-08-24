#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter a number greater than zero: ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("\nInvalid number. Enter a number greater than zero: ");
        scanf("%d", &num);
    }
    printf("\nNumber: %d\n\n", num);
    
    return 0;
}