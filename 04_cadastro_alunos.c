/*
 * Projeto 04 - Cadastro de alunos
 * Conceitos: struct, vetor de structs, strings, strcmp, menu
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void cadastrar(struct Aluno alunos[], int *total) {
    if (*total >= MAX) {
        printf("Cadastro cheio!\n");
        return;
    }
    printf("Nome: ");
    scanf(" %49[^\n]", alunos[*total].nome);
    printf("Idade: ");
    scanf("%d", &alunos[*total].idade);
    printf("Nota: ");
    scanf("%f", &alunos[*total].nota);
    (*total)++;
    printf("Aluno cadastrado!\n");
}

void listar(struct Aluno alunos[], int total) {
    int i;
    if (total == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }
    printf("\n%-3s %-25s %-6s %-6s\n", "#", "Nome", "Idade", "Nota");
    for (i = 0; i < total; i++) {
        printf("%-3d %-25s %-6d %-6.1f\n", i + 1, alunos[i].nome,
               alunos[i].idade, alunos[i].nota);
    }
}

void buscar(struct Aluno alunos[], int total) {
    char busca[50];
    int i, achou = 0;

    printf("Nome para buscar: ");
    scanf(" %49[^\n]", busca);

    for (i = 0; i < total; i++) {
        if (strcmp(alunos[i].nome, busca) == 0) {
            printf("Encontrado: %s, %d anos, nota %.1f\n",
                   alunos[i].nome, alunos[i].idade, alunos[i].nota);
            achou = 1;
        }
    }
    if (!achou) printf("Aluno nao encontrado.\n");
}

int main() {
    struct Aluno alunos[MAX];
    int total = 0, opcao;

    do {
        printf("\n===== CADASTRO DE ALUNOS =====\n");
        printf("1 - Cadastrar\n2 - Listar\n3 - Buscar por nome\n0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrar(alunos, &total); break;
            case 2: listar(alunos, total); break;
            case 3: buscar(alunos, total); break;
            case 0: printf("Ate mais!\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
