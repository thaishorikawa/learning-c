#include <stdlib.h>
#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a character: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
        printf("\n\tVowel...\n\n");
    else
        printf("\n\tConsonant...\n\n");
    
    return 0;
}