#include <stdio.h>
#include <stdlib.h>

//Este é um projeto da aula 2

int main() 
{
    int numero; //isto é uma variável

    printf("\nDigite um numero: "); //imprime a frase na tela
    scanf("%d", &numero); //lê o número que o usuário digita
    getchar(); //zera/limpa o buffer do teclado do PC

    printf("\nO numero eh igual a: %d\n\n", numero); //irá mostrar o número que digitamos, e o numero é a variável


    return 0;
}