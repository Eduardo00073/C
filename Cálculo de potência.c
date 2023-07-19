//Calcular a potência de um número dado a um expoente inteiro.
#include <stdio.h>

int main() {
    int base, expoente, resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
