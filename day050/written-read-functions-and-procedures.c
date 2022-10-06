#include <stdlib.h>
#include <stdio.h>

void write(char f[])
{
    FILE *file = fopen(f, "w");
    char letter;

    if (file)
    {
        printf("\nEnter a text and press ENTER to exit!\n");
        scanf("%c", &letter);
        while (letter != '\n')
        {
            fputc(letter, file);
            scanf("%c", &letter);
        }
        fclose(file);
    }
    else
        printf("\nError to open file!\n");
}

void read(char f[])
{
    FILE *file = fopen(f, "r");
    char letter;

    if (file)
    {
        printf("\nText from file:\n");
        while (!feof(file))
        {
            letter = fgetc(file);
            printf("%c", letter);
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