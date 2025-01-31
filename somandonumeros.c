#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número:\n", num1);
    scanf("%d", &num1);

    printf("Digite o segundo número:\n", num2);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de: %d e %d é: %d\n", num1, num2, soma);

    return 0;
}