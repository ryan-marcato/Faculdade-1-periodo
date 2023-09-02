/*
Faça um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float entrada_altura; // valor de entrada digitado pelo usuario
    float peso_ideal;     // valor de saida

    printf("Digite sua altura: \n");
    scanf("%f", &entrada_altura);

    peso_ideal = 72.7 * entrada_altura - 58;

    printf("Seu peso ideal e de %.2fKG", peso_ideal);

    return 0;
}