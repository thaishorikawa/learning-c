#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = {"Good morning!"};

    printf("\nBefore: %s\n", word);

    strupr(word);

    printf("\nAfter: %s", word);

    return 0;
}