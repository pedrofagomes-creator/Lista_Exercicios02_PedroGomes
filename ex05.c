/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 05
 * Descrição: numeros de 1 a 10 usando for x while
 * Data: 09/11/1016
*/

#include <stdio.h>

int main() {
    int i = 10;

    printf("Usando while \n");
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    printf("Usando for \n");
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}