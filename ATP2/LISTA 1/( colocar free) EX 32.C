```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define array_size 5
#define word_size 1024


int main() {
    char* array[array_size];
    int tamanho_palavra[array_size];


        for(int i = 0; i < array_size; i++){
            array[i] = malloc(word_size);
            fgets(array[i], word_size, stdin);

        }

        int indice_maior_palavra = 0;

    for(int i = 1; i < array_size; i++){
        if(strlen(array[i]) > strlen(array[indice_maior_palavra])){
            indice_maior_palavra = i;
        }
    }

    printf("A palavra mais comprida eh: %s\n", array[indice_maior_palavra]);

    for (int i = 0; i < array_size; i++) {
        free(array[i]);
    }
    
    return 0;
}
```
