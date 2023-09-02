/*
Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_base, comissao, salario_bruto, vendas;
    salario_base = 1200.00;

    printf("Digite o valor de suas vendas este mes: \n");
    scanf("%f", &vendas);

    comissao = vendas * 0.10;
    salario_bruto = salario_base + comissao;

    printf("Comissao: R$%.2f \n", comissao);
    printf("Salario bruto: R$%.2f \n", salario_bruto);

    return 0;
}