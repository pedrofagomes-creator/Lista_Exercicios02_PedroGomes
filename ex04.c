/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 04
 * Descrição: Calculadora com menu usando do while
 * Data: 09/11/1016
*/


#include <stdio.h>

int main() {
    int opcao;
    float n1, n2, resultado;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                resultado = n1 + n2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = n1 - n2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = n1 * n2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 5:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}