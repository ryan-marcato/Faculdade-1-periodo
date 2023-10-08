/**

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_tamanho;

    printf("Digite o numero tamanho:");
    scanf("%d" ,&num_tamanho);

    for (int i = 1; i <= num_tamanho; i++) {
        for (int i = 1; i <= num_tamanho; i++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}