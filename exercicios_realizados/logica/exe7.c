/*
   Desenvolva um algoritmo que receba vários números no intervalo fechado de 1 a 1000. Ao receber um valor fora da faixa, o programa deverá exibir a soma dos números pares e o produto dos números ímpares e finalizar.
Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da soma nem do produto.

 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int entrada_num;
    int soma;
    int produto;
    int operacao;
    soma = 0;
    produto = 1;
    operacao = 0;

    do{
        printf("Digite um numero entre 1 e 1000");
        scanf("%d" ,&entrada_num);

        if(entrada_num <= 0 || entrada_num >= 1001) {
            break;
        }

        if(entrada_num >= 1 && entrada_num <= 1000) {
            operacao = entrada_num;
        }

        if(operacao % 2 == 0) {
            soma += operacao;
        } else if(operacao % 2 == 1) {
            produto = produto * operacao;
        }

    } while (entrada_num >= 1 && entrada_num <= 1000);

    if(produto == 1) {
        produto = produto - 1;
    }

    printf("O produto dos numeros impares e igual a %d \n" ,produto);
    printf("A soma dos numeros pares e igual %d \n" ,soma);

    return 0;
}