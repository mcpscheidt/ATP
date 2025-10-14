#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno aluno1;

    strcpy(aluno1.nome, "Joao Silva");
    aluno1.matricula = 2025001;
    aluno1.nota = 8.5;

    printf("--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}
