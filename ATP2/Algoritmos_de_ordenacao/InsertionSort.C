#include <stdio.h>
#define ARRAY_SIZE 10

//insertion_sort
//aprendizado: a maior dificuldade foi entender como colocar os numeros para a direita no vetor e depois fazer o loop para isso de novo

void insertion_sort(int *array);

int main(){

int array[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4 ,3 ,2, 1};

for(int i = 0; i < ARRAY_SIZE; i ++){
    printf("%d ", array[i]);
}

    insertion_sort(array);
printf("\n ");

for(int i = 0; i < ARRAY_SIZE; i ++){
    printf("%d ", array[i]);
}

}

void insertion_sort(int *array){
int key, j;

for(int i=1; i < ARRAY_SIZE; i++){ //for p cada numero
    key = array[i];
    j = i -1;

    while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j -1;
    }
    array[j +1] = key;
}

}
