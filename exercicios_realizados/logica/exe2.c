#include<stdio.h>
#include <stdlib.h>

int main() {
    float salario_minimo;
    float conversor_1;
    float valor_conta;//valor a ser pago
    float qw_gasto;//gasto pela residencia
    float quilowatts_preco;//preco de cada quilowatt
    float desconto;


    printf("Digite o valor do salario minimo:");
    scanf("%f" ,&salario_minimo);
    printf("Quantidade de quilowatts gasta");
    scanf("%f" ,&qw_gasto);

    conversor_1 = salario_minimo / 4;
    quilowatts_preco = conversor_1 / 200;
    valor_conta = quilowatts_preco * qw_gasto;
    desconto = valor_conta * 0.88;

    printf("O valor de cada quilowatts e de %.2f\n" ,quilowatts_preco);
    printf("Valor a ser pago e de %.2f\n" ,valor_conta);
    printf("O valor com desconto e de %.2f\n" ,desconto);

    return  0;
}