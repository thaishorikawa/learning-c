#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[20] = {"window"};
    char *letter;

    letter = strrchr(word, 'w');

    printf("\n%c\n", *letter);
    printf("%c\n", *(letter + 1));

    return 0;
}