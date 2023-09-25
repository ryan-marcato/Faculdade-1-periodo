/*
 Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.

 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    int nota1;
    int nota2;
    int media;
    int alunos;

    alunos = 1;

    while(alunos < 5) {

        do {
            printf("Digite a 1 nota do aluno: ");
            scanf("%d", &nota1);
            printf("Digite a 2 nota do aluno: ");
            scanf("%d", &nota2);
        }while(nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;
        printf("A media dos aluno e %d\n" ,media);

        alunos++;

    }

    return 0;

}