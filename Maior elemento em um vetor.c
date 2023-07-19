//Encontrar o maior elemento em um vetor fornecido pelo usuário.
#include <stdio.h>

int main() {
    int n, i, maior;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}

