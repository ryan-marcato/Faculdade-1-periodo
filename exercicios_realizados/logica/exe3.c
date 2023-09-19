#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerador;
    int denominador;
    int fracao;

    printf("Digite o numerador:");
    scanf("%d" ,&numerador);
    printf("Digite o denominador:");
    scanf("%d" ,&denominador);

    fracao = numerador / denominador;

    if(numerador < denominador) {
        printf("A fracao e propia\n");
    } else if (numerador >= denominador && numerador % denominador == 0) {
        printf("A fracao e aparente\n");
    } else {
        printf("funcao impropia\n");
    }

    return 0;
}