/*
Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("Menu do programa:");
    printf("1 - Teste 1 \n");
    printf("2 - Teste 2\n");
    printf("3 - sair do programa\n");
    scanf("%d" ,&opcao);

    switch (opcao) {

        case 1:
            while (opcao <= 2) {
                printf("Menu do programa:");
                printf("1 - Teste 1 \n");
                printf("2 - Teste 2\n");
                printf("3 - sair do programa\n");
                scanf("%d" ,&opcao);
            }
        break;

        case 2:
            while (opcao <= 2) {
                printf("Menu do programa:");
                printf("1 - Teste 1 \n");
                printf("2 - Teste 2\n");
                printf("3 - sair do programa\n");
                scanf("%d" ,&opcao);
            }
        break;

        case 3:
            printf("Fim do programa\n");
        break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}