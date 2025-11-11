#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Escreva um programa em C para buscar um registro em um arquivo bin ́ario usando busca bin ́aria

typedef struct {
    char nome[100];
    float altura;
    int matricula; //por que char?
} Aluno;


int busca_binaria( Aluno *array, int inicio, int fim, int alvo);

Aluno turma[4] = {
        { "Ana Beatriz",  1.65, 1 },
        { "Bruno Cesar",  1.82, 2 },
        { "Carla Diniz",  1.70, 3 },
        { "David Esteves", 1.79, 4 }
    };


int main (){
FILE *arq;

Aluno turma_aux[4];

arq = fopen("text.bin", "wb+");

    if (arq == NULL) {
        printf("Nao foi possivel ler o arquivo.\n");
        return 1;
    }

    fwrite(turma, sizeof(Aluno), 4, arq);
    rewind(arq);
    fread(&turma_aux, sizeof(Aluno), 4, arq);

fclose(arq);

    int posicao = busca_binaria(turma_aux, 0, 3, 3);

    printf ("A posicao do aluno buscado no array eh: %d\n", posicao);
return 0;
}


int busca_binaria( Aluno *array, int inicio, int fim, int alvo){ //inicio, fim etc sao posicoes no vetor

if(fim >= inicio){
    int meio = inicio + (fim - inicio)/2; //pq


    if(array[meio].matricula == alvo){
        return meio;
    }

    if(array[meio].matricula > alvo){
        return busca_binaria(array, inicio, meio-1, alvo);
    }else if (array[meio].matricula < alvo){
        return busca_binaria(array, meio+1, fim, alvo);
    }
}
return -1;
}
