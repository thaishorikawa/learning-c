#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file;
    char letter;

    file = fopen("test.txt", "w+");

    if (file)
    {
        printf("\nEnter a text and press ENTER to exit!\n");
        scanf("%c", &letter);
        while (letter != '\n')
        {
            fputc(letter, file);
            scanf("%c", &letter);
        }

        rewind(file);

        printf("\nText from file:\n");
        while (!feof(file))
        {
            letter = fgetc(file);
            printf("%c", letter);
        }
        printf("\n");

        fclose(file);
    }
    else
        printf("\n\t--> ERROR to open file!\n");

    return 0;
}