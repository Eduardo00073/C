//Calcular a média de uma lista de números fornecida pelo usuário.
#include <stdio.h>

int main() {
    int n, i;
    float soma = 0, media;

    printf("Digite o número de valores: ");
    scanf("%d", &n);

    float valores[n];

    printf("Digite os valores:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / n;

    printf("A média é: %.2f\n", media);

    return 0;
}
