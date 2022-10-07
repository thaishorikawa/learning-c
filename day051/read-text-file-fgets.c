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

void read(char f[])
{
    FILE *file = fopen(f, "r");
    char text[500];

    if (file)
    {
        printf("\nText from file:\n");
        while (!feof(file))
        {
            if (fgets(text, 500, file))
                printf("\n--> %s", text);
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
    read(name);

    return 0;
}