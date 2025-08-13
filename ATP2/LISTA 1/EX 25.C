#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define array_size 50

int n_linhas(char *array, int word_size){
    int linhas = 1;
    for(int i = 0; i < word_size; i++){
        if (array[i] == '\n'){
            linhas++;
        }
    }


    return linhas;
}

int n_palavras(char *array, int word_size){
    int palavras = 1;

    for(int i = 0; i < word_size; i++){
        if(array[i] == ' '){
            palavras++;
        }
    }
    return palavras;
}

int main() {
    char string[array_size];
    fgets(string, array_size, stdin);
    int word_size = strlen(string) - 1;
    printf("Palavra selecionada: %s", string);
    printf("Numero de caracteres: %d\nNumero de palavras: %d\nNumero de linhas: %d\n", word_size, n_palavras(string, word_size), n_linhas(string, word_size));

    return 0;
}


