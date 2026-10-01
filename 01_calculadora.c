/*
 * Projeto 01 - Calculadora com menu
 * Conceitos: funcoes, switch, do-while, scanf/printf
 */
#include <stdio.h>

float somar(float a, float b)        { return a + b; }
float subtrair(float a, float b)     { return a - b; }
float multiplicar(float a, float b)  { return a * b; }
float dividir(float a, float b)      { return a / b; }

int main() {
    int opcao;
    float n1, n2;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Ate mais!\n");
            break;
        }
        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", somar(n1, n2)); break;
            case 2: printf("Resultado: %.2f\n", subtrair(n1, n2)); break;
            case 3: printf("Resultado: %.2f\n", multiplicar(n1, n2)); break;
            case 4:
                if (n2 == 0) printf("Erro: divisao por zero!\n");
                else printf("Resultado: %.2f\n", dividir(n1, n2));
                break;
        }
    } while (opcao != 0);

    return 0;
}
