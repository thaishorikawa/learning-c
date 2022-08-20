#include <stdio.h>
#include <stdlib.h>     

int main()
{
    int a, b, c, highest, lowest;

    printf("Entre three values: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b)
    {   
        if (a < c)
            lowest = a;
        else
            lowest = c;
    }
    else
    {
        if (b < c)
            lowest = b;
        else 
            lowest = c;
    }

    if (a > b)
    {
        if (a > c)
            highest = a;
        else 
            highest = c;
    }
    else
    {
        if (b > c)
            highest = b;
        else 
            highest = c;
    }
    printf("Lowest: %d\nHighest: %d\n", lowest, highest);
    
    return 0;
}