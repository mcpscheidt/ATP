#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 4

typedef struct  {
    char nome[50];
    int numero_chegada;
} Aluno;


int main() {

    Aluno turma[NUM_ALUNOS] = {
        {"Ana Silva", 3},
        {"Bruno Costa", 1},
        {"Carla Dias", 4},
        {"Daniel Moreira", 2}
    };
    //usuario da nome a ser substituido
    char aux[50] = "Danilo Pereira";

    printf("--- ANTES DA TROCA ---\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("  indice: %d, Nome: %s\n", i, turma[i].nome);
    }

    printf("<===========================================>\n");
    for(int i = 0; i < NUM_ALUNOS; i++){

        if(strcmp(turma[i].nome, "Carla Dias") == 0){
            strcpy(turma[i].nome, aux);
            printf("indice: %d\n", i);
            printf("Nome depois da modificacao: %s\n", turma[i].nome);
        }
    }


    return 0;
}



