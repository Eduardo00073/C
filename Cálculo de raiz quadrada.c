// Calcular a raiz quadrada de um número fornecido pelo usuário.
#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz;

    printf("Digite um número: ");
    scanf("%f", &numero);

    raiz = sqrt(numero);

    printf("A raiz quadrada de %.2f é %.2f\n", numero, raiz);

    return 0;
}
