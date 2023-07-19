//Converter uma temperatura em Fahrenheit para Celsius.
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
