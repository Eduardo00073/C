//Um programa que solicita dois números ao usuário e imprime a soma deles.
#include <stdio.h>

int main() {
    int num1, num2, soma;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma é: %d\n", soma);
    return 0;
}
