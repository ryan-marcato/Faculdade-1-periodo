/**
 * @file exe3.c
 * @author Ryan Marcato
 * @brief enunciado:
 * Altere o exercício anterior para receber os 3 valores no
mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13
 * @version 0.1
 * @date 2023-09-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    int entrada_num1, entrada_num2;
    int resultado;

    printf("Digite a conta a ser realizada: ");
    scanf("%d %c %d", &entrada_num1, &operacao, &entrada_num2);

    switch (operacao) {
        case '+':

            resultado = entrada_num1 + entrada_num2;
            printf("O resultado é: %d\n", resultado);

            break;

        case '-':

            resultado = entrada_num1 - entrada_num2;
            printf("O resultado é: %d\n", resultado);

            break;

        case '*':

            resultado = entrada_num1 * entrada_num2;
            printf("O resultado é: %d\n", resultado);

            break;

        case '/':

                resultado = entrada_num1 / entrada_num2;
                printf("O resultado é: %d\n", resultado);

            break;

        default:
            printf("Operacao invalida\n");
    }

    return 0;
}
