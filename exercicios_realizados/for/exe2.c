/**
 * @file exe8.c
 * @author Ryan Marcato
 * @brief Enunciado:
 * Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada de todos os números  de 1 a 10 no seguinte formato:

Tabuada do 1:
1 x 1 =  1
1 x 2 =  2
1 x 3 =  3
...

Tabuada do 5:
5 X 1 =  5
5 X 2 = 10
5 X 3 = 15
...
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    for(int x = 1; x <= 10; x++) {
        printf("Tabuada do %d:\n" ,x);
        for(int y = 1; y <= 10; y++){
            printf("%d x %d = %d\n" ,x,y,x*y);
        }
    }

    return 0;
}