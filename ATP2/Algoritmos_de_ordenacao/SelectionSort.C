//A ideia aqui eh achar o menor valor do array e coloca-lo na posicao 0. Para isso vamos usar uma funcao para achar o menor e outra para trocar o menor atual pelo primeiro e assim por diante
// Aprendizado: Meu maior problema foi na funcao menor_elemento. Me confundi no uso de ponteiros e acabei misturando os conceitos.

#include <stdio.h>
#define ARRAY_SIZE 10

void trocar(int *num1, int *num2);
int menor_elemento(int *array, int primeiro);
void selection_sort(int *array);


int main(){

int array[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4 ,3 ,2, 1};

for(int i = 0; i < ARRAY_SIZE; i ++){
    printf("%d ", array[i]);
}

    selection_sort(array);
printf("\n ");

for(int i = 0; i < ARRAY_SIZE; i ++){
    printf("%d ", array[i]);
}

}

void trocar(int *num1, int *num2){
int aux = *num1;

    *num1 = *num2;
    *num2 = aux;

}

int menor_elemento(int *array, int primeiro){ //n eh o primeiro elemento atual, podendo estar na primeira, segunda posicao etc etc
int menor = primeiro;

    for(int i = primeiro +1; i < ARRAY_SIZE  ; i ++){
        if (array[i] < array[menor]){
            menor = i;
        }
    }

return menor;
}

void selection_sort(int *array){
int menor;
    for(int i = 0; i < ARRAY_SIZE; i++){
        menor = menor_elemento(array, i);
        trocar(&array[i], &array[menor]);
    }

}
