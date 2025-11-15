#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

void merge ();
void merge_sort (int vetor[], int inicio, int meio, int fim);

int main (){
int i;
int vetor[] = { 4, 5, 1, 0, 7, 6, 3, 2 };

    merge(vetor, 0, 7);

    for (i = 0; i < 8; i++)
        printf("%d ", vetor[i]);


return 0;
}

void merge_sort (int vetor[], int inicio, int meio, int fim){
int auxiliar[MAX]; //cria um vetor auxiliar
int i = inicio, j = meio+1, k = 0; //pq k = 0 por que eh o vetor auxiliar

    while(i <= meio && j <= fim){ //apos cada troca dentro do array, os indices vao aumentar, caso o indice do inicio fique maior que o do fim, o loop acaba
        if(vetor[i] < vetor[j])
            auxiliar[k++] = vetor[i++]; // no caso do vetor [1,4,3], a primeira condicao se cumpriria e continuaria [1,4,3] e agora o auxiliar[1] e vetori[1]
        else                            //Apos isso, ele vai ver que o vetori[1] eh maior que vetorj[2] que eh 3, com isso, a segunda condicao eh acionada
            auxiliar[k++] = vetor[j++]; //Com a segunda condicao temos: auxiliar[1] = vetorj[2], ficando [1, 2, lixo];
    }

// agora vamos terminar de preencher o auxiliar com os numeros que faltam

while (i <= meio) auxiliar[k++] = vetor[i++]; // tem os dois loops pq nao sabemos se foi o i > meio ou o j > fim que ja foi cumprido
while (j <= fim) auxiliar[k++] = vetor[j++];


// copia de auxiliar para vetor
for (i = inicio, k=0; i <= fim; i++, k++)
vetor[i] = auxiliar[k];
}

void merge(int vetor[], int ini, int fim) {
int meio;                                       //aqui vamos dar indices para o merge_sort, na pratica utilizamos apenas um vetor
                                                // mas na teoria nos vamos passar vetores cada vez menores p merge, pq assim fica mais facil
    if (ini < fim) {
        meio = (ini + fim) / 2;
        merge(vetor, ini, meio);
        merge(vetor, meio + 1, fim);
        merge_sort(vetor, ini, meio, fim);
    }
}

