#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Type a letter: ");
    scanf("%c", &a);

    printf("Type a letter: ");
    scanf(" %c", &b);

    printf("First letter: %c\nSecond letter: %c\n", a, b);

    return 0;
}