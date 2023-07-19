//Verificar se uma palavra ou frase é um palíndromo.
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j, tamanho;
    int eh_palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
