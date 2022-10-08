#include <stdlib.h>
#include <stdio.h>

void write(char f[])
{
    FILE *file = fopen(f, "w");
    char name[100];
    int option, age;
    float height;

    if (file)
    {
        do
        {
            printf("Enter a name, age and height: ");
            scanf("%100[^\n]%d%f", name, &age, &height);
            fprintf(file, "%s %d %.2f\n", name, age, height);
            printf("\nEnter 1 to insert another register.");
            scanf("%d", &option);
            getchar();
        } while (option == 1);
        fclose(file);
    }
    else
        printf("\nError to open file!\n");
}

void read(char f[])
{
    FILE *file = fopen(f, "r");
    char name[100];
    int age;
    float height;

    if (file)
    {
        printf("Data from file:\n");
        while (fscanf(file, "%s%d%f", name, &age, &height) != -1)
            printf("\nName: %s\nAge: %d\nHeight: %.2f\n", name, age, height);
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