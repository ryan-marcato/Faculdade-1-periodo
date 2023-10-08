/**
 * @file exe5.c
 * @author Ryan Marcato
 * @brief Enunciado:
 * Faça um programa que calcule o fatorial de um número a ser digitado.
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial = 1;
    int num_fatorar;

    printf("Digite o numero a ser fatorado:");
    scanf("%d", &num_fatorar);


    for (int i = 1; i <= num_fatorar; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d e %d\n", num_fatorar, fatorial);

    return 0;
}