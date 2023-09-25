/*
 Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000. Ao receber um valor fora da faixa,
 o programa deverá parar de solicitar valores, exibir quantos valores válidos foram digitados e finalizar.
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int contador = 0;

    do {
        printf("Digite um valor entre 500 e 1000: ");
        scanf("%d", &valor);

        if (valor >= 500 && valor <= 1000) {
            contador++;
        }

    } while (valor >= 500 && valor <= 1000);

    printf("Total de valores digitados dentro do intervalo: %d\n", contador);

    return 0;
}
