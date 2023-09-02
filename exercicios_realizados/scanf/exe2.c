/*
Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasc, ano_atual, aniversario;
    ano_atual = 2023;

    printf("Digite o ano que voce nasceu: \n");
    scanf("%d", &ano_nasc);

    aniversario = ano_atual - ano_nasc;

    printf("Sua idade e de %d anos \n", aniversario);

    return 0;
}