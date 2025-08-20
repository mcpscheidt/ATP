#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define array_size 5

int main() {
   int *array[array_size];
   int *buffer;
    printf("Digite 5 numeros: ");

    for(int i = 0; i < array_size; i++){

        array[i] = malloc(sizeof(int));
        scanf("%d", array[i]);
    }
    for (int i = 0; i<array_size; i++){
        printf("O numero no indice %d eh: %d\n", i, *array[i]);

    }


    return 0;
}
