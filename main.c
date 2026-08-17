#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void cadastrarAluno(struct Aluno *a) {
    printf("--- Cadastro de Aluno ---\n");
    printf("Digite o nome do aluno: ");
    fgets(a->nome, 50, stdin);
    a->nome[strcspn(a->nome, "\n")] = 0;

    printf("Digite a idade do aluno: ");
    scanf("%d", &a->idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &a->nota);
}

void exibirAluno(struct Aluno a) {
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d anos\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}

int main() {
    struct Aluno aluno;
    cadastrarAluno(&aluno);
    exibirAluno(aluno);
    return 0;
}
