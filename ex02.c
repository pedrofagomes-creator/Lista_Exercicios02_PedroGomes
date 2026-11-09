/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 02
 * Descrição: Média das idades de 10 pessoas usando for
 * Data: 09/11/1016
*/

#include <stdio.h>

int main() {
    int idade, soma = 0;
    float media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        soma += idade;
    }

    media = soma / 10.0;

    printf("A media das idades e: %.2f\n", media);

    return 0;
}