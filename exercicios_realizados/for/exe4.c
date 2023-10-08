/**
 * @file exe9.c
 * @author Ryan Marcato
 * @brief Enunciado:
 *Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

Digite o tamanho: 5
#####
#####
#####
#####
#####

Dica: Para a exibição utilize apenas os comandos
printf(“#”);  e  printf(“\n”);


 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_tamanho;

    printf("Digite o numero tamanho:");
    scanf("%d" ,&num_tamanho);

    for (int i = 1; i <= num_tamanho; i++) {
        for (int i = 1; i <= num_tamanho; i++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}