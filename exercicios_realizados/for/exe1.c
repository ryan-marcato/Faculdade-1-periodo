

#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial = 1;
    int num_fatorar;

    printf("Digite o numero a ser fatorado:");
    scanf("%d", &num_fatorar);


    for (int i = 1; i <= num_fatorar; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d e %d\n", num_fatorar, fatorial);

    return 0;
}