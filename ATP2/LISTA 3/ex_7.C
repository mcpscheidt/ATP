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

void imprimir_dados(Aluno algum_aluno){
    printf("--- Dados do Aluno ---\n");
    printf("Nome: %s\n", algum_aluno.nome);
    printf("Matricula: %d\n", algum_aluno.matricula);
    printf("Nota: %.1f\n", algum_aluno.nota);
    printf("O aniversario eh: %d/%d/%d\n", algum_aluno.aniversario.dia, algum_aluno.aniversario.mes, algum_aluno.aniversario.ano);

}

int main() {
    Aluno aluno1;

    strcpy(aluno1.nome, "Joao Silva");
    aluno1.matricula = 2025001;
    aluno1.nota = 8.5;
    aluno1.aniversario.dia = 04;
    aluno1.aniversario.mes = 01;
    aluno1.aniversario.ano = 2005;

    imprimir_dados(aluno1);

    return 0;
}
