/*
Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.

*/

int main() {
    float entrada_nota; //valor de entrada digitada pelo usuario

    printf("Digite a nota do aluno:");
    scanf("%f" ,&entrada_nota);

    if(entrada_nota >= 6) {
        printf("Aluno aprovado \n");
    } else {
        printf("Aluno reprovado \n");
    }

    return 0;
}