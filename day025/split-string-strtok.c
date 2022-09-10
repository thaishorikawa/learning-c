#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = {"Good morning!"};
    char *pt;

    pt = strtok(word, " ");
    while (pt)
    {
        printf("token: %s\n", pt);
        pt = strtok(NULL, " ");
    }
    return 0;
}