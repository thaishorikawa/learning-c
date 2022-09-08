#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word1[] = {"Hey."};
    char word2[] = {"Good morning."};

    strcat(word1, word2);

    printf("\n%s\n", word1);

    return 0;
}