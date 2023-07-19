//Implementar o algoritmo de ordenação Selection Sort.
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Troca os elementos se necessário
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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

    // Chamada da função selectionSort para ordenar o vetor
    selectionSort(vetor, n);

    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
