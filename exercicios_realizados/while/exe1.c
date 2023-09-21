/*
 Faça um algoritmo que exiba todos números de 1 a 100.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    numero = 0;

    while(numero <= 100) {

        printf("Numero %d\n" ,numero);

        numero ++;
    }

    return 0;
}