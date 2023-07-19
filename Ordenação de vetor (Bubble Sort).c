//Implementar o algoritmo de ordenação Bubble Sort.
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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

    // Chamada da função bubbleSort para ordenar o vetor
    bubbleSort(vetor, n);

    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
