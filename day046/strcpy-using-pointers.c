#include <stdlib.h>
#include <stdio.h>

int strcp(char *dest, char *src)
{
    int i = 0;

    while (*(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    return i;
}

int main()
{
    char dest[25], src[25] = ("Good morning.");

    printf("Size: %d\n", strcp(dest, src));
    printf("Dest: %s\n", dest);

    return 0;
}