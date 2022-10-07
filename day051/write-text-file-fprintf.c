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
            scanf("%99[^\n]%d%f", name, &age, &height);
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

int main()
{
    char name[] = {"test.txt"};

    write(name);

    return 0;
}