/*
Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int coeficiente_a, coeficiente_b, coeficiente_c;//Valores do coeficiente digitados pelos usuarios
    int delta;//calculo de delta necessario
    float raiz_positiva, raiz_negativa;//utilizado quando delta > 0
    float baskara;//utilizado quando delta == 0

    printf("Digite os valores do coeficiente na respectiva ordem a b c:");
    scanf("%d %d %d" ,&coeficiente_a, &coeficiente_b, &coeficiente_c);

    delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;

    if(delta > 0) {
        raiz_positiva = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
        raiz_negativa = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
        printf("As raizes sao %.2f %.2f \n" ,raiz_positiva, raiz_negativa);
    } else if(delta == 0) {
        baskara = -coeficiente_b/ (2 * coeficiente_a);
        printf("A unica raiz tem resultado de %.2f \n" ,baskara);
    } else {
        printf("A equacao nao possui raiz real \n");
    }

    return 0;
}