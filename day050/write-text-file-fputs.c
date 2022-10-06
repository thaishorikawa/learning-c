#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void write(char f[])
{
    FILE *file = fopen(f, "w");
    char text[500];

    if (file)
    {
        printf("Enter a sentence or 1 character to exit:\n");
        scanf("%499[^\n]", text);
        getchar();
        while (strlen(text) > 1)
        {
            fputs(text, file);
            fputc('\n', file);
            scanf("%499[^\n]", text);
            getchar();
        }
        fclose(file);
    }
    else
        printf("\nError to open file!\n");
}

int main()
{
    char name[] = {"test.txt"};

    write(name);

    return 0;
}