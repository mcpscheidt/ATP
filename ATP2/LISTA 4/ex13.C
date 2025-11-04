#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NAME_SIZE 50
#define QTD_ALUNOS 4

typedef struct {
    char nome[NAME_SIZE];
    float nota;
    int altura;
} Aluno;

void bubble_sort_por_altura(Aluno *array, int n) {

    Aluno temp;


    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (array[j].altura > array[j + 1].altura) {

                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

Aluno alunos[QTD_ALUNOS] = { //estou fazendo as alturas com int pq acho que nao importa no final das contas
        { "Bruno", 7.5, 1},
        { "Ana",   9.0, 8},
        { "Carla", 8.5, 4},
        { "Daniel", 6.0, 3}
    };

int main (){
FILE *arq;
Aluno array[QTD_ALUNOS];


//abrir arquivo e escrever nele o struct

arq = fopen("text.bin", "wb+");
    if (arq == NULL) {
        printf("Nao foi possivel ler o arquivo.\n");
        return 1;
    }

    fwrite(alunos, sizeof(Aluno), QTD_ALUNOS, arq);
    rewind(arq);
    fread(&array, sizeof(Aluno), QTD_ALUNOS, arq);
fclose(arq);

    printf("ANTES DE ORDENAR!!\n");
    for(int i = 0; i < QTD_ALUNOS; i++){
        printf("NOME: %s, NOTA: %1.f, ALTURA: %d\n", alunos[i].nome, alunos[i].nota, alunos[i].altura);
    }
    //ORDENACAO
    bubble_sort_por_altura(alunos, QTD_ALUNOS);

    //abrir o arquivo e escrever na nova ordem
arq = fopen("text.bin", "rb+");
    fwrite(alunos, sizeof(Aluno), QTD_ALUNOS, arq);
    rewind(arq);
    fread(&array, sizeof(Aluno), QTD_ALUNOS, arq);
fclose(arq);

    printf("DEPOIS DE ORDENAR POR ALTURA!!\n");
    for(int i = 0; i < QTD_ALUNOS; i++){
        printf("NOME: %s, NOTA: %1.f, ALTURA: %d\n", alunos[i].nome, alunos[i].nota, alunos[i].altura);
    }


return 0;
}
