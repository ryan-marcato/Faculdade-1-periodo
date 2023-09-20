/* Faça um programa que receba o dia, mês e ano de uma data e informe se é uma data válida */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("Digite o dia do ano:");
    scanf("%d" ,&dia);
    printf("Digite o mes do ano:");
    scanf("%d" ,&mes);
    printf("Digite o ano:");
    scanf("%d" ,&ano);

    if(dia <= 31 && mes <=12 && ano >= 1) {
        printf("Data valida\n");
    } else {
        printf("Data invalida\n");
    }

    return 0;
}