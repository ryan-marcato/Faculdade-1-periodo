/**
 * @file exe1.c
 * @author Ryan Marcato
 * @brief enunciado:
 * Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
 * @version 0.1
 * @date 2023-09-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
    int opcao;
    int num;
    int calculo;
    int idade;

    printf("Menu do programa\n");
    printf("1 - Verificacao par ou impar\n");
    printf("2 - Verificao maioridade\n");
    scanf("%d" ,&opcao);

    switch(opcao) {
        case 1:
            printf("Digite um numero:");
            scanf("%d" ,&num);
            calculo = num % 2;
            if(calculo == 0) {
                printf("Numero é par\n");
            } else {
                printf("Numero é impar\n");
            }
            break;
        case 2:
            printf("Digite sua idade:");
            scanf("%d" ,&idade);
            if(idade >= 18) {
                printf("Voce é maior de idade\n");
            } else {
                printf("Voce é menor de idade\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
