#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter a number you want: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("The number is divisible by 2, 3 and 5.\n\n");
    else
        printf("The number is not divisible by 2, 3 and 5.\n\n");
    
    return (0);
}