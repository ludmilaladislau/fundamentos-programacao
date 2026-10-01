/*
 * Projeto 02 - Media de notas
 * Conceitos: vetores, for, if/else, operadores
 */
#include <stdio.h>

#define MAX 10

int main() {
    float notas[MAX];
    int qtd, i;
    float soma = 0, media, maior, menor;

    printf("===== MEDIA DE NOTAS =====\n");
    do {
        printf("Quantas notas (1 a %d)? ", MAX);
        scanf("%d", &qtd);
    } while (qtd < 1 || qtd > MAX);

    for (i = 0; i < qtd; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];

        if (i == 0) {
            maior = menor = notas[i];
        } else {
            if (notas[i] > maior) maior = notas[i];
            if (notas[i] < menor) menor = notas[i];
        }
    }

    media = soma / qtd;

    printf("\n--- Resultado ---\n");
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    if (media >= 7)      printf("Situacao: APROVADO\n");
    else if (media >= 5) printf("Situacao: RECUPERACAO\n");
    else                 printf("Situacao: REPROVADO\n");

    return 0;
}
