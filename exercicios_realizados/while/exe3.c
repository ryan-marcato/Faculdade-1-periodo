/*
Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int numero;

   numero = 1;

   while (numero <= 322) {

        if(numero % 3 ==0) {
            printf("Numero %d e divisivel por 3\n" ,numero);
        }

        numero++;
   }

    return 0;
}