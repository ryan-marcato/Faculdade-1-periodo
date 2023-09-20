/* Crie um programa que, ao receber três números, verifique se podem ser lados de um triângulo e nesse caso mostre se o triângulo é equilátero,
 * isosceles ou escaleno. Caso seja um triângulo retângulo, o programa deve também informar.
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado_1, lado_2, lado_3;
    float maior_lado, lado_a, lado_b;

    printf("Digite o lado 1:");
    scanf("%f" ,&lado_1);
    printf("Digite o lado 2:");
    scanf("%f" ,&lado_2);
    printf("Digite o lado 3:");
    scanf("%f" ,&lado_3);

    if (lado_1 > 0 && lado_2 > 0 && lado_3 > 0) {
        if (lado_1 == lado_2 && lado_1 == lado_3 && lado_2 == lado_3) {

            printf("Triangulo equilatero\n");

        } else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3 ) {

            printf("Triangulo isosceles\n");

        } else {

            printf("Triangulo escaleno\n");

        }
    }

    if (lado_1 >= lado_2 && lado_1 >= lado_3) {

        maior_lado = lado_1;
        lado_a = lado_2;
        lado_b = lado_3;

    } else if (lado_2 >= lado_1 && lado_2 >= lado_3) {

        maior_lado = lado_2;
        lado_a = lado_1;
        lado_b = lado_3;

    } else {

        maior_lado = lado_3;
        lado_a = lado_1;
        lado_b = lado_2;

    }

    if (maior_lado * maior_lado == (lado_a * lado_a + lado_b * lado_b)) {
        printf("Triangulo retangulo\n");
    }

    return 0;
}