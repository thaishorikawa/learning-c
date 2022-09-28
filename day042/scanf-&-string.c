#include <stdlib.h>
#include <stdio.h>

int main()
{
    char word[100];

    //scanf("%100[^\n]", word);
    //printf("%s\n", word);

    printf("%p\n", word);
    printf("%p\n", &word);
    printf("%p\n", &word[0]);

    return 0;
}