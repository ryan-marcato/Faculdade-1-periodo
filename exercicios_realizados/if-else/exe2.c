/*
Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
 Obs.: Utilize o operador % que retorna o resto da divisão)
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int entrada_numero;//Valor de entrada digitado pelo usuario

    printf("Digite um numero:");
    scanf("%d" ,&entrada_numero);

    if(entrada_numero % 2 == 0) {
        printf("O numero digitado é par \n");
    }else {
        printf("O numero digitado é impar \n");
    }

    return 0;
}