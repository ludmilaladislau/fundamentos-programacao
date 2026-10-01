/*
 * Projeto 05 - Funcoes matematicas
 * Conceitos: funcoes, retorno, laco for, recursao, menu
 */
#include <stdio.h>

long fatorial(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) resultado *= i;
    return resultado;
}

int ehPrimo(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int fibonacci(int n) {            /* versao recursiva */
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int opcao, n, i;

    do {
        printf("\n===== FUNCOES MATEMATICAS =====\n");
        printf("1 - Fatorial\n2 - Verificar primo\n3 - Sequencia de Fibonacci\n0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Numero (0 a 20): ");
                scanf("%d", &n);
                if (n < 0 || n > 20) printf("Fora do intervalo!\n");
                else printf("%d! = %ld\n", n, fatorial(n));
                break;
            case 2:
                printf("Numero: ");
                scanf("%d", &n);
                printf("%d %s primo.\n", n, ehPrimo(n) ? "e" : "NAO e");
                break;
            case 3:
                printf("Quantos termos (max 30)? ");
                scanf("%d", &n);
                if (n < 1 || n > 30) { printf("Fora do intervalo!\n"); break; }
                for (i = 0; i < n; i++) printf("%d ", fibonacci(i));
                printf("\n");
                break;
            case 0: printf("Ate mais!\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
