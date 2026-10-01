/*
 * Projeto 03 - Jogo: Adivinhe o numero
 * Conceitos: rand/srand, while, condicionais, contador
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand(time(NULL));
    secreto = rand() % 100 + 1;   /* numero de 1 a 100 */

    printf("===== ADIVINHE O NUMERO =====\n");
    printf("Estou pensando em um numero de 1 a 100.\n");

    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < secreto)      printf("Muito baixo! Tente um maior.\n");
        else if (palpite > secreto) printf("Muito alto! Tente um menor.\n");
    } while (palpite != secreto);

    printf("\nAcertou em %d tentativa(s)!\n", tentativas);
    return 0;
}
