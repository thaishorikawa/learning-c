#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = {"Good Morning!"};

    printf("\nBefore: %s", word);

    strlwr(word);

    printf("\nAfter: %s", word);

    return 0;
}