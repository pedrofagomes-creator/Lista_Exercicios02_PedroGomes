/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 01
 * Descrição: Escreva um programa que leia um número N e calcule a soma de todos os números de 1 a N usando um laço for.
 * Data: 04/11/1016
*/

#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d e: %d\n", N, soma);

    return 0;
}