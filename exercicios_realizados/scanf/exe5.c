/*
Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double entrada_raiz; // valor de entrada digitado pelo usuario
    double resultado_raiz;

    printf("Digite um numero:");
    scanf("%lf", &entrada_raiz);

    resultado_raiz = sqrt(entrada_raiz);

    printf("A raiz quadrada sera igual a %.2lf", resultado_raiz);

    return 0;
}