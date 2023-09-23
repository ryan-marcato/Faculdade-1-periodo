/*
 Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i; //indice
    int numero;
    int quadrado;

    i = 0;

    while (i < 10) {

        printf("Digite o numero:");
        scanf("%d" ,&numero);

        quadrado = pow(numero, 2);

        printf("Resultado %d\n" ,quadrado);

        i++;
    }

    return 0;
}