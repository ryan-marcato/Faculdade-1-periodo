#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade_1, idade_2, idade_3;
    int media;

    printf("Digite a primeira idade:");
    scanf("%d" ,&idade_1);
    printf("Digite a segunda idade:");
    scanf("%d" ,&idade_2);
    printf("Digite a terceira idade:");
    scanf("%d" ,&idade_3);

    if (idade_1 == idade_2 && idade_2 == idade_3) {
        printf("As tres idades sao iguais\n");
    } else if (idade_1 == idade_2) {
        printf("Idade 1 e igual a idade 2\n");
    } else if (idade_1 == idade_3) {
        printf("Idade 1 e igual a idade 3\n");
    } else if (idade_2 == idade_3) {
        printf("Idade 2 e igual a idade 3\n");
    }

    if(idade_1 == idade_2){
        if(idade_1 > idade_3) {
            printf("A idade 1 e 2 sao as maiores\n");
        }
    }else if(idade_2 == idade_3) {
        if(idade_2 > idade_1) {
            printf("A idade 2 e 3 sao as maiores\n");
        }
    } else if(idade_1 == idade_3) {
        if(idade_1 > idade_2) {
            printf("A idade 2 e 3 sao as maiores\n");
        }
    }

    if(idade_1 == idade_2){
        if(idade_1 < idade_3) {
            printf("A idade 1 e 2 sao os mais novos\n");
        }
    }else if(idade_2 == idade_3) {
        if(idade_2 < idade_1) {
            printf("A idade 2 e 3 sao os mais novos\n");
        }
    } else if(idade_1 == idade_3) {
        if(idade_1 < idade_2) {
            printf("A idade 2 e 3 sao os mais novos\n");
        }
    }

    if(idade_1 > idade_2 && idade_1 > idade_3) {
        printf("A primeira idade e a maior\n");
    } else if(idade_2 > idade_1 && idade_2 > idade_3) {
        printf("A segunda idade e a maior\n");
    } else if(idade_3 > idade_1 && idade_3 > idade_2) {
        printf("A terceira idade e a maior\n");
    }

    if(idade_1 < idade_2 && idade_1 < idade_3) {
        printf("A primeira idade pertence ao mais novo\n");
    } else if(idade_2 < idade_1 && idade_2 < idade_3) {
        printf("A segunda idade pertence ao mais novo\n");
    } else if(idade_3 < idade_1 && idade_3 < idade_2) {
        printf("A terceira idade pertence ao mais novo\n");
    }

    media = (idade_1 + idade_2 + idade_3) / 3;

    printf("A media das idades e igual a %d\n" ,media);

    return 0;
}