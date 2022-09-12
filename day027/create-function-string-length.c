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

int main()
{
    char arr[20] = {"Hey. Good morning!"};

    printf("strlen: %d\n", strlen(arr));
    printf("myStrLen: %d\n", myStrLen(arr));

    return 0;
}