//Verificar se um número fornecido pelo usuário é primo ou não.
#include <stdio.h>

int main() {
    int num, i, is_prime = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
