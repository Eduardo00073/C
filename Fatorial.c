//Calcule o fatorial de um número fornecido pelo usuário.
#include <stdio.h>

int main() {
    int num, i;
    long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %lld\n", num, fatorial);
    return 0;
}
