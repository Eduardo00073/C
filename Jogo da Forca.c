//Implementar o jogo da Forca em que um jogador tenta adivinhar uma palavra.
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100], chute, letras_corretas[100];
    int tentativas = 6, acertos = 0, i, tamanho;

    printf("Digite a palavra secreta: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    // Inicializa o array 'letras_corretas' com traços para cada letra da palavra
    for (i = 0; i < tamanho; i++) {
        letras_corretas[i] = '_';
    }
    letras_corretas[tamanho] = '\0';

    printf("Jogo da Forca!\n");
    printf("Você tem %d tentativas para adivinhar a palavra.\n", tentativas);

    while (tentativas > 0 && acertos < tamanho) {
        printf("Palavra atual: %s\n", letras_corretas);
        printf("Digite uma letra: ");
        scanf(" %c", &chute);

        int acertou = 0;

        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == chute && letras_corretas[i] == '_') {
                letras_corretas[i] = chute;
                acertou = 1;
                acertos++;
            }
        }

        if (!acertou) {
            tentativas--;
            printf("Letra errada! Você tem mais %d tentativas.\n", tentativas);
        }
    }

    if (acertos == tamanho) {
        printf("Parabéns! Você acertou a palavra: %s\n", palavra);
    } else {
        printf("Você perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
