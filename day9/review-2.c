#include <stdlib.h>
#include <stdio.h>

int main()
{
    int password, validPassword = 123456;
    
    printf("\nEnter your password: ");
    scanf("%d", &password);

    while (password != validPassword)
    {
        printf("\nNot a valid password!\n\nEnter your password: ");
        scanf("%d", &password);
    }
    printf("\nAuthorized access!\n\n");

    return 0;
}