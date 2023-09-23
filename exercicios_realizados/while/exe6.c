/*
 Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i;
    int numero;
    int quadrado;

    printf("Digite o numero 1 ou maior que ele para iniciar:");
    scanf("%d" ,&i);

    while (i >=1) {

        printf("Digite o numero:");
        scanf("%d" ,&numero);

        quadrado = pow(numero, 2);

        printf("Resultado %d\n" ,quadrado);

        printf("Digite o numero 1 ou maior que ele para continuar:");
        scanf("%d" ,&i);
    }

    return 0;
}