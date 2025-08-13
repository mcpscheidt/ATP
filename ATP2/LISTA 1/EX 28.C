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

void change_character(char *string, int word_size){
    //trocar r por l igual cebolinha
    for (int i = 0; i <word_size; i++){
        if(string[i] == 'r'){
            string[i] = 'l';
        }
    }

}
int main() {
    char string[array_size];
    printf("digite uma palavra ");
    fgets(string, array_size, stdin);
    limpar_quebrainha(string, array_size);

    int word_size = strlen(string);
    change_character(string, word_size);

    printf("Cebolinha uma vez disse: %s", string);

    return 0;
}


