#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Aniversario;

typedef struct {
    char nome[100];
    int matricula;
    float nota;
    Aniversario aniversario;
} Aluno;

int main() {
    Aluno aluno1;

    strcpy(aluno1.nome, "Joao Silva");
    aluno1.matricula = 2025001;
    aluno1.nota = 8.5;
    aluno1.aniversario.dia = 04;
    aluno1.aniversario.mes = 01;
    aluno1.aniversario.ano = 2005;

    printf("--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota: %.1f\n", aluno1.nota);
    printf("O aniversario eh: %d/%d/%d\n", aluno1.aniversario.dia, aluno1.aniversario.mes, aluno1.aniversario.ano);

    return 0;
}
