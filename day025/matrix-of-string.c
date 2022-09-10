#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][25];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name of position %d: ", i);
        scanf("%25[^\n]", names[i]);
        scanf("%c");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nName at position %d: %s", i, names[i]);
    }
    return 0;
}