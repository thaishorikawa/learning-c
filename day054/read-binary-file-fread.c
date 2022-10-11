#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char name[50];
    int day, month, year;
} Contact;

void write(char file1[])
{
    Contact c;
    FILE *file = fopen(file1, "ab");

    if (file)
    {
        printf("Name and birth date dd mm yyyy: ");
        scanf("%49[^\n]%d%d%d", c.name, &c.day, &c.month, &c.year);
        fwrite(&c, sizeof(Contact), 1, file);
        fclose(file);
    }
    else
        printf("\nError to open file!\n");
}

void read(char file1[])
{
    Contact c;
    FILE *file = fopen(file1, "rb");

    if (file)
    {
        while (!feof(file))
        {
            if (fread(&c, sizeof(Contact), 1, file))
                printf("\nName: %s\nDate: %d/%d/%d\n", c.name, c.day, c.month, c.year);
        }
        fclose(file);
    }
    else
        printf("\nError to open file!\n");
}

int main()
{
    char file[] = {"birthday-calendar.dat"};

    write(file);
    read(file);

    return 0;
}