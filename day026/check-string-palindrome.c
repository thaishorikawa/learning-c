#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[30], copy[30];
    int i, size, equal = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    size = strlen(word);
    for (i = 0; i < strlen(word); i++)
    {
        copy[i] = word[size - 1];
        size--;
    }
    copy[i] = '\0';
    size = strlen(word);

    for (i = 0; i < size; i++)
    {
        if (word[i] == copy[i])
            equal++;
    }

    if (size == equal)
        printf("\nThis word is a palindrome.\n");
    else
        printf("\nThis word is not a palindrome.\n");

    return 0;
}