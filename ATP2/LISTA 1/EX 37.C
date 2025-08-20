#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define array_size 5
#define word_size 1024

int media_valores(int *array, int tamanho){
    int soma = 0;
    for(int i = 0; i < array_size; i++){
        soma = soma+array[i];

    }

    int media = soma/tamanho;
return media;
}

int main() {

int array[array_size] ={2, 2, 2, 2, 2};

printf("A media dos elementos eh: %d", media_valores(array, array_size));


return 0;
}
