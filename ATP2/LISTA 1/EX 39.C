#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int qtd_negativos(int *array, int size);

int main(){
    int array[6];
    srand(time(NULL));

    for(int i = 0; i < 6; i++){
        array[i] = rand() %5 -2;
    }
    printf("vetor: ");
    for(int j = 0; j < 6; j++){
        printf("%d ", array[j]);
    }

    printf("\nO vetor possui %d numeros negativos", qtd_negativos(array, 6));
    return 0;
}

int qtd_negativos(int *array, int size){
int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] < 0){
            count++;
        }
    }
return count;
}
