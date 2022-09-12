#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int myStrLen (char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void displayString (char word[])
{
    int i = 0;

    while (word[i] != '\0')
    {
        printf("%c", word[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char arr[20] = {"Hey. Good morning!"};

    printf("strlen: %d\n", strlen(arr));
    printf("myStrLen: %d\n", myStrLen(arr));
    displayString(arr);

    return 0;
}