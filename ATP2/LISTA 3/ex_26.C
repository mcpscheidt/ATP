
#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[100];
    char disciplina[50];
    int salario;

} Professor;

void imprimir_dados(Professor algum_professor){
    printf("--- Dados do Professor ---\n");
    printf("Nome: %s\n", algum_professor.nome);
    printf("Disciplina: %s\n", algum_professor.disciplina);
    printf("salario: R$%d\n", algum_professor.salario);

}

int main() {
    Professor professor1;

    strcpy(professor1.nome, "Joao Silva");

    strcpy(professor1.disciplina, "ATP-2");

    professor1.salario = 100000;

    imprimir_dados(professor1);

    return 0;
}
