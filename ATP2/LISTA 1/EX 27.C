#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define array_size 50


void limpar_quebrainha(char* string, int word_size){
    for(int i = 0; i < word_size; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }
}

bool is_palindrome(char *string, int word_size){
    char aux[word_size+1];
    int z = 0;
    for(int i = word_size - 1; i >= 0; i--){
        aux[z] = string[i];
        z++;
    }
    aux[z] = '\0';
    if (strcmp(string, aux) != 0){
        return false;
    }else return true;
}


int main() {
    char string[array_size];
    printf("digite uma palavra ");
    fgets(string, array_size, stdin);
    limpar_quebrainha(string, array_size);

    int word_size = strlen(string);


    if(is_palindrome(string, word_size) == true){
        printf("Eh palindroma");
    }else printf("Nao Eh palindroma");

    return 0;
}


