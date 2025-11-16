#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5

typedef struct  {
    char nome[50];
    int numero_chegada;
} Aluno;

void merge(Aluno *array, int inicio, int meio, int fim);
void merge_sort(Aluno *array, int inicio, int fim);

int main() {

    Aluno turma[NUM_ALUNOS] = {
        {"Ana Silva", 3},
        {"Bruno Costa", 1},
        {"Carla Dias", 4},
        {"Daniel Moreira", 2}
    };


    return 0;
}



void merge(Aluno *array, int inicio, int meio, int fim){
    Aluno auxiliar[NUM_ALUNOS];
    int i = inicio, j = meio+1, k = 0; //pq meio+1?

    while(i <= meio && j <= fim){
        if(array[i].numero_chegada <= array[j].numero_chegada)
            auxiliar[k++] = array[i++];
        else
            auxiliar[k++] = array[j++];
    }

    while(j<= fim) auxiliar[k++] = array[j++];
    while(i <= meio) auxiliar[k++] = array[i++];

    for(int z = inicio, k = 0; z <= fim; z++, k++){
        array[z] = auxiliar[k];
    }

}

void merge_sort(Aluno *array, int inicio, int fim){
int meio;

    if(inicio < fim ){
        meio = inicio + (fim - inicio) / 2;

        merge_sort(array, inicio, meio);
        merge_sort(array, meio + 1, fim);
        merge(array, inicio, meio, fim);
    }


}
