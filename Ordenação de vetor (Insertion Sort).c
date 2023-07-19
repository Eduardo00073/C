//Implementar o algoritmo de ordenação Insertion Sort.
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move os elementos do vetor que são maiores que a chave para uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamada da função insertionSort para ordenar o vetor
    insertionSort(vetor, n);

    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
