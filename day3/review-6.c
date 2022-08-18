#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds, h, m, s, remainder;

    printf("Write a number of seconds: ");
    scanf("%d", &seconds);

    h = seconds / 3600;
    remainder = seconds % 3600;
    m = remainder / 60;
    s = remainder % 60;
    
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}