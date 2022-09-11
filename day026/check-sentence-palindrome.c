#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[50], copy[50];
    int i, size, different = 0, j = 0;

    printf("Enter a sentence: ");
    scanf("%50[^\n]", word);

    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] != '!' && word[i] != '?' && word[i] != ' ' && word[i] != '.')
            copy[j++] = word[i];
    }
    copy[j] = '\0';

    printf("Original: %s\nCopy: %s\n", word, copy);

    size = strlen(copy);
    size--;
    for (i = 0; i < strlen(copy); i++)
    {
        if (copy[i] != copy[size])
            different++;
        size--;
    }

    if (different == 0)
        printf("\nThis word is a palindrome.\n");
    else
        printf("\nThis word is not a palindrome.\n");

    return 0;
}