/*
 Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1, num_2, num_3, num_4; // valores de entrada digitado pelo usuario
    double media;

    printf("Digite quatro numeros:");
    scanf("%f %f %f %f", &num_1, &num_2, &num_3, &num_4);

    media = (num_1 + num_2 + num_3 + num_4) / 4;

    printf("A media foi de %.2lf\n", media);

    return 0;
}