//Contar o número de caracteres em uma string fornecida pelo usuário.
#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int contador = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ' && texto[i] != '\n') {
            contador++;
        }
    }

    printf("O texto contém %d caracteres.\n", contador);

    return 0;
}
