#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("\nEnter three values: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\nThe 3 sides make up a triangle!\n");
        if (a == b && a == c)
            printf("\nEquilateral\n");
        else if (a == b || a == c || b == c)
            printf("\nIsosceles\n\n");
        else
            printf("\nScalene\n\n");
    }
    else
        printf("\nThe 3 sides DON'T make up a triangle!\n\n");

    return 0;
}