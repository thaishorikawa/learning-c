#include <stdlib.h>
#include <stdio.h>

int main()
{
    char words[] = {"Hey! Let's get started with C programming language!"};

    printf("Enter your name: ");
    gets(words);

    printf("\n%s\n\n", words);

    return 0;
}