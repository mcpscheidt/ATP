#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define array_size 5
bool is_positive(int *array){

    for(int i = 0; i <array_size; i++){
        if(array[i]<0){
            return false;
        }else return true;
    }
}

int main() {
    srand(time(NULL));
    int vetor[array_size];
    printf("Numeros escolhidos: ");
    for (int i = 0; i <array_size; i++){
        vetor[i] = rand()%201-100;
            printf("%d ", vetor[i]);
    }
    bool teste = is_positive(vetor);
    if(teste == true){
        printf("\nO array so tem numeros positivos.\n");
    }else printf("\no array contem numeros negativos.\n");
    return 0;
}


