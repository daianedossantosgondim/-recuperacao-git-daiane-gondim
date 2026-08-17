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

int main() {
    struct Aluno aluno;
    cadastrarAluno(&aluno);
    return 0;
}
