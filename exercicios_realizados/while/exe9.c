/*
 Faça um programa que simule um jogo, onde o usuário
deverá descobrir um número aleatório escolhido pelo
computador (de 1 a 100).
 O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário
acertar o número ou esgotar o número máximo de tentativas
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroAleatorio;
    int i;
    int palpite;
    i = 0;
    numeroAleatorio = rand() % 100 + 1;

    printf("Tente adivinhar o numero de 1 a 100\n");

    while (i < 6) {

        printf("Digite seu palpite:");
        scanf("%d" ,&palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, digite um número entre 1 e 100.\n");
            continue;
        }

        if (palpite < numeroAleatorio) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numeroAleatorio) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto %d em %d tentativas.\n", numeroAleatorio, i + 1);
            break;
        }

        i++;
    }

    if (i == 6) {
        printf("Suas tentativas acabaram. O número secreto era %d.\n", numeroAleatorio);
    }


    return 0;
}