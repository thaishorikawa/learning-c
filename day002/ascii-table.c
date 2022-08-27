#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char letter;

    letter = 'f';
    printf("%d\n", letter);

    //printf("%s\n", setlocale(LC_ALL,"Portuguese")); ou
    setlocale(LC_ALL,"Portuguese");
    wprintf(L"Coração = Heart\n");
    return 0;
}