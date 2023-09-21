/*
 Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    numero = 240;

    while (numero <= 732) {

        if (numero % 2 == 0) {
            printf("Numero %d e par\n" ,numero);
        }

        numero++;
    }

    return 0;
}