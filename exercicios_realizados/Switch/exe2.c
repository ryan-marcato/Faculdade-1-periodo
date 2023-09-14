#include<stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    int entrada_num1, entrada_num2;
    int soma;
    int subtracao;
    int multiplicao;
    int divisao;
    

    printf("Menu de opcoes:");
    printf("+ - Soma\n");
    printf("- - Subtracao\n");
    printf("* - multiplicacao\n");
    printf("/ - Divisao\n");
    scanf("%c" ,&operacao);

    switch (operacao) {

        case '+':
            printf("Digite um numero:");
            scanf("%d", &entrada_num1);
            printf("Digite outro numero:");
            scanf("%d", &entrada_num2);

            soma = entrada_num1 + entrada_num2;

            printf("A soma dos dois numeros é igual a %d\n", soma);

            break;

        case '-':

            printf("Digite um numero:");
            scanf("%d", &entrada_num1);
            printf("Digite outro numero:");
            scanf("%d", &entrada_num2);

            subtracao = entrada_num1 - entrada_num2;

            printf("A subtracao dos dois numeros é igual a %d\n", subtracao);

            break;

        case '*':

            printf("Digite um numero:");
            scanf("%d", &entrada_num1);
            printf("Digite outro numero:");
            scanf("%d", &entrada_num2);

            multiplicao = entrada_num1 * entrada_num2;

            printf("A multiplicao dos dois numeros é igual a %d\n", multiplicao);

            break;

        case '/':

            printf("Digite um numero:");
            scanf("%d", &entrada_num1);
            printf("Digite outro numero:");
            scanf("%d", &entrada_num2);

            divisao = entrada_num1 / entrada_num2;

            printf("A divisao dos dois numeros é igual a %d\n", divisao);

            break;

        default:

            printf("Operacao invalida\n");
    }

    return 0;

    }