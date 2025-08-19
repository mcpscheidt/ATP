#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define string_size 20
#define qtd_strings 5

int main(){
char matriz_strings[qtd_strings][string_size];
char *ptr[qtd_strings];

    for(int i = 0; i < qtd_strings; i++){
        ptr[i] = matriz_strings[i];
    };
    for(int i = 0; i < qtd_strings; i++){
        printf("Digite a string na linha %d da matriz: \n", i);
        scanf("%s", ptr[i]);

    };
    for(int i = 0; i < qtd_strings; i++){
        printf("A string armazenada na linha %d da matriz eh %s \n", i, *(ptr+i));
    };


return 0;
}
