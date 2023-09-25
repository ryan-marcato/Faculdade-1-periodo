/*
Faça um programa que calcule o fatorial de um número a ser
digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int fatorial;
    int i;
    fatorial = 1;
    i = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);


    while (i <= numero) {

        fatorial *= i;
        i++;

        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}