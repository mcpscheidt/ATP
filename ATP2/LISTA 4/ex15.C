#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Escreva um programa em C para atualizar um registro em um arquivo bin ́ario.

typedef struct {
    char nome[100];
    float altura;
    int matricula; //por que char?
} Aluno;

Aluno turma[4] = {
        { "Ana Beatriz",  1.65, 1 },
        { "Bruno Cesar",  1.82, 2 },
        { "Carla Diniz",  1.70, 3 },
        { "David Esteves", 1.79, 4 }
    };


int main (){
FILE *arq;
Aluno turma_aux[4];
int matricula_selecionada;


arq = fopen("text.bin", "wb+");

    if (arq == NULL) {
        printf("Nao foi possivel ler o arquivo.\n");
        return 1;
    }

    fwrite(turma, sizeof(Aluno), 4, arq);
    rewind(arq);
    fread(&turma_aux, sizeof(Aluno), 4, arq);

    // printar os dados
       for(int i = 0; i < 4; i++){
        printf ("Nome do aluno %d: %s\n",i, turma_aux[i].nome);
        printf ("Altura do aluno %d: %.2f\n", i, turma_aux[i].altura);
        printf ("Matricula do aluno %d: %d\n",i, turma_aux[i].matricula);
        printf ("----------------------\n");
        printf ("\n");
    }

    printf ("selecione o aluno que voce gostaria de mudar o cadastro (escolha por matricula): ");
    scanf("%d", matricula_selecionada);
    //para exemplo vamos mudar o sobre nome de David manualmente, mas seria facil fazer com que o usuario digitasse o que ele quer mudar
    int posicao_byte = 3*sizeof(Aluno);
    char *nome_certo = "David Silva";
    fseek(arq, posicao_byte, SEEK_SET);

    fwrite(nome_certo, 100, 1, arq);

    rewind(arq);

    fread(&turma_aux, sizeof(Aluno), 4, arq);
fclose(arq);

     for(int i = 0; i < 4; i++){
        printf ("Nome do aluno %d: %s\n",i, turma_aux[i].nome);
        printf ("Altura do aluno %d: %.2f\n", i, turma_aux[i].altura);
        printf ("Matricula do aluno %d: %d\n",i, turma_aux[i].matricula);
        printf ("----------------------\n");
        printf ("\n");
    }




return 0;
}

