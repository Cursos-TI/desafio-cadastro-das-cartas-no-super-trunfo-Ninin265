#include <stdio.h>;
int main () {

float nota1, nota2, nota3;
float media;

printf("*** Programa de Calculo de Media ***\n");

printf("Digite sua primeira nota:\n", nota1);
scanf("%f", &nota1);

printf("Digite sua segunda nota:\n", nota2);
scanf("%f", &nota2);

printf("Digite sua terceira nota:\n", nota3);
scanf("%f", &nota3);

media = (float) (nota1 + nota2 + nota3) / 3;

printf ("A media e: %.1f", media);

    return 0;
}