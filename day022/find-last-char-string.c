#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    char words[] = {"Hey! Let's get started with C programming language!"};

    i = 0;
    while (words[i] != '\0')
    {
        printf("%d = %c\n", i, words[i]);
        i++;
    }
    printf("\n");

    return 0;
}