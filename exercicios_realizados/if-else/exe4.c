/**
 * @file exe4.c
 * @author Ryan Marcato
 * @brief Enunciado:
 * Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
    float salario;
    float imposto, aliquota, parcela_deducao;

    printf("Digite seu salario:");
    scanf("%f" ,&salario);

    if(salario > 1903.99) {
        aliquota = 0.075;
        parcela_deducao = 142.80;
        imposto = (salario * aliquota) - parcela_deducao;
        printf("O imposto a ser pago sera de R$%.2f \n" ,imposto);
    } else if(salario > 2826.66) {
        aliquota = 0.15;
        parcela_deducao = 354.80;
        imposto = salario * aliquota - parcela_deducao;
        printf("O imposto a ser pago sera de R$%.2f \n" ,imposto);
    } else if(salario > 3751.06) {
        aliquota = 0.225;
        parcela_deducao = 636.13;
        imposto = salario * aliquota - parcela_deducao;
        printf("O imposto a ser pago sera de R$%.2f \n" ,imposto);
    } else if(salario > 4664.68) {
        aliquota = 0.275;
        parcela_deducao = 869.36;
        imposto = salario * aliquota - parcela_deducao;
        printf("O imposto a ser pago sera de R$%.2f \n" ,imposto);
    } else {
        printf("Isento de imposto");
    }

    return 0;
}