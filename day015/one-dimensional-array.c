#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int number[] = {1, 5, 9, 15, 43};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    float grades[3] = {7.5, 8.3, 9.5};

    for (i = 0; i < 5; i++)
        printf("%d ", number[i]);

    printf("\n\n");
    for (i = 0; i < 5; i++)
        printf("%c ", vowels[i]);
    
    printf("\n\n");
    for (i = 0; i < 3; i++)
        printf("%.2f, ", grades[i]);

    return 0;
}