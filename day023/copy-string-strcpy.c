#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word1[20] = {"information"};
    char word2[20] = {"technology"};

    printf("\nBefore copy:\nWord 1: %s\nWord 2: %s\n", word1, word2);

    strcpy(word2, word1);

    printf("\nAfter copy:\nWord 1: %s\nWord 2: %s\n", word1, word2);

    return 0;
}