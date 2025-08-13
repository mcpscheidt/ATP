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

int main() {
    char string[array_size], string2[array_size];
    printf("digite uma palavra ");
    fgets(string, array_size, stdin);
    printf("digite uma palavra ");
    fgets(string2, array_size, stdin);

    int word_size = strlen(string);
    limpar_quebrainha(string, word_size);
    strcat(string, string2);

    printf("palavra concatenada: %s", string);

    return 0;
}


