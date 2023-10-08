/* Faça um programa que receba o dia, mês e ano de uma data e informe se é uma data válida */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("Digite o dia do ano:");
    scanf("%d", &dia);
    printf("Digite o mes do ano:");
    scanf("%d", &mes);
    printf("Digite o ano:");
    scanf("%d", &ano);

    int dataValida = 1;  // Assumimos que a data é válida por padrão

    if (mes < 1 || mes > 12) {
        dataValida = 0;  // Mês fora do intervalo válido
    } else {
        if (dia < 1 || dia > 31) {
            dataValida = 0;  // Dia fora do intervalo válido
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia > 30) {
                dataValida = 0;  // Meses com 30 dias
            }
        } else if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                // Ano bissexto
                if (dia > 29) {
                    dataValida = 0;
                }
            } else {
                // Não é um ano bissexto
                if (dia > 28) {
                    dataValida = 0;
                }
            }
        }
    }

    if (dataValida == 1) {
        printf("Data válida\n");
    } else {
        printf("Data inválida\n");
    }

    return 0;
}
