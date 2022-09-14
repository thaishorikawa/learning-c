#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int size;
    char c, str1[10] = {"%"}, str2[10];

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    scanf("%c", &c);

    sprintf(str2, "%d[^\n]", size);
    strcat(str1, str2);

    char words[size];
    printf("Enter a sentence: ");
    scanf(str1, words);
    printf("%s\n", words);

    return 0;
}