#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define array_size 10
#define word_size 1024

int achar_maior(int *array, int tamanho){
    int maior = array[0];
    for(int i = 1; i<tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }
    return maior;
}

int main() {

int array[array_size] ={2, 101, 100, 88, 2, 10, 7, 99, 17, 3};

printf("A media dos elementos eh: %d", achar_maior(array, array_size));


return 0;
}
