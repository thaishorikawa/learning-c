#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, a, b, r;

    r = 0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for (i = 1; i <= a; i++)
        r += b;
    
    printf("%d * %d = %d\n\n", a, b, r);

    return 0;
}