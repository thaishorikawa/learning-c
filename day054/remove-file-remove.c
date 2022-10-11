#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[] = {"test.txt"};

    FILE *file = fopen(name, "r");

    if (file)
    {
        printf("\nSuccess to open the file!\n");
        fclose(file);

        printf("\nReturn: %d\n", remove(name));
    }
    else
    {
        printf("\nError to open the file!\n");
        printf("\nReturn: %d\n", remove(name));
    }

    return 0;
}