#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define string_size 20
#define qtd_strings 3

int main(){
char matriz_strings[qtd_strings][string_size];
char *ptr[qtd_strings];
char *aux[qtd_strings];
    for(int i = 0; i < qtd_strings; i++){
        ptr[i] = matriz_strings[i];
    };
    for(int i = 0; i < qtd_strings; i++){
        printf("Digite a string na linha %d da matriz: \n", i);
        scanf("%s", ptr[i]);

    };
    for (int i = 0; i < qtd_strings - 1; i++) {
        for (int j = 0; j < qtd_strings - 1 - i; j++) {
            if (strcmp(ptr[j], ptr[j+1]) > 0) {
            }
        }
    }
    for(int i = 0; i < qtd_strings; i++){
        printf("A string armazenada na linha %d da matriz eh %s \n", i, *(ptr+i));
    };


return 0;
}
