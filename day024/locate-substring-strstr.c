#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = {"Good morning!"};
    char str[] = {"orn"};
    char *pointer;

    pointer = strstr(word, str);

    if (pointer)
        printf("\n%c%c%c\n", *pointer, *(pointer+1), *(pointer+2));
    else
        printf("\nNull pointer.\n");

    return 0; 
}