/*Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
1 conjunto de trabalhos menores durante o semestre (com peso 10)
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela média ponderada das notas das 3 provas, nos projetos menores e do projeto do game. O aluno que atingir a nota igual ou superior a 60 estará aprovado, caso contrário, o aluno deverá realizar um exame onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e 1 nota do projeto do game (todas as notas entre 0 e 100) e informe se o aluno está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o aluno está aprovado ou reprovado e qual sua nota final (com uma casa decimal).
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float prova_1, prova_2, prova_3;
    float trabalhos;
    float projeto;
    float media;
    float exame;
    float nota_minima;

    printf("Digite a 1 nota  da prova com peso 20:");
    scanf("%f" ,&prova_1);
    printf("Digite a 2 nota  da prova com peso 20:");
    scanf("%f" ,&prova_2);
    printf("Digite a 3 nota  da prova com peso 20:");
    scanf("%f" ,&prova_3);
    printf("Digite a nota dos conjuntos de trabalho:");
    scanf("%f" ,&trabalhos);
    printf("Digite a nota do projeto:");
    scanf("%f" ,&projeto);

    media = ((prova_1 * 20) + (prova_2 * 20) + (prova_3 * 20) + (trabalhos * 10) + (projeto * 30)) / (20 + 20 + 20 + 10 + 30);

    if(media >= 60) {

        printf("Aprovado\n");
        printf("Nota: %.1f\n" ,media);

    } else if(media < 60) {

        printf("Aluno de exame\n");

        nota_minima = 120 - media;

        printf("Nota minima para aprovacao no exame = %.1f\n" ,nota_minima);
        printf("Nota do exame:");
        scanf("%f" ,&exame);

        if(exame >= nota_minima ) {

            printf("Aprovado pelo exame.\n");
            printf("Nota: 60\n");

        } else {

            printf("Reprovado\n");
            printf("Nota: %.1f" ,media);

        }
    }

    return 0;
}//esta correto?