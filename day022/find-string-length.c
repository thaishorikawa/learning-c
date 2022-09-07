#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, length = 0;
    char words[] = {"Hey! Let's get started with C programming language!"};
    
    i = 0;
    while (words[i] != '\0')
    {
        length++;
        i++;
    }
    printf("Lenght: %d\n", length);

    return 0;
}