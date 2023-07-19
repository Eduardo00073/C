//Gerar os primeiros n números da sequência de Fibonacci.
#include <stdio.h>

int main() {
    int n, i, termo1 = 0, termo2 = 1, proximo_termo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", termo1);
        proximo_termo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo_termo;
    }

    printf("\n");
    return 0;
}
